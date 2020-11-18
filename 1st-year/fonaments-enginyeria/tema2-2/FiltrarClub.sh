#!/bin/bash

read -p "Introdueix el nom del club: " clubBuscat

linies=`wc -l < esportistes`

i=1

cat /dev/null > Club

while [ $i -le $linies ]
do
  club=`head -$i esportistes | tail -1 | cut -d: -f5`
  nom=`head -$i esportistes | tail -1 | cut -d: -f1`

  if [ $club == $clubBuscat ]
  then
    echo "$nom" >> Club
  fi

  let i=i+1
done

# grep ".*:.*:.*:.*:$clubBuscat" esportistes > Club
