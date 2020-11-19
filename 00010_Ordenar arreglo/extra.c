#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <assert.h>
#include <stdlib.h>


// Funciones para generar mensajes de test
char* genMsjTest(const char* original, const char* expected ) {
    char* message;
    asprintf(&message, "%s. Ordenado:%s", original, expected);
    return message;
}

char* genMsjResult(const char* student) {
    char* message;
    asprintf(&message, "Retornado:%s", student);
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

bool twoArrayEqual(int a[], int b[], int tam) {
    bool are_eq = true;
    for (int i = 0; i < tam; i++) {
        are_eq = are_eq && (a[i] == b[i]);
    }
    return are_eq;
}