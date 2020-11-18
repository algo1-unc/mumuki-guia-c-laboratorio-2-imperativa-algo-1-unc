#include <stdio.h>
#include <string.h>

// Macros
#define ABS(x) ((x < 0) ? (-x) : x)
#define DISTANCIA(x,y) (ABS(x-y))


// Funcion para generar mensaje de test
char* genMsj(const int x, const int y, const int result ) {
    char* message;
    asprintf(&message, "distancia(%d, %d) = %d", x, y, result);
    return message;
}