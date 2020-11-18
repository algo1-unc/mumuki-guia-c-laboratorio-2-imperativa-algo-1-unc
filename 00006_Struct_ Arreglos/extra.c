#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <assert.h>


// Funciones para generar mensaje de test
char* genMsj(   const int sum, const int max, const int min,
                const bool any_pos,  const bool all_pos) {
    char* message;
    asprintf(&message, "Sum:%d, Max:%d, Min:%d, Alguno(+):%s, Todos(+):%s",
        sum, max, min, any_pos ? "true": "false", all_pos ? "true": "false");
    return message;
}


// Funcion de control
struct INFO_T {
    int sumatoria;
    int maximo;
    int minimo;
    bool alguno_positivo;
    bool todos_positivo;
};


struct INFO_T ANALIZA_ARRAY(int a[], int tam) {
    struct INFO_T info_t;
    int c_val;

    info_t.alguno_positivo = false;
    info_t.todos_positivo = true;
    info_t.sumatoria = 0;
    info_t.maximo = a[0];
    info_t.minimo = a[0];

    for (int i = 0; i < tam; i++) {
        c_val = a[i];
        info_t.alguno_positivo = info_t.alguno_positivo || (c_val > 0);
        info_t.todos_positivo = info_t.todos_positivo && (c_val > 0);
        info_t.sumatoria = info_t.sumatoria + c_val;

        // Maximo
        if (c_val > info_t.maximo) {
            info_t.maximo = c_val;
        } 

        if (c_val < info_t.minimo) {
            info_t.minimo = c_val;
        }
    }

    return info_t;
}
