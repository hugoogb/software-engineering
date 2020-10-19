#!/bin/bash

echo "Introdueix un nombre: "
read num

i=1
res=1
while [ $i -le $num ]
do
  res=$((res*i))
  let i=i+1
done

echo "El factorial de $num es: $res"
