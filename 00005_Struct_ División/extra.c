#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <assert.h>


// Funciones para generar mensaje de test
char* genMsj(   const int dividendo, const int divisor, 
                const int cociente, const int resto, const bool excepcion) {
    char* message;
    asprintf(&message, "division(%d, %d). Cociente:%d, Resto:%d, Excepcion:%s", 
        dividendo, divisor, cociente, ressto, excepcion ? "true" : "false");
    return message;
}


// Funcion de control
struct DIV_T {
    int cociente;
    int resto;
    bool excepcion;
};


struct DIV_T DIVISION(int dividendo, int divisor) {
    struct DIV_T div_t;
    div_t.cociente = 0;
    div_t.resto = 0;
    div_t.excepcion = true;

    if (divisor != 0) {
        div_t.cociente = dividendo / divisor;
        div_t.resto = dividendo % divisor;
        div_t.excepcion = false;
    }

    return div_t;
}
