# Dynamic Path Return

## Reminder of the previous problem (Problem 35):

One of the products necessary for the fabrication of the magical ointment, a very rare mineral, is only found in one place on the planet—at the bottom of the oldest existing mine, once exploited by the dwarven people. Nowadays, only a few of them remain on-site to guide travelers (merchants and tourists) within this maze of caverns and tunnels. After hiring a guide, he leads you to the intended location, but a small disagreement over the payment of his services leaves you stranded, with no chance of finding your way back to the entrance. Fortunately, your robot has stored in memory the sequence of movements that brought you from the entrance to your current position. All you need to do is follow the reverse path!

## New Feature:

This time, you don’t know the number of movements made in advance.

## What your program should do:

There are 5 types of movements, represented by 5 different integers:
- Move left (1)
- Move right (2)
- Move forward (3)
- Move up (4)
- Move down (5)

Additionally, the integer 0 indicates that you have reached your destination.

Your program (to be written in a file named `chemin.c`) must read integers from the terminal (one per line) corresponding to the path taken to the destination.

You must then print the sequence of movements required to return to the entrance from your current position.

**It is highly recommended to use a stack:**
For instance, this one: [Documentation](https://bramas.gitlab.io/libtps.h/tps_stack.h.html).

You must also write a `Makefile` containing a rule to compile the program `chemin` (which uses the `tps` library) and a `clean` rule.

## Example

Input:
```plaintext
1
3
2
4
4
5
0
```

Output:
```plaintext
4
5
5
1
3
2
```

---

# Chemin retour Dynamique

## Rappel du problème précédent (problème 35):

L'un des produits nécessaires pour la fabrication de l'onguent magique, un minerai très rare, ne se trouve qu'en un seul endroit sur la planète, au fond de la plus vieille mine existante, jadis exploitée par le peuple nain. Désormais seuls quelques uns d'entre eux sont encore sur place, afin de guider les voyageurs (commerçants et touristes) au sein de ce dédale de cavernes et galeries.
Après avoir engagé un guide, il vous mène jusqu'à l'endroit prévu mais un petit désaccord sur le paiement de ses services le pousse à vous laisser sur place, sans aucune chance de retrouver la sortie. Heureusement votre robot à conservé en mémoire la suite des déplacements qui vous ont amené de l'entrée jusqu'à votre position actuelle, il ne vous reste plus qu'à suivre le chemin inverse !

## Nouveauté :

Cette fois-ci vous ne connaissez pas à l'avance le nombre de déplacement effectués

## Ce que doit faire votre programme :

Il existe 5 types de déplacements, représentés par 5 entiers différents :
aller à gauche (1), aller à droite (2), aller tout droit (3), monter (4) et descendre (5).

De plus l'entier 0 signifie que l'on est arrivé à destination.

Votre programme (toujours dans un fichier `chemin.c`) doit lire dans le terminal des entiers (un par ligne) correspondant au
chemin emprunté jusqu'à la destination.

Vous devez afficher la suite des déplacements à faire pour aller de votre position actuelle
à la sortie.

**Il est fortement conseillé d'utiliser une pile:
Par exemple celle-ci:  [Doc](https://bramas.gitlab.io/libtps.h/tps_stack.h.html)**.

Vous devez écrire un `Makefile` contenant un règle pour compiler le programme `chemin` (qui utilise la librairie tps) et une règle `clean`


### Exemple

entrée :
```
1
3
2
4
4
5
0
```
sortie :
```
4
5
5
1
3
2
```
