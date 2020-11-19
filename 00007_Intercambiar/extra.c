#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <assert.h>
#include <stdlib.h>


// Funciones para generar mensaje de test
char* genMsjTest(const char* origin_array, const char* expected_array, const int id_i, const int id_j) {
    char* message;
    asprintf(&message,"Intercambio(%d <-> %d). Original:(%s), Esperado:(%s)", id_i, id_j, origin_array, expected_array);
    return message;
}

char* genMsjResult(const char* studen_array) {
    char* message;
    asprintf(&message,"Retornado:(%s)", studen_array);
    return message;
}

char* arrayToString(int a[], int tam) {
    int offset = 0;
    char *string;
    string = calloc((tam*2)+1, sizeof(char));

    for (int i = 0; i < tam; i++) {
        if (i==0) {
            offset += sprintf (&string[offset], "[%d,", a[i]);
        } else if (i < tam - 1) {
            offset += sprintf (&string[offset], "%d,", a[i]);
        } else {
            offset += sprintf (&string[offset], "%d]", a[i]);
        }
    }
    return string;
}

bool twoArrayEqual(int a[], int b[], int tam) {
    bool are_eq = true;
    for (int i = 0; i < tam; i++) {
        are_eq = are_eq && (a[i] == b[i]);
    }
    return are_eq;
}

// Funcion de control
void INTERCAMBIAR(int a[], int tam, int i, int j) {
    assert(tam > 0);
    assert(i >= 0 && i < tam);
    assert(j >= 0 && j < tam);

    int temp = a[j];
    a[j] = a[i];
    a[i] = temp;
}