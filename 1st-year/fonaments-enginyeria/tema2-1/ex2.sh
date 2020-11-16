#!/bin/bash

camp=`head -1 esportistes.txt | cut -d: -f1`
echo "${camp}"

echo "Introdueix el nou camp: \c"
read campCanviat

# echo ${campCanviat} >> esportistes.txt
