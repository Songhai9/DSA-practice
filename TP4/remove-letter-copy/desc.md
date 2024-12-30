## Remove Letter with Copy

This exercise is the same as the (remove-letter) problem, but this time the string passed as a parameter **must not be modified**. A new string containing the result must be returned by the function.

Write *in the header file `remove-letter.h`* a function `removeLetter` that takes a string as the first argument and a character as the second argument and returns **a new string** that corresponds to the provided string with all occurrences of the letter removed.

In case of an issue, your function should return a null pointer (`NULL`).

The `tests.c` file allows you to create a program that automatically tests your program. You can also create your own program in another file to test your function. To do this, you can include the `copy.h` file. Example test program:

```C
#include "remove-letter.h"

int main(void)
{
  // call to the removeLetter(...) function.
}

```

### Examples

The string "Hello" with 'e' removed becomes "Hllo".
The string "Hello" with 'l' removed becomes "Heo".

---

## Suppression de lettre avec copie

Cette exercice est le même que le problème (remove-letter) mais cette fois-ci la chaine passée en paramètre **ne doit pas
être modifiée**. Une nouvelle chaine contenant le résultat doit être retournée par la fonction.

Ecrire *dans le fichier d'entête `remove-letter.h`* une fonction `removeLetter` prend une chaine de
caractères en premier argument et un caractère ne second argument et retourne **une nouvelle chaine de caractère** qui
correspond à la chaine fournie dont toutes les occurences de
la lettre ont été supprimées.

En cas de problème votre fonction doit retourner un pointeur null (`NULL`).


Le fichier `tests.c` permet de créer un programme qui test automatiquement votre programme. Vous pouvez aussi créer votre propre programme dans un autre fichier afin de tester votre fonction. Pour cela, vous pouvez inclure le fichier `copy.h`. Exemple de programme de test :

```C
#include "remove-letter.h"

int main(void)
{
  // appel vers la fonction removeLetter(...).
}

```

### Exemples

La chaine de caractère "Hello" dont le 'e' est supprimé devien "Hllo".
La chaine de caractère "Hello" dont le 'l' est supprimé devien "Heo".
