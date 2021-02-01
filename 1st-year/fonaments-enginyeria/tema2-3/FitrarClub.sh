#!/bin/bash

arxiu=esportistes

read -p "Introdueix el club: " club

awk -F: 'BEGIN{ print "Esportistes del club:" }
{ if ( club_introduit == $5 ) print $1, $2, $3 }
END{}' club_introduit=$club $arxiu >> ${arxiu}_club

cat ${arxiu}_club
rm ${arxiu}_club
