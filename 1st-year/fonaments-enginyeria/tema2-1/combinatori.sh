#!/bin/bash

echo "Introdueix un nombre: "
read numN
echo "Introdueix un altre nombre (major que l'anterior): "
read numM

let numMN=numM-numN

i=1
factN=1
while [ $i -le $numN ]
do
  let factN=factN*i
  let i=i+1
done

i=1
factM=1
while [ $i -le $numM ]
do
  let factM=factM*i
  let i=i+1
done

i=1
factMN=1
while [ $i -le $numMN ]
do
  let factMN=factMN*i
  let i=i+1
done

let factNMN=factN*factMN
let resCombinatori=factM/factNMN

echo "El combinatori de C, on n=$numN i m=$numM, es: $resCombinatori"
