#!/bin/sh

TARGET=sous-chaine

#
# Ce placer dans le répertoire courant
#
TESTDIR="$(cd "$(dirname "$0}")" && pwd)"
cd "$TESTDIR"

#
# Conserver une trace de toutes les actions
#
LOG="test.log"
rm -f "$LOG"
touch "$LOG"

#
# Importer les fonctions communes à tous les tests
#
. ./fonctions.sh


#
# Compilation du programme.
#

annoncer "Compilation"
rm -f $TARGET
make $TARGET >> $LOG 2>&1 || fail
coloredEcho "OK" green


annoncer "Tests erreur"
./$TARGET "Bonjour tout le monde!!"
if [ $? -eq 0 ] ; then
  fail
fi
coloredEcho "OK" green

./$TARGET
if [ $? -eq 0 ] ; then
  fail
fi
coloredEcho "OK" green

annoncer "Tests"
#
# Test "entrée/sortie"
#
OUT=$(./$TARGET "Bonjour tout le monde!!" "tout")
echo "$OUT" >> $LOG
if [ -z "${OUT}" ] || [ "${OUT}" -ne 8 ] ; then
  fail
fi
coloredEcho "OK" green

OUT=$(./$TARGET "Bonjour tout le monde!!" "Bonjour tout le monde!!")
echo "$OUT" >> $LOG
if [ -z "${OUT}" ] || [ "${OUT}" -ne 0 ] ; then
  fail
fi
coloredEcho "OK" green

OUT=$(./$TARGET "Bonjour tout le monde" "monde!")
echo "$OUT" >> $LOG
if [ -z "${OUT}" ] || [ "${OUT}" -ne -1 ] ; then
  fail
fi
coloredEcho "OK" green

exit 0
