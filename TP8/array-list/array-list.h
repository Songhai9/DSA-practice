#include "tps_unit_test.h"
#include <stdio.h>
#include <stdlib.h>

typedef struct {
    void ** elements;
    size_t available;
    size_t count;
} list_t;

list_t* list_create(void);
int list_append(list_t *list, void *element);
int list_prepend(list_t *list, void *element);
int list_insert(list_t *list, size_t index, void *element);
void* list_get(list_t *list, size_t index);
void list_set(list_t *list, size_t index, void *element);
void* list_take(list_t *list, size_t index);
size_t list_size(const list_t *list);
void list_free(list_t *list);
