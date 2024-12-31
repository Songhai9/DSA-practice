#include "array-list.h"

list_t *list_create(void) {
    list_t *l = malloc(sizeof(list_t));
    if (l == NULL)
        return NULL;

    l->elements = malloc(sizeof(void *));
    if (l->elements == NULL) {
        free(l);
        return NULL;
    }
    l->count = 0;
    l->available = 1;

    return l;
}


int list_append(list_t *list, void *element) {

    if (list == NULL || element == NULL)
        return 0;

    if (list->count == list->available) {
        size_t new_size = (list->available == 0) ? 1 : (list->available * 2);

        void **new_elements = realloc(list->elements, new_size * sizeof(void *));
        if (new_elements == NULL)
            return 0;
        list->available = new_size;
        list->elements = new_elements;
    }

    list->elements[list->count] = element;
    list->count++;

    return 1;
}

int list_prepend(list_t *list, void *element) {

    if (list == NULL || element == NULL)
        return 0;

    if (list->count == list->available) {
        size_t new_size = (list->available == 0) ? 1 : (list->available * 2);

        void **new_elements = realloc(list->elements, new_size * sizeof(void *));
        if (new_elements == NULL)
            return 0;
        list->available = new_size;
        list->elements = new_elements;
    }

    for (size_t i = list->count; i > 0; i--) {
        list->elements[i] = list->elements[i - 1];
    }

    list->elements[0] = element;
    list->count++;

    return 1;
}

int list_insert(list_t *list, size_t index, void *element) {

    if (list == NULL || element == NULL || index > list->count)
        return 0;

    if (list->count == list->available) {
        size_t new_size = (list->available == 0) ? 1 : (list->available * 2);

        void **new_elements = realloc(list->elements, new_size * sizeof(void *));
        if (new_elements == NULL)
            return 0;
        list->elements = new_elements;
        list->available = new_size;
    }

    for (size_t i = list->count; i > index; i--) {
        list->elements[i] = list->elements[i - 1]; 
    }

    list->elements[index] = element;
    list->count++;

    return 1;
}

void* list_get(list_t *list, size_t index) {
    if (list == NULL || index >= list->count)
        return NULL;
    
    return list->elements[index];
}

void list_set(list_t *list, size_t index, void *element) {
    if (list == NULL || index >= list->count || element == NULL)
        return;
    
    list->elements[index] = element;
}

void* list_take(list_t *list, size_t index) {
    if (list == NULL || index >= list->count)
        return NULL;

    void *element = list->elements[index];

    for (size_t i = index; i < list->count - 1; i++) {
        list->elements[i] = list->elements[i + 1];
    }

    list->count--;

    return element;
}

size_t list_size(const list_t *list) {
    if (list == NULL)
        return 0;
    return list->count;
}

void list_free(list_t *list) {
    if (list == NULL)
        return;
    free(list->elements);
    free(list);
}