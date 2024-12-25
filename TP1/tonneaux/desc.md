# Secret Recipe
credit: http://www.france-ioi.org

## What your program should do:

You are standing in front of a water source that springs from the mountain, and you have two empty barrels with capacities of 5 liters and 3 liters. Write a program that performs a series of transfers to obtain exactly 4 liters of water in the larger barrel.
Stop as soon as the large barrel contains exactly 4 liters.

## Commands for this exercise

To measure the water in the barrels, you have these three instructions:
```
Remplir tonneau
Vider tonneau
Transférer tonneauSource -> tonneauDestination
```

To identify a barrel at the location of tonneau, tonneauSource, or tonneauDestination, use its capacity: 3 or 5.

When transferring from one barrel to another, stop when the source barrel is empty or when the destination barrel is full to the brim. Thus, after each operation, you can know exactly how many liters of water are in both barrels.
In C, the three instructions are written as follows:
```
remplir(tonneau);
vider(tonneau);
transferer(tonneauSource, tonneauDestination);
```

The following program experiments with the three instructions described above.

```C
#include <stdio.h>
#include "tonneaux.h"

int main()
{
   remplir(5);
   transferer(5, 3);
   vider(5);
}
```

---

# Recette secrète
crédit: http://www.france-ioi.org

## Ce que doit faire votre programme :

Vous vous trouvez devant une source d'eau qui jaillit de la montagne, et vous disposez de deux tonneaux vides de capacités 5 litres et 3 litres. Écrivez un programme qui effectue une série de transvasements permettant d'obtenir exactement 4 litres d'eau dans le plus grand tonneau.
Arrêtez-vous bien dès que le grand tonneau contient exactement 4 litres.

## Commandes pour cet exercice

Pour doser l'eau dans les tonneaux, vous disposez de ces trois instructions :
```
Remplir tonneau
Vider tonneau
Transférer tonneauSource -> tonneauDestination
```

Pour identifier un tonneau à l'emplacement de tonneau, tonneauSource ou tonneauDestination, utilisez sa contenance : 3 ou 5.

Quand on transvase un tonneau dans l'autre, on s'arrête lorsque le tonneau source est vide ou lorsque le tonneau destination est plein à ras bord. Ainsi, après chaque opération, on peut savoir exactement combien de litres d'eau se trouvent dans les deux tonneaux.
En C, les trois instructions s'écrivent comme suit :
```
remplir(tonneau);
vider(tonneau);
transferer(tonneauSource, tonneauDestination);
```

Le programme suivant expérimente les trois instructions décrites ci-dessus.

```C
#include <stdio.h>
#include "tonneaux.h"

int main()
{
   remplir(5);
   transferer(5, 3);
   vider(5);
}
```
