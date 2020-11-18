* Programe la función `analiza_array` en lenguaje C:

```javascript
struct info_t analiza_array(int a[], int tam) {
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
    bool todos_positivo;
};
```

La función toma un arreglo de enteros (`a`) y su tamaño (`tam`); y devuelve una estructura de tipo `info_t` con la suma total de los elementos, el maximo y mínimo elemento encontrado, y dos 'booleanos' que indican si esta conformada por todos números positivos, o contiene al menos uno.

> **IMPORTANTE:** La función debe contener un único ciclo.