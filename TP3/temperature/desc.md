# Explosive Mixture

**Credit:** france-ioi.org

The chemists at the university have developed a new method for creating an ointment that allows for very rapid wound healing. However, this process is very lengthy and requires constant monitoring of the preparation while it is heating, sometimes for hours. Assigning this task to a student is not possible—they always fall asleep or fail to pay attention... which risks an explosion!

An automated system for monitoring the preparation would therefore be useful. This system would check the temperature every 15 seconds, and if it becomes abnormal, an alarm should sound to alert everyone.

## What your program should do:

Your program (written in a file `temperatures.c`) will need to read three integers: the total number of measurements to be taken, as well as the minimum and maximum allowable temperatures. The following integers will represent the different temperatures measured over time.

As long as the measured temperatures remain within the acceptable range, your program should output the text **"Nothing to report,"** but as soon as a temperature is out of range, it must output the text **"Alert!!"** and stop.

### Examples

#### Example 1
Input:
```
5
10
20
15
10
20
0
15
```

Output:
```
Nothing to report
Nothing to report
Nothing to report
Alert!!
```

#### Exemple 2
input:
```
3
0
100
15
50
75
```
output:
```
Rien à signaler
Rien à signaler
Rien à signaler
```

# Mélange explosif
(crédit : france-ioi.org)

Les chimistes de l'université ont mis au point un nouveau procédé de fabrication d'un onguent qui permet une cicatrisation très rapide des blessures. Ce procédé est cependant très long et nécessite une surveillance de tous les instants de la préparation en train de chauffer, et ce parfois pendant des heures. Confier cette tâche à un étudiant n'est pas possible, ils s'endorment toujours ou ne font pas attention… et cela risque alors d'exploser !
Un dispositif automatique de surveillance de la préparation serait donc intéressant. Celui-ci surveillerait la température toutes les 15 secondes, et si celle-ci devient anormale alors une alarme devrait sonner, afin de prévenir tout le monde.

## Ce que doit faire votre programme :


Votre programme (écrit dans un fichier `temperatures.c`) devra lire trois entiers : le nombre total de mesures envisagées ainsi que la température minimum et maximum autorisées. Les entiers suivants seront les différentes températures relevées au cours du temps.
Tant que les températures relevées restent dans le bon intervalle, votre programme devra écrire le texte « Rien à signaler », mais dès que la température n'est pas bonne il doit écrire le texte « Alerte !! » et s'arrêter.

### Exemples

#### Exemple 1
entrée :
```
5
10
20
15
10
20
0
15
```
sortie :
```
Rien à signaler
Rien à signaler
Rien à signaler
Alerte !!
```

#### Exemple 2
entrée :
```
3
0
100
15
50
75
```
sortie :
```
Rien à signaler
Rien à signaler
Rien à signaler
```
