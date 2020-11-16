#!/bin/bash

linies=`wc -l < animals.txt`

caracters=0

for (( i=1; i<=linies; i++ ))
do
  paraula=`head -$i animals.txt | tail -1 | wc -c`

  if [ $paraula -gt $caracters ]
  then
    paraulaMax=`head -$i animals.txt | tail -1`
    caracters=$paraula
  fi
done

echo "La paraula mes llarga es: $paraulaMax"
