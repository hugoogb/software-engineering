#!/bin/bash

linia=$1
fitxer=$2

let liniaAnterior=linia-1
let liniaSeguent=linia+1

`tail +$liniaSeguent $fitxer > part3`

if [ $linia -gt 1 ]
then
  `head -$liniaAnterior $fitxer > part1`
  `cat part1 >> $fitxer`
fi

`head -$linia $fitxer | tail -1 | cut -d: -f2- > linia2_2`

read -p "Introdueix el nou camp: " campCanviat
echo "$campCanviat" > linia2_1

`paste -d: linia2_1 linia2_2 > part2`

cat /dev/null > esportistes.txt

`cat part2 >> $fitxer`
`cat part3 >> $fitxer`
