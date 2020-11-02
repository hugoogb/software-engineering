#!/bin/bash

esportistes=`wc -l < esportistes`

edatMenor=`head -1 esportistes | tail -1 | cut -d: -f4`

cat /dev/null > menor

i=1
while [ $i -le $esportistes ]
do
  edat=`head -$i esportistes | tail -1 | cut -d: -f4`

  if [ $edat -lt $edatMenor ]
  then
    edatMenor=$edat
  fi

  let i=i+1
done

i=1

while [ $i -le $esportistes ]
do
  edat=`head -$i esportistes | tail -1 | cut -d: -f4`

  if [ $edat -eq $edatMenor ]
  then
    nom=`head -$i esportistes | tail -1 | cut -d: -f 1,2,3`
    echo "$nom" | tr -s ':' ' '>>menor
  fi

  let i=i+1
done
