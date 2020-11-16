#!/bin/bash

echo "Introdueix un numero (1-3): \c"
read option

case $option in
  1)
    echo "Ets el primer en arribar"
    ;;
  2)
    echo "Subcampio de la temporada"
    ;;
  3)
    echo "A la tercera va la vençuda"
    ;;
  *)
    echo "Opcio incorrecta"
    ;;
esac
