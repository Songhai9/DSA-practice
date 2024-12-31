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
void addNode(Node *root, int value)
{
	Node *n = malloc(sizeof(Node));
	if (!n)
		return;

	n->value = value;
	n->next = NULL;

	while (root->next)
	{
		root = root->next;
	}
	root->next = n;
}

int getValue(Node *root, unsigned long idx)
{
	for (unsigned long i = 0; i < idx; i++)
	{
		root = root->next;
	}
	return root->value;
}

void freeLastNode(Node *root)
{
	Node *previous = NULL;
	while (root->next)
	{
		previous = root;
		root = root->next;
	}
	if (previous)
	{
		previous->next = NULL;
	}
	free(root);
}

void freeList(Node *root)
{
	while (root->next)
	{
		freeLastNode(root);
	}
	free(root);
}

Node *createList(int value)
{
	Node *n = malloc(sizeof(Node));
	if (!n)
		return NULL;
	n->value = value;
	n->next = NULL;
	return n;
}

void setValue(Node *root, unsigned long idx, int value)
{
	if (root == NULL)
		return;

	for (unsigned long i = 0; i < idx; i++)
	{
		root = root->next;
	}

	root->value = value;
}

unsigned long getSize(Node *root)
{
	if (root == NULL)
		return 0;
	unsigned long size = 1;
	while (root->next != NULL)
	{
		root = root->next;
		size++;
	}
	return size;
}

void insertNode(Node **root, unsigned long idx, int value)
{
    if (root == NULL || *root == NULL)
        return;

    Node *insertedNode = malloc(sizeof(Node));
    if (!insertedNode)
        return;

    insertedNode->value = value;

    if (idx == 0)
    {
        insertedNode->next = *root;
        *root = insertedNode;
        return;
    }

    Node *current = *root;
    for (unsigned long i = 0; i < idx - 1; i++)
    {
        if (current == NULL)
        {
            free(insertedNode);
            return;
        }
        current = current->next;
    }

    if (current != NULL)
    {
        insertedNode->next = current->next;
        current->next = insertedNode;
    }
    else
    {
        free(insertedNode);
    }
}


void removeNode(Node **root, unsigned long idx)
{

	if (root == NULL || *root == NULL)
		return;

	if (idx == 0)
	{
		Node *tmp = *root;
		*root = (*root)->next;
		free(tmp);
		return;
	}
	else
	{
		Node *current = *root;
		for (unsigned long i = 0; i < idx - 1; i++)
		{
			if (current->next == NULL)
				return;
			current = current->next;
		}
		Node *tmp = current->next;
		if (tmp != NULL)
		{
			current->next = tmp->next;
			free(tmp);
		}
	}
}
