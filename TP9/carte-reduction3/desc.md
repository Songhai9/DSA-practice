# Discount Card
credit: france-ioi.org

The description is similar to the problem carte-reduction, the numbering of loyalty cards has changed.

You are employed in a cinema and your boss decides to launch a special offer.
Anyone with a loyalty card has the right, for one month, to see one free movie per day. Of course, some people will try to cheat by coming to the cinema multiple times in the same day, and your job is to detect these cheaters.

If you find a cheater, you must leave your cash register to a colleague and take the cheater to your boss, who will confiscate their loyalty card.

### Input

The first line contains the integer N, the number of customers of the day.
Then there are N lines, each line contains the code of a loyalty card.
A loyalty card code is a sequence of 5 uppercase letters.

### Output

You must write a single integer, the loyalty card code of the first cheater you found.
If there was no cheater, write the value -1.

### Time Limits

Time: 0.5 s

### Constraints

0 <= N <= 100,000, the number of customers coming to the cinema in a single day.

### Examples

#### Example 1
input:
```
4
TQPDC
TCEXC
PQSMC
TCEXC
```

output:
```
TCEXC
```

#### Example 2
input:
```
3
TQPDC
TCEXC
PQSMC
```
output:
```
-1
```
---

#Carte de réduction
crédit: france-ioi.org

La description est similaire au problème carte-reduction, la numérotation des cartes de fidélité a changée.

Vous êtes employé dans un cinéma et votre patron décide de lancer une offre spéciale.
Toute personne possédant une carte de fidélité a le droit, pendant un mois,
de voir un film gratuit par jour. Bien entendu certaines personnes vont essayer de
tricher en venant plusieurs fois au cinéma dans la même journée et votre travail
consiste à détecter ces tricheurs.

Si vous trouvez un tricheur, vous devez laisser votre caisse à un collègue,
et emmener le tricheur chez votre patron qui lui confisquera sa carte de fidélité.

### Entrée

La première ligne contient l'entier N, le nombre de clients de la journée.
Il y a ensuite N lignes, chaque ligne contient le code d'une carte de fidélité.
Un code d'une carte de fidélité est une suite de 5 lettres majuscules.

### Sortie

Vous devez écrire un seul entier, le numéro de carte de fidélité du premier tricheur que vous avez trouvé.
S'il n'y avait pas de tricheur, écrivez la valeur -1.

### Limites de temps

Temps : 0.5 s

### Limites

0 <= N <= 100 000, le nombre de clients venant au cinéma en une seule journée.


### Exemples

#### Exemple 1
entrée :
```
4
TQPDC
TCEXC
PQSMC
TCEXC
```

sortie :
```
TCEXC
```

#### Exemple 2
entrée :
```
3
TQPDC
TCEXC
PQSMC
```
sortie :
```
-1
```
