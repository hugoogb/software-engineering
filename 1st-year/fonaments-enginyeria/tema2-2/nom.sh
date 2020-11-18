#!/bin/bash

linies=`wc -l < esportistes`

read -p "Introdueix el nom a buscar: " nomBuscar

i=1

while [ $i -le $linies ]
do
  nom=`head -$i esportistes | tail -1 | cut -d: -f1`

  if [ $nom == $nomBuscar ]
  then
    echo "$nom"
  fi

  let i=i+1
done
