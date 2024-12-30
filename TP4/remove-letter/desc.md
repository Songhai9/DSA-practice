## Remove Letter

Write *in the header file `remove-letter.h`* a function `removeLetter` that takes a string as the first argument and a character as the second argument and removes all occurrences of that letter in the string. Your function must directly modify the given string and not create a new string.

The file `tests.c` allows you to create a program that automatically tests your function. You can look at the file `tests.c`. You can also create your own program in another file to test your function. To do this, you can include the file `remove-letter.h`. Example test program:

```C
#include "remove-letter.h"

int main(void)
{
  // call to the function removeLetter(...).
}

```

### Examples

The string "Hello" with the 'e' removed becomes "Hllo".
The string "Hello" with the 'l' removed becomes "Heo".

---

## Suppression de lettre

Ecrire *dans le fichier d'entête `remove-letter.h`* une fonction `removeLetter` qui prend une chaine de
caractères en premier argument et un caractère en second argument et supprime toutes les occurences de
cette lettre dans la chaine de caractères. Votre fonction doit modifier directement la chaine qui est donnée et ne pas
créer une nouvelle chaine.


Le fichier `tests.c` permet de créer un programme qui test automatiquement votre programme. Vous pouvez regarder le fichier `tests.c`. Vous pouvez aussi créer votre propre programme dans un autre fichier afin de tester votre fonction. Pour cela, vous pouvez inclure le fichier `remove-letter.h`. Exemple de programme de test :

```C
#include "remove-letter.h"

int main(void)
{
  // appel vers la fonction removeLetter(...).
}

```

### Exemples

La chaine de caractère "Hello" dont le 'e' est supprimé devient "Hllo".
La chaine de caractère "Hello" dont le 'l' est supprimé devient "Heo".
