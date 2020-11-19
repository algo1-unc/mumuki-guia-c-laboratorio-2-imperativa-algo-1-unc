* Codificar una función llamada `intercambiar` con el siguiente prototipo:

```javascript
void intercambiar(int a[], int tam, int i, int j){
...
}
```
, la cual recibe un arreglo de enteros (`a`), su longitud (`tam > 0`) y dos posiciones como argumento (`i` y `j`), e intercambia los elementos de dichas posiciones como se muestra a continuación:

> ```javascript
> intercambiar([1,2,3,-5,5,6,-7], 7, 1, 5)
> [1,6,3,-5,5,2,-7]
>
> intercambiar([1,-7], 2, 0, 1)
> [-7,1]
>
> intercambiar([0], 1, 0, 0)
> [0]
>```

**Recuerda** comprobar que las posiciones `i` y `j` esten en el rango correcto.