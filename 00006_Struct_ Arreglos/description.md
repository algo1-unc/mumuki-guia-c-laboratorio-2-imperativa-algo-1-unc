* Programe la función `analizaArray` en lenguaje C:

```javascript
struct info_t analizaArray(int a[], int tam) {
 ...
}
```

, donde la estructura `info_t` esta definida como:
 
```javascript
struct info_t {
    int sumatoria;
    int maximo;
    int minimo;
    bool alguno_positivo;
    bool todos_positivos;
};
```

La función toma un arreglo de enteros (`a`) y su tamaño (`tam`); y devuelve una estructura de tipo `info_t` con la suma total de los elementos, el maximo y mínimo elemento encontrado, y dos 'booleanos' que indican si esta conformada por todos números positivos, o contiene al menos uno.

> **IMPORTANTE:** La función debe contener un único ciclo.