#!/bin/bash

esportistes=`wc -l < esportistes.txt`

edatMenor=`head -1 esportistes.txt | tail -1 | cut -d: -f4`

cat /dev/null > menor.txt

i=1
while [ $i -le $esportistes ]
do
  edat=`head -$i esportistes.txt | tail -1 | cut -d: -f4`

  if [ $edat -lt $edatMenor ]
  then
    edatMenor=$edat
  fi

  let i=i+1
done

i=1
while [ $i -le $esportistes ]
do
  edat=`head -$i esportistes.txt | tail -1 | cut -d: -f4`

  if [ $edat -eq $edatMenor ]
  then
    nom=`head -$i esportistes.txt | tail -1 | cut -d: -f 1,2,3`
    echo "$nom" | tr -s ':' ' '>>menor.txt
  fi

  let i=i+1
done
