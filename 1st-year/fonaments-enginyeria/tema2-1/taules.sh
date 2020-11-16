#!/bin/bash

taula=1
while [ $taula -le 10 ]
do
  i=1
  while [ $i -le 10 ]
  do
    let res=$taula*$i
    echo "$res" >> "taula-del-$taula"
    let i=i+1
  done
  let taula=taula+1
done
