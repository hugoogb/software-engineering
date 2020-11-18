#!/bin/bash

option=0

while [ $option -ne 4 ]
do
  echo "MENU"
  echo "1- Calcular l'edat mitjana dels esportistes"
  echo "2- Llistat de tots els esportistes d'un club"
  echo "3- Llistat de tots els esportistes amb mateix cognom"
  echo "4- Sortir"
  read option

  case $option in
    1)
      . mitjana.sh
      ;;
    2)
      . FiltrarClub.sh
      ;;
    3)
      . FiltrarCognom.sh
      ;;
    4)
      ;;
  esac

done
