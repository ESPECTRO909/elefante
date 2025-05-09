#!/bin/bash

echo ingrese el numero de circulos a mostar en el contorno 
read numero
echo el numero ingresado es $numero

sed -i "2s/.*/$numero/" coordenadas_escaladas.txt
gcc coordenadas_escaladas.txt
echo compilando programa....
echo ejecutando programa...
gcc int_main.c -lm

./a.out < coordenadas_escaladas.txt > imagen.svg; firefox imagen.svg




