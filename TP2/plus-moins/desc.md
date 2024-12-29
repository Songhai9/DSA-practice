# Plus/Minus
(credit france-ioi.org)

In a commercial city, it is important for the inhabitants to be strong in mental arithmetic in order to negotiate their prices and choose the best products without being deceived. The university's pedagogy department has therefore been asked to develop stimulating exercises for children, which will encourage them to work on their mental arithmetic.
Realizing the potential that your robot can have in an educational setting, the researchers ask you to develop a program capable of automatically playing the "it's more, it's less" game with a child: the child must guess a secret number by making guesses, and each time they are told "it's more" or "it's less" until they find the correct number.
The goal is, of course, for the children to find the correct number as quickly as possible!

### What your program should do:

Your program should first read an integer, the number that the child must find. Then, it should read the player's guesses and display the text "it's more" (the child guessed too low) or "it's less" (the child guessed too high) each time, and repeat until the child finds the correct number.
At the end, it should display the text "Number of attempts needed:" and then, on the next line, the number of attempts that were needed.
It is guaranteed that the child will eventually find the correct value!

### Examples

#### Example 1
input:
```
5
1
2
3
4
5
```
output:
```
it's more
it's more
it's more
it's more
Number of attempts needed:
5
```

#### Example 2
input:
```
10
5
15
8
12
11
10
```
output:
```
it's more
it's less
it's more
it's less
it's less
Number of attempts needed:
6
```

#### Example 3
input:
```
-50
-80
-50
```
output:
```
it's more
Number of attempts needed:
2
```

---

# Plus/Moins
(crédit france-ioi.org)

Dans une cité commerçante, il est important que les habitants soient forts en calcul mental afin de pouvoir négocier leurs prix et choisir les meilleurs produits sans se faire avoir. Le département de pédagogie de l'université a donc été sollicité afin de mettre au point des exercices stimulants pour les enfants, qui vont les inciter à travailler leur calcul mental.
Réalisant le potentiel que peut avoir votre robot dans un cadre pédagogique, les chercheurs vous demandent de mettre au point un programme capable de faire jouer de manière automatisée un enfant au jeu du « c'est plus, c'est moins » : l'enfant doit deviner un nombre secret en faisant des propositions, et on lui répond chaque fois par « c'est plus » ou « c'est moins », jusqu'à ce qu'il ait trouvé le bon nombre.
L'objectif est bien sûr pour les enfants de trouver le bon nombre le plus rapidement possible !

### Ce que doit faire votre programme :

Votre programme doit d'abord lire un entier, le nombre que l'enfant devra trouver. Ensuite, il devra lire les propositions du joueur, et afficher à chaque fois le texte « c'est plus » (l'enfant a proposé un nombre trop petit) ou « c'est moins » (l'enfant a proposé un nombre trop grand) selon les cas, et recommencer tant que l'enfant n'a pas trouvé le bon nombre.
À la fin, il faudra afficher le texte « Nombre d'essais nécessaires : » puis, à la ligne en dessous, le nombre d'essais qui ont été nécessaires.
On vous garantit que l'enfant finira par trouver la bonne valeur !

### Exemples

#### Exemple 1
entrée :
```
5
1
2
3
4
5
```
sortie :
```
c'est plus
c'est plus
c'est plus
c'est plus
Nombre d'essais nécessaires :
5
```

#### Exemple 2
entrée :
```
10
5
15
8
12
11
10
```
sortie :
```
c'est plus
c'est moins
c'est plus
c'est moins
c'est moins
Nombre d'essais nécessaires :
6
```

#### Exemple 3
entrée :
```
-50
-80
-50
```
sortie :
```
c'est plus
Nombre d'essais nécessaires :
2
```
