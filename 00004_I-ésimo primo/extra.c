#include <stdio.h>
#include <string.h>
#include <assert.h>


// Funciones para generar mensaje de test
char* genMsj(const int x, const int result ) {
    char* message;
    asprintf(&message, "iesimoPrimo(%d) = %d", x, result);
    return message;
}


// Funcion de control
int IESIMO_PRIMO(int N)  {
    assert(N > 0);
    
    int id = 1;
    int last_prime = 2;
    int next = last_prime + 1;
    bool is_prime;


    while (id != N) {

        is_prime = false;
        for (int i = 2; i <= (next/2); i++) {
            if (next % i == 0) {
                is_prime = true;
                break;
            }
        }
        
        if (!is_prime) {
            last_prime = next;
            id++;
        }

        next ++;
    }
    return last_prime;
}