# Fire Stations
(credit: france-ioi.org)

The city has many fire stations, each with its own designated intervention zone. However, upon examining these zones, it seems that they are not very well chosen because sometimes they overlap, while some areas of the city are outside all zones and thus not protected by the firefighters. You decide to help the mayor better organize the firefighters' actions.

### What your program should do:

Your program should read the description of several pairs of rectangular zones and determine if the two rectangles intersect for each pair.
You need to read an initial integer, the number of pairs of zones your program will need to test.
Then, for each possible pair, two rectangular zones parallel to the axes are given one after the other. Each zone is described by 4 integers:
the coordinates of the bottom-left point of the rectangle (x and y) followed by its width and height.

In this example, the bottom zone is described by the 4 integers (1, 1, 5, 4) and the other by (4, 3, 5, 5):

![](http://data.france-ioi.org/Task/8355777713bf1306dff997afaa2af813/exemple.png)

For each pair of zones, your program should output "YES" if the zones intersect and "NO" otherwise. If they only touch at the edges, it should output "NO".

### Example

input:
```
2
1
1
5
4
4
3
5
5
0
0
2
2
10
10
2
2
```

output:
```
YES
NO
```

*Comments:*
There are two pairs of rectangles, the first corresponds to the example given above (so the answer is `YES`), and the second corresponds to two squares of side 2, at positions (0, 0) and (10, 10), which do not intersect (so the answer is `NO`).

---

# Casernes de pompiers
(crédit : france-ioi.org)

La ville comprend de nombreuses casernes de pompiers et chacune a sa propre zone d'intervention qui lui est réservée. Cependant en regardant ces zones il vous semble qu'elles ne sont pas très bien choisies car parfois elles se recoupent alors que certains endroits de la ville sont en dehors de toutes les zones et donc ne sont pas protégées par les pompiers. Vous décidez d'aider le maire à mieux organiser l'action des pompiers.

### Ce que doit faire votre programme :

Votre programme doit lire la description de plusieurs paires de zones rectangulaires, et pour chacune, déterminer si les deux rectangles s'intersectent.
Vous devez lire un premier entier, le nombre de paires de zones que votre programme devra tester.
Ensuite, pour chaque paire possible, deux zones rectangulaires et parallèles aux axes vous sont données
l'une après l'autre. Chaque zone est décrite par 4 entiers :
les coordonnées du point inférieur gauche du rectangle (abscisse et ordonnée) puis sa largeur et sa hauteur.

Sur cet exemple, la zone du bas est donc décrite par les 4 entiers (1, 1, 5, 4) et l'autre par (4, 3, 5, 5) :

![](http://data.france-ioi.org/Task/8355777713bf1306dff997afaa2af813/exemple.png)

Pour chaque paire de zones, votre programme doit écrire "OUI" si les zones s'intersectent et "NON" sinon. Si elles ne font que se toucher sur les bords il doit écrire "NON".

### Exemple

entrée :
```
2
1
1
5
4
4
3
5
5
0
0
2
2
10
10
2
2
```

sortie:
```
OUI
NON
```

*Commentaires :*
IL y a deux paires de rectangle, le premier correspond à
l'exemple donné plus haut (donc la réponse est `OUI`)
et le deuxième correspond à deux carrés deux coté 2, aux positions (0, 0) et
(10, 10) qui ne s'intersectent pas (donc la réponse est `NON`).