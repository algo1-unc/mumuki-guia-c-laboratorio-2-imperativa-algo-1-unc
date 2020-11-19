* Hacer una función llamada `intercambiar` con el siguiente tipo:

```javascript
void intercambiar(int a[], int tam, int i, int j){
...
}
```
La misma, recibe un arreglo de enteros (`a`), su tamaño (`tam > 0`) y dos posiciones como argumento (`i` y `j`), e intercambia los elementos en dichas posiciones, como se muestra a continuación:

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

**Recuerda** chequear que las posiciones `i` y `j` esten en el rango correcto.