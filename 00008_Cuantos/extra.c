#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <assert.h>
#include <stdlib.h>


// Funciones para generar mensajes de test
char* genMsj(   const char* list, const int elem, 
                const int menores, const int iguales, const int mayores) {

    char* message;
    asprintf(&message, "%s. (> %d): %d, (== %d): %d, (< %d): %d", 
        list, elem, mayores, elem, iguales, elem, menores);
    return message;
}

char* arrayToString(int a[], int tam) {
    int offset = 0;
    char *string;
    string = calloc((tam*2)+1, sizeof(char));

    offset += sprintf (&string[offset], "[");
    for (int i = 0; i < tam; i++) {
        if (i != tam - 1) {
            offset += sprintf (&string[offset], "%d,", a[i]);
        } else {
            offset += sprintf (&string[offset], "%d", a[i]);
        }
    }
    offset += sprintf (&string[offset], "]");
    return string;
}

// Funcion de control
struct COMP_T {
    int menores;
    int iguales;
    int mayores;
};

struct COMP_T CUANTOS(int a[], int tam, int elem) {
    struct COMP_T comp_t;
    int c_val;

    comp_t.menores = 0;
    comp_t.iguales = 0;
    comp_t.mayores = 0;
    
    for (int i = 0; i < tam; i++) {
        c_val = a[i];
        if (c_val < elem) {
            comp_t.menores += 1; 
        } else if (c_val == elem) {
            comp_t.iguales += 1; 
        } else {
            comp_t.mayores += 1;
        }
    }
    return comp_t;
}