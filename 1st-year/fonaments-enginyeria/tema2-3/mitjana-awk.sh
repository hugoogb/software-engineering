#!/bin/bash

awk -F: 'BEGIN{}
{contador=contador+$4}
END{print contador/NR}' esportistes
