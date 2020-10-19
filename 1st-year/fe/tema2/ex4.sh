#!/bin/bash

linies=`wc -l < file4.txt`

i=1
while [ $i -le $linies ]
do
  camp=`head -$i file4.txt | tail -1 | cut -d: -f1`
  echo "El camp 1 de la linia $i es $camp"
  let i=i+1
done
