# Bases for Statues
(credit: france-ioi.org)

The inhabitants of Algoréa love to erect statues and place them on majestic bases. Depending on the dimensions of the statue, the base must be more or less high and offer a more or less large surface to place the statue on. However, statue builders often have difficulty estimating the amount of concrete needed to construct each base. You want to write a program to help them.

### What your program should do

Here is an example of a base:

![Pyramid formed by 3 square steps of decreasing sizes](http://data.france-ioi.org/Task/cd03d2d9846da4acceaa4e13e1e19084/schema.png)

A base is thus made up of levels, each level having a height equal to one unit and a square base. The side of the squares decreases by one unit at each level.
Your program (in a file `socles.c`) should read two integers, representing respectively the width of the base at ground level and the width of the base at the top face of the base. It should then calculate and display the volume of the base.

### Example

input:
```
7
3
```

output:
```
135
```

*Comments:*

The volume of the first level is 7 × 7 = 49, the volume of the second is 6 × 6 = 36, etc., and the volume of the last level is 3 × 3 = 9. The total volume is therefore: 7 × 7 + 6 × 6 + 5 × 5 + 4 × 4 + 3 × 3 = 135.

--- 

# Socles pour Statues
(crédit: france-ioi.org)

Les habitants d'Algoréa aiment bien ériger des statues et les poser sur des socles majestueux. Selon les dimensions de la statue, le socle doit être plus ou moins haut et offrir une surface plus ou moins grande pour y poser la statue. Cependant, les constructeurs de statues ont souvent du mal à estimer la quantité de béton nécessaire à la construction de chaque socle. Vous souhaitez écrire un programme pour les aider.

### Ce que doit faire votre programme

Voici un exemple de socle :

![Pyramide formée de 3 marches carrées de tailles décroissantes](http://data.france-ioi.org/Task/cd03d2d9846da4acceaa4e13e1e19084/schema.png)

Un socle est ainsi constitué d'étages, chaque étage ayant une hauteur égale à une unité et une base carrée. Le côté des carrés diminue de une unité à chaque étage.
Votre programme (dans un fichier `socles.c`) doit lire deux entiers, représentant respectivement la largeur du socle au niveau du sol et la largeur du socle au niveau de la face supérieure du socle. Il doit ensuite calculer et afficher le volume du socle.

### Exemple

entrée :
```
7
3
```

sortie :
```
135
```

*Commentaires :*

Le volume du premier étage est 7 × 7 = 49, le volume du second est 6 × 6 = 36, etc. et le volume du dernier étage est 3 × 3 = 9. Le volume total est donc : 7 × 7 + 6 × 6 + 5 × 5 + 4 × 4 + 3 × 3 = 135.

