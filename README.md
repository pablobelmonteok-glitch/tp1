# tp1
# Punto 3
* apartado A)El codigo demuestra en la primera funcion dar vuelta el numero fijo 452 a lo que hace las operaciones correspondientes ,luego en las otra funcion saca la mitad del valor fijo(452) en un valor entero ,luego de eso ,a ese numero va diviendo y sacando uno por uno osea primero el 7 ,luego el 2 y por ultimo el 1 , mientras lo va sumando a todos obteniendo el valor 10.
* apartado B) Primeros errores : linea 17:falta punto y coma al final de la linea . Linea 23:falta tambien punto y coma.Linea 12:Scanf sin (&).Linea 3 : la funcion nunca cambia el valor del numero .  

# Respuestas sobre el analisis de memoria (Punto g)

* ¿A que se debe que los resultados de los apartados 2 y 3 sean iguales?
  Esto se debe a que el contenido del puntero  (apartado 2) es la direccion de memoria de la variable a la cual apunta en el apartado 3. Al imprimir puntero estamos viendo el valor que tiene guardado y al imprimir &variable estamos consultando directamente dónde está esa variable. Ambos caminos nos llevan al mismo lugar en la memoria.

* ¿Que obtiene en el punto 4?¿Es igual a los anteriores? ¿Por que?
  En el punto 4 se obtiene la dirección de memoria del propio puntero(`&puntero`). 
  
No es igual a los anteriores.Esto sucede porque el puntero es una variable. Así como la variable `int` necesita un espacio en la memoria para guardar un número, el puntero necesita su propio espacio físico en la memoria para poder guardar la dirección de la otra variable. Por lo tanto, el puntero vive en una dirección (Punto 4) pero almacena como valor otra dirección distinta (Puntos 2 y 3).