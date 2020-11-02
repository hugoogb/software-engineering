#!/bin/bash

echo "Introdueix el nom: "
read nom

awk -F: 'BEGIN{}
varnom==$1 {print $0}
END{}' varnom=$nom esportistes
