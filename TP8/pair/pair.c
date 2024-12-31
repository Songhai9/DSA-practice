#include <stdlib.h>
#include "pair.h"

// Crée une paire avec deux éléments
pair_t *pair_create(void *first, void *second) {
    pair_t *pair = (pair_t *)malloc(sizeof(pair_t));
    if (pair == NULL)
        return NULL;

    pair->first = first;
    pair->second = second;
    return pair;
}

// Retourne le premier élément de la paire
void *pair_get_first(pair_t *pair) {
    if (pair == NULL)
        return NULL;
    return pair->first;
}

// Retourne le second élément de la paire
void *pair_get_second(pair_t *pair) {
    if (pair == NULL)
        return NULL;
    return pair->second;
}

// Libère la mémoire associée à la paire (sans libérer les éléments)
void pair_free(pair_t *pair) {
    if (pair != NULL) {
        free(pair);
    }
}

// Échange les éléments de la paire
void pair_swap(pair_t *pair) {
    if (pair == NULL)
        return;

    void *temp = pair->first;
    pair->first = pair->second;
    pair->second = temp;
}
