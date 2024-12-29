# Loading

A loading bar is a string of characters composed of the character `[` followed by several `=` characters, followed by several spaces ` `, and ending with the character `]`. There must always be 10 characters between `[` and `]` (whether they are spaces or `=` signs).

Examples of loading bars:

```
[=======   ]
[===       ]
[==========]
[          ]
```

1. Write a function `progressBar` that takes an integer `n` as a parameter and displays a loading bar containing `n` `=` signs in the terminal.

2. Does your `progressBar` function have any preconditions?

3. Write a program that asks the user for a number and calls your `progressBar` function with that number. If the user enters a number less than 0, display a progress bar of 0, and if they enter a number greater than 10, display a progress bar of 10.

---

# Chargement

Une barre de chargement est une chaine de caractère composée du caractère `[` suivi de plusieurs fois le caractère `=` suivis de plusieurs espace ` `, et terminée par le caractère `]`. Il doit toujour y avoir 10 caractères entre `[` et `]` (que se soient des espaces ou des signes `=`).

Exemples de barre de chargement :

```
[=======   ]
[===       ]
[==========]
[          ]
```

1. Ecrire une fonction `progressBar` prenant un entier `n` en paramètre et affichant dans le terminal une barre de chargement contenant `n` signes `=`.

2. Votre fonction progressBar a-t-elle des préconditions?

3. Ecrire un programme qui demande un nombre à l'utilisateur et appelle votre fonction `progressBar` avec ce nombre. Si l'utilisateur entre un nombre plus petit que 0 affichez une barre de progression de 0, et s'il rentre un nombre plus grand que 10, affichez une barre de progression de 10.
