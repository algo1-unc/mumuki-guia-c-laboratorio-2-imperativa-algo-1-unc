* Programe la siguiente función en lenguaje C:

```javascript
struct div_t division(int dividendo, int divisor) {
 ...
}
```

, donde la estructura `div_t` esta definida como:
 
```javascript
 struct div_t {
   int cociente;
   int resto;
   bool excepcion;
};
```

, y guardará tanto el **cociente** como el **resto** de la división.

> **NOTA:**
>
> Si `divisor == 0`, asigne `true` (`false` cc.) a la variable  **exception**. En tal caso, almacene los valores que mas le  guste en **cociente** y **resto**.