#!/bin/bash

arxiu=esportistes

awk -F: 'BEGIN{print "Cognoms A_M:"}
$2 <= "M";
END{}' $arxiu >> ${arxiu}_AM

cat ${arxiu}_AM
rm ${arxiu}_AM

awk -F: 'BEGIN{print "Cognoms N-Z:"}
$2 > "M";
END{}' $arxiu >> ${arxiu}_NZ

cat ${arxiu}_NZ
rm ${arxiu}_NZ
