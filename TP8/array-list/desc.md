
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
