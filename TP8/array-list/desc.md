
Implement the functions for the lists in a file named `array-list.c`.
Declare the functions in a header file `array-list.h`. You should include the test file at the beginning:
```C
#include "tps_unit_test.h"
```

The list structure should be declared in the `array-list.h` file and defined in the `array-list.c` file.
It will take the following form:

```C
struct list_t {
    void ** elements;
    size_t available;
    size_t count;
};
```

In this exercise, we will use dynamic allocation to create the list, and if needed (append, insert), we will use realloc to
dynamically resize the array.

The functions to be implemented are as follows (see the `tests.c` file for details, including the expected arguments and return type):

```C

/**
 * Function list_create
 * 
 * creates an empty list.
 * Returns NULL in case of an error.
 */

/**
 * Function list_append
 * 
 * Adds an element to the end of the list.
 * Returns 0 in case of an error.
 * Returns 1 if successful.
 */

/**
 * Function list_prepend
 * 
 * Adds an element to the beginning of the list.
 * Returns 0 in case of an error.
 * Returns 1 if successful.
 */

/**
 * Function list_insert
 * 
 * Inserts an element at the position idx.
 * Returns 0 in case of an error, 1 otherwise.
 */

/**
 * Function list_get
 * 
 * Returns the (idx+1)-th element.
 * In case of overflow, the behavior is undefined
 * (most likely a segfault).
 */

/**
 * Function list_set
 * 
 * Replaces the element at the given position with the given element.
 */

/**
 * Function list_take
 * 
 * Returns the element at the position idx, then removes this element from the list.
 */

/**
 * Function list_size
 * 
 * Returns the size of the list.
 */

/**
 * Function list_free
 * 
 * Frees the list (but not the elements).
 */

```


Implémenter les fonctions sur les listes dans un fichier `array-list.c`
Déclarer les fonctions dans un fichier d'entête `array-list.h`. Vous devez inclure au début le fichier de test:
```C
#include "tps_unit_test.h"
```

La structure de liste est à déclarer dans le fichier `array-list.h` et à définir dans le fichier `array-list.c`.
Elle prendra la forme suivante: 

```C
struct list_t {
    void ** elements;
    size_t available;
    size_t count;
};
```

Dans cet exercice, on utilisera l'allocation dynamique pour créer la liste et en cas de besoin (append, insert) on utilisera realloc pour
redimentionner le tableau de façon dynamique.

Les fonctions à implémenter sont les suivantes (voir le fichier `tests.c` pour les détails, notamments les arguments et le type de retour attendu):

```C

/**
 * Fonction list_create
 * 
 * crée une liste vide. 
 * Retourne NULL en cas de problème.
 */

/**
 * Fonction list_append
 * 
 * Ajoute un élément à la fin de la liste
 * en cas de problème, retourne 0
 * si tout se passe bien, retourne 1
 */

/**
 * Fonction list_prepend
 * 
 * Ajoute un élément au début de la liste
 * en cas de problème, retourne 0
 * si tout se passe bien, retourne 1
 */

/**
 * Fonction list_insert
 * 
 * insert un élémént à la position idx
 * retourn 0 s'il y a un problème, 1 sinon
 */

/**
 * Fonction list_get
 * 
 * retourne le (idx+1)-ieme élément.
 * En cas de dépassement, le comportement est indéfini
 * (très probablement une segfault)
 */

/**
 * Fonction list_set
 * 
 * remplace l'élément à la position donnée par l'élément donné
 */

/**
 * Fonction list_take
 * 
 * retourne l'élément à la position idx, puis enlève cet élément de la liste
 */

/**
 * Fonction list_size
 * 
 * retourne la taille de la liste
 */

/**
 * Fonction list_free
 * 
 * libère la liste (et pas les éléments)
 */

```
