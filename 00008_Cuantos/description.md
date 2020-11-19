* Codificar la función `cuantos`:

```javascript
struct comp_t cuantos(int a[], int tam, int elem) {
...
}
```
, donde la estructura `comp_t` esta definida como:
 
```javascript
struct comp_t {
    int menores;
    int iguales;
    int mayores;
};
```

La misma, calcula cuántos elementos **menores**, **iguales** y **mayores** a (`elem`) contiene el arreglo de enteros (`a`) de longitud (`tam >= 0`).

> **IMPORTANTE:** La función solo debe contener un único ciclo.