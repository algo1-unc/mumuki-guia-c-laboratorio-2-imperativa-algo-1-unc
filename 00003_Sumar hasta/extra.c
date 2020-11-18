#include <stdio.h>
#include <string.h>
#include <assert.h>


// Funciones para generar mensaje de test
char* genMsj(const int x, const int result ) {
    char* message;
    asprintf(&message, "sumarHasta(%d) = %d", x, y, result);
    return message;
}

int SUMAR_HASTA(int N) {
    assert(N >= 0);
    int acc = 0;

    for (int i = 1; i <= N; i++)  {
        acc = acc + (i*i);
    }
    return acc;
}