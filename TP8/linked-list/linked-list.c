#include <stdio.h>
#include <stdlib.h>
#include "linked-list.h"


/**
* append a node to the list pointed by root with the given value,
*/
void addNode(Node *root, int value)
{
  Node *n = malloc(sizeof(Node));
  if (n == NULL)
    return;

  n->value = value;
  n->next = NULL;

  while(root->next)
  {
    root = root->next;
  }
  root->next = n;
}

int getValue(Node *root, unsigned long idx)
{
  for(unsigned long i = 0; i < idx; i++)
  {
    root = root->next;
  }
  return root->value;
}

void freeLastNode(Node *root)
{
  Node *previous = NULL;
  while(root->next)
  {
    previous = root;
    root = root->next;
  }
  if(previous)
  {
    previous->next = NULL;
  }
  free(root);
}

void freeList(Node *root)
{
  while(root->next)
  {
    freeLastNode(root);
  }
  free(root);
}

Node * createList(int value)
{
  Node *n = malloc(sizeof(Node));
  if (n == NULL)
    return NULL;

  n->value = value;
  n->next = NULL;
  return n;
}

void setValue(Node *root, unsigned long idx, int value) {
  for (unsigned long i = 0; i < idx; i++) {
    root = root->next;
  }
  root->value = value;
}

unsigned long getSize(Node *root) {
  if (root == NULL)
    return 0;

  unsigned long size = 1;
  while(root->next) {
    root = root->next;
    size++;
  }
  return size;
}
