*# Empilement de cylindres
inspiré de http://www.france-ioi.org

Il y a 3 zones. Sur la première zone se trouve 4 disques de rayons croissants. 

Vous controler un robot, et le but est de déplacer tous les disques de la zone 1 à la zone 3 en respectant ces deux règles :
* on ne peut déplacer qu'un disque à la fois, car ils sont très lourds ;
* on ne peut jamais poser un disque sur un disque plus petit que lui, car sinon l'empilement s'effondrerait !

## Commandes pour cet exercice

Le robot peut exécuter cette instruction :
```
Déplacer zoneSource -> zoneDestination
```

Lorsqu'il la reçoit, le robot prend le disque se situant au sommet de la zone désignée par zoneSource et le place au sommet de la zone désignée par zoneDestination (au sol si la zone est vide).
Pour identifier une zone, écrivez à la place de zoneSource et zoneDestination le numéro de la zone concernée.
En C, l'instruction s'écrit :
```c
deplacer(zoneSource, zoneDestination);
```

N'oubliez pas d'inclure la ligne suivante en haut de votre programme pour l'utiliser : `#include "hanoi.h"`

En guise d'exemple, voici un programme qui effectue quelques déplacements : de la zone 1, il déplace le premier disque dans la zone 3 et le deuxième dans la zone 2 ; puis il remet le premier dans la zone 1.
```c

#include "hanoi.h"
int main()
{
   deplacer(1, 3);
   deplacer(1, 2);
   deplacer(3, 1);
}
```
*

---

*# Stacking Cylinders
inspired by http://www.france-ioi.org

There are 3 zones. In the first zone, there are 4 discs with increasing radii.

You control a robot, and the goal is to deplacer all the discs from zone 1 to zone 3 while respecting these two rules:
* you can only deplacer one disc at a time, because they are very heavy;
* you can never place a disc on a smaller disc, otherwise the stack would collapse!

## Commands for this exercise

The robot can execute this instruction:
```
deplacer zoneSource -> zoneDestination
```

When it receives this instruction, the robot takes the disc located at the top of the zone designated by zoneSource and places it at the top of the zone designated by zoneDestination (on the ground if the zone is empty).
To identify a zone, write the number of the concerned zone in place of zoneSource and zoneDestination.
In C, the instruction is written as:
```c
deplacer(zoneSource, zoneDestination);
```

Don't forget to include the following line at the top of your program to use it: `#include "hanoi.h"`

As an example, here is a program that performs a few deplacers: from zone 1, it deplacers the first disc to zone 3 and the second to zone 2; then it puts the first back in zone 1.
```c
#include "hanoi.h"
int main()
{
   deplacer(1, 3);
   deplacer(1, 2);
   deplacer(3, 1);
}
```
*