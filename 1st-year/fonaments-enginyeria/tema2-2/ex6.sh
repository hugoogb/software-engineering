#!/bin/bash

option=0

menu() {
  echo "MENU"
  echo "1- Calcular l'edat mitjana dels esportistes"
  echo "2- Llistat de tots els esportistes d'un club"
  echo "3- Llistat de tots els esportistes amb mateix cognom"
  echo "4- Sortir"
  read option
}

mitjana() {
  . mitjana.sh
}

FiltrarClub() {
  . FiltrarClub.sh
}

FiltrarCognom() {
  . FiltrarCognom.sh
}

while [ $option -ne 4 ]
do
  menu

  case $option in
    1)
      mitjana
      ;;
    2)
      FiltrarClub
      ;;
    3)
      FiltrarCognom
      ;;
    4)
      ;;
  esac
done
