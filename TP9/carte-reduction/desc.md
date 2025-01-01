# Discount Card
credit: france-ioi.org

You are employed at a cinema and your boss decides to launch a special offer.
Anyone with a loyalty card is entitled, for one month, to see one free movie per day.
Of course, some people will try to cheat by coming to the cinema multiple times in the same day, and your job is to detect these cheaters.

If you find a cheater, you must leave your cash register to a colleague and take the cheater to your boss, who will confiscate their loyalty card.

(your C file should be named `reduc.c`)

### Time Limits

Time: not too long

### Limits

0 <= M <= 1,000,000, the possible value for a loyalty card number.
0 <= N <= 100,000, the number of customers coming to the cinema in a single day.

### Input

The first line contains the integer N, the number of customers of the day.
The second line contains their N loyalty card numbers.

### Output

You must write a single integer, the loyalty card number of the first cheater you found.
If there was no cheater, write the value -1.

### Examples

#### Example 1
input:
```
4
10 2 3 2
```

output:
```
2
```

#### Example 2
input:
```
5
11 3 17 13 19
```
output:
```
-1
```
---

#Carte de réduction
crédit: france-ioi.org

Vous êtes employé dans un cinéma et votre patron décide de lancer une offre spéciale.
Toute personne possédant une carte de fidélité a le droit, pendant un mois,
de voir un film gratuit par jour. Bien entendu certaines personnes vont essayer de
tricher en venant plusieurs fois au cinéma dans la même journée et votre travail
consiste à détecter ces tricheurs.

Si vous trouvez un tricheur, vous devez laisser votre caisse à un collègue,
et emmener le tricheur chez votre patron qui lui confisquera sa carte de fidélité.

(votre fichier C doit se nommer `reduc.c`)

### Limites de temps

Temps : pas trop long

### Limites

0 <= M <= 1 000 000, la valeur possible pour un numéro de carte de fidélité.
0 <= N <= 100 000, le nombre de clients venant au cinéma en une seule journée.

### Entrée

La première ligne contient l'entier N, le nombre de clients de la journée.
La seconde ligne contient leurs N numéros de carte de fidélité.

### Sortie

Vous devez écrire un seul entier, le numéro de carte de fidélité du premier tricheur que vous avez trouvé.
S'il n'y avait pas de tricheur, écrivez la valeur -1.

### Exemples

#### Exemple 1
entrée :
```
4
10 2 3 2
```

sortie :
```
2
```

#### Exemple 2
entrée :
```
5
11 3 17 13 19
```
sortie :
```
-1
```
