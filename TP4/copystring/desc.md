# String Copy

Write *in a header file "copy.h"* a function `copy` with the prototype `void copy(char *ch1, char **ch2)`.
This function takes as input parameters a character string ch1 and a pointer to a character string ch2. Before the call, ch2 is a pointer to a variable of type `char*`.
After the call, ch2 points to a new char array that contains a copy of the string ch1.
In case of a problem, ch2 should contain the null pointer `NULL`.

The file `tests.c` allows you to create a program that automatically tests your function. You can also create your own program in another file to test your function. To do this, you can include the file `copy.h`. Example test program:

```C
#include "copy.h"

int main(void)
{
  // call to the copy(...) function.
}

```
---

# Copy de chaine

Ecrire *dans un fichier d'entête "copy.h"* une fonction `copy` ayant pour
prototype `void copy(char *ch1, char **ch2)` .
Cette fonction a comme paramètre en entrée une chaîne de caractères ch1 et
un pointeur vers une chaine de caractères ch2. Avant l'appel ch2 est un pointeur vers une variable de type `char*`.
Après l'appel, ch2 pointe vers un nouveau tableau de char qui contient une copie de la chaîne ch1.
En cas de problème, ch2 devra contenir le pointeur null `NULL`.

Le fichier `tests.c` permet de créer un programme qui test automatiquement votre fonction. Vous pouvez aussi créer votre propre programme dans un autre fichier afin de tester votre fonction. Pour cela, vous pouvez inclure le fichier `copy.h`. Exemple de programme de test :

```C
#include "copy.h"

int main(void)
{
  // appel vers la fonction copy(...).
}

```
