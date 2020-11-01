#!/bin/bash

linies=`wc -l < esportistes`

edatMesGran=0
liniaEdatMesGran=0

i=1
while [ $i -le $linies ]
do
  edat=`head -$i esportistes | tail -1 | cut -d: -f4`
  
  if [ $edat -gt $edatMesGran ]
  then
    edatMesGran=$edat
    liniaEdatMesGran=$i
  fi

  let i=i+1
done

nom=`head -$liniaEdatMesGran esportistes | tail -1 | cut -d: -f 1,2,3`

echo "$nom" | tr -s ':' ' '
