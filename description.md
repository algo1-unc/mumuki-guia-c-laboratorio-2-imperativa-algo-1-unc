#### **Programas como transformadores de estados**

**1)** El objetivo de este proyecto es:

* Extender los conceptos relacionados con el desarrollo de programas en lenguaje C en base al formalismo visto en el teórico/práctico de la materia;
* Introducir el uso de la librerı́a assert.h para garantizar el cumplimiento de estado;
* Familiarizarse con el uso de Arreglos en el lenguaje “C”;
* Definir tipos abstractos nuevos básicos, mediante la utilización del comando **struct**.


**2)** Recordar:

Se compila así (siendo **miarchivo.c** el codigo que escribí, y **miprograma** el ejecutable que me va a generar):

```
$> gcc -Wall -Wextra -std=c99 miarchivo.c -o miprograma
```

Luego, para ejecutarlo:

```
$>./miprograma
```

Para compilar para **gdb**, agregar el flag **-g** al momento de compilar el .c y escribir en la terminal:

```
$> gcc -Wall -Wextra -std=c99 -g miarchivo.c -o miprograma
$> gdb miprograma
Setear breakpoints (puntos de cortes) - Ej linea 5 y linea 15
$> b 5
$> b 15
Empezar a ejecutar el programa
$> run
Ver estado de variables
$> display var
Continuar hasta el siguiente breakpoint 
$> c
```



