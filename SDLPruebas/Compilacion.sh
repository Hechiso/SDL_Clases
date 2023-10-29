#!/bin/bash

nombreProyecto=Proyecto
rutaRecursos="recursos/Ventana.cpp"
rutaInterfaz="recursos/estrategiaInterfaz.cpp"
rutaVariables="recursos/Variables.cpp"

# Compilación
g++ main.cpp "$rutaRecursos" "$rutaInterfaz" -o "$nombreProyecto" "$rutaVariables" -lSDL2 -lSDL2_ttf -lX11

./"$nombreProyecto"

