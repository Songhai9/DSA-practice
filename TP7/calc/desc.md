## Calculator Project

Write a program that reads from the terminal a string of the form `X operation Y` where `X` and `Y` are real numbers and `operation` is **a single character representing an operation**: `+`, `-`, `/`, `*`, `^`. `^` means "to the power of", you need to use the `pow` function present in the `math.h` header and the `libm` library.

You should organize your program as follows:
* `calc.c` should contain only the `main` function
* `parser.h` should declare a `parse` function
* `parser.c` should define the `parse` function
* `calc-io.h` should declare a `printResult` function
* `calc-io.c` should define the `printResult` function

With the following function signatures:
```
int parse(const char * line, double *a, double *b, char *op);
void printResult(double a, double b, char op);
```
The `parse.h` file should also define constant integers `PARSE_OK`, `PARSE_ERROR_FORMAT`, and `PARSE_ERROR_OPERATION`.

The `parse` function receives a string as an argument. If the string is of the form `X operation Y`, the function returns `PARSE_OK` and uses the given pointers to return the values `X`, `Y`, and `operation` in the arguments `a`, `b`, and `op`. If an error occurs, the function should return `PARSE_ERROR_OPERATION` or `PARSE_ERROR_FORMAT` if the operator is not one of the 5 supported operations, or if there is another format-related error, respectively.

The `printResult` function should display the calculation and the associated result. For example, if I pass the values `5`, `10`, and `+` to the `printResult` function, it should display `5 + 10 = 15` (followed by a newline) in the terminal.

The `main` function should simply ask the user to enter a calculation in the correct format and display the result.

You should write a `Makefile` that compiles your project. The Makefile should also contain a recipe to compile the `tests.c` file, as well as a `clean` recipe that removes all temporary compilation files and executables.

---

## Projet calculatrice

Ecrire un programme qui lit dans le terminale une chaine de caractère de la forme
`X operation Y` ou `X` et `Y` sont des nombres réels et `operation` est
**un caractère unique représentant une opération**: `+`, `-`, `/`, `*`, `^`.
`^` signifie "à la puissance", il faut utiliser la foncion `pow` présente
dans l'entête `math.h` et la librairie `libm`

Vous devez organiser votre programme de la manière suivante:
* `calc.c` doit contenir uniquement la fonction `main`
* `parser.h` doit déclarer une fonctions `parse`
* `parser.c` doit définir la fonctions `parse`
* `calc-io.h` doit déclarer la fonctions `printResult`
* `calc-io.c` doit définir la fonctions `printResult`

Avec les signatures de fonctions suivantes:
```
int parse(const char * line, double *a, double *b, char *op);
void printResult(double a, double b, char op);
```
le fichier `parse.h` doit aussi définir des entiers constants `PARSE_OK`,
`PARSE_ERROR_FORMAT` et `PARSE_ERROR_OPERATION`.

La fonction `parse` reçoit en argument une chaine de charactère. Si la chaine
de caractères est de la forme `X operation Y`, la fonction retourne `PARSE_OK` et renvoie à l'aide
des pointeurs donnés en arguments les valeurs `X`, `Y` et `operation` dans les arguments `a`, `b` et `op`.
Si une erreur se produit, la fonction doit retourner `PARSE_ERROR_OPERATION`, resp. `PARSE_ERROR_FORMAT`, si
le l'opérateur ne fait pas partie des 5 opérations prises en charge,
resp. s'il y a une autre erreur liée au format.

La fonction `printResult` doit afficher le calcul et le résultat associé. Exemple si je passe les valeurs `5`, `10` et `+`
à la fonction `printResult` alors elle doit afficher dans le terminal `5 + 10 = 15` (suivi d'un retour à la ligne).

La fonction `main` doit simplement demander à l'utilisateur d'entrer un calcul dans le bon format,
et afficher le résultat.

Vous devez ecrire un `Makefile` qui permet de compiler votre projet. Le Makefile doit aussi contenir une recette pour compiler le fichier `tests.c`, ainsi qu'une recette `clean` qui supprime tous les fichiers temporaires de compilation et les exécutables.
