#include <stdio.h>
#include "tps_unit_test.h"
#include "linked-list.h"

TEST_INIT_GLOBAL

Node * createListOfGivenSize(unsigned long size)
{
  __remaining_alloc = -1;
  Node * root = createList(0);
  for(unsigned long i = 1; i < size; i++)
  {
    addNode(root, i);
  }
  return root;
}

void test_allocError(void)
{
  __remaining_alloc = 0;
  Node * root = createList(100);
  tps_assert(root == NULL);
}
void test_allocError2(void)
{
  __remaining_alloc = -1;
  Node * root = createList(100);
  __remaining_alloc = 0;
  addNode(root, 101);
  tps_assert(getSize(root) == 1);
  freeList(root);
}
void test_createList(void)
{
  __remaining_alloc = -1;
  Node * root = createList(100);
  tps_assert(root != NULL);
  tps_assert(getSize(root) == 1);
  tps_assert(getValue(root, 0) == 100);
  freeList(root);
}
void test_getSize(void)
{
  __remaining_alloc = -1;
  Node * root = createListOfGivenSize(10);
  tps_assert(getSize(root) == 10);
  freeList(root);
}
void test_getValue(void)
{
  __remaining_alloc = -1;
  Node * root = createListOfGivenSize(4);
  tps_assert(getValue(root, 0) == 0);
  tps_assert(getValue(root, 1) == 1);
  tps_assert(getValue(root, 2) == 2);
  tps_assert(getValue(root, 3) == 3);
  freeList(root);
}
void test_setValue(void)
{
  __remaining_alloc = -1;
  Node * root = createListOfGivenSize(10);
  setValue(root, 5, -1);
  tps_assert(getValue(root, 4) == 4);
  tps_assert(getValue(root, 5) == -1);
  tps_assert(getValue(root, 6) == 6);
  freeList(root);
}

int main(void) {

  TEST(test_allocError);
  TEST(test_allocError2);
  TEST(test_createList);
  TEST(test_getSize);
  TEST(test_getValue);
  TEST(test_setValue);
  return 0;
}
