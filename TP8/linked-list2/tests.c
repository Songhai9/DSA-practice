#include <stdio.h>
#include "tps_unit_test.h"
#include "linked-list.h"


TEST_INIT_GLOBAL


Node * createListOfGivenSize(unsigned long size)
{
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
void test_insertNode(void)
{
  __remaining_alloc = -1;
  Node * root = createListOfGivenSize(10);
  insertNode(&root, 5, -1);
  tps_assert(getValue(root, 4) == 4);
  tps_assert(getValue(root, 5) == -1);
  tps_assert(getValue(root, 6) == 5);
  freeList(root);
}
void test_insertNode2(void)
{
  __remaining_alloc = -1;
  Node * root = createListOfGivenSize(10);
  insertNode(&root, 0, -1);
  tps_assert(getValue(root, 0) == -1);
  tps_assert(getValue(root, 1) == 0);
  freeList(root);
}
void test_removeNode(void)
{
  __remaining_alloc = -1;
  Node * root = createListOfGivenSize(10);
  removeNode(&root, 5);
  tps_assert(getValue(root, 4) == 4);
  tps_assert(getValue(root, 5) == 6);
  freeList(root);
}
void test_removeNode2(void)
{
  __remaining_alloc = -1;
  Node * root = createListOfGivenSize(10);
  removeNode(&root, 0);
  tps_assert(getValue(root, 0) == 1);
  tps_assert(getValue(root, 1) == 2);
  freeList(root);
}

int main(void)
{
  TEST(test_allocError);
  TEST(test_createList);
  TEST(test_getSize);
  TEST(test_getValue);
  TEST(test_setValue);
  TEST(test_insertNode);
  TEST(test_insertNode2);
  TEST(test_removeNode);
  TEST(test_removeNode2);
}
