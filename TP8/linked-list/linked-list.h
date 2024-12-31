#include <stdio.h>
#include <stdlib.h>
#include "tps_unit_test.h"


typedef struct Node
{
  int value;
  struct Node *next;
} Node;

/**
* append a node to the list pointed by root with the given value,
*/
void addNode(Node *root, int value);

int getValue(Node *root, unsigned long idx);

void freeLastNode(Node *root);

void freeList(Node *root);

Node * createList(int value);

void setValue(Node *root, unsigned long idx, int value);

unsigned long getSize(Node *root);
