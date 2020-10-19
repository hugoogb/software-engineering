#!/bin/bash

let liniaAnterior=$1-1
head `-$liniaAnterior $2` > file2.txt

echo "Introdueix una cadena: "
read cadena

camps=head `-$1 $2 | tail -1 | cut -d: -f2-`
linia=$cadena:$camps

echo $linia >> resEx2.txt

let liniaSeguent=$1+1

tail +$liniaSeguent $2 >> resEx2.txt
