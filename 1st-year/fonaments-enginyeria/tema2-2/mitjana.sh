#!/bin/bash

linies=`wc -l < esportistes`

sumaEdats=0
i=1

while [ $i -le $linies ]
do
  edat=`head -$i esportistes | head -1 | cut -d: -f4`
  let sumaEdats=sumaEdats+edat

  let i=i+1
done

mitjana=`bc <<< "scale=2; $sumaEdats/$linies"`

echo "$mitjana"
