#include <stdio.h>

// a) Devuelve el cuadrado
int cuadrado(int n) {
    return n * n;
}

// b) Cuadrado con void (modifica la variable original)
void cuadradoVoid(int *n) {
    *n = (*n) * (*n);
}

// c) Muestra dirección y contenido
void mostrar(int *n) {
    printf("Direccion: %p - Contenido: %d\n", &n, *n);
}

// d) Invertir valores
void Invertir(int *a, int *b) {
    int aux = *a;
    *a = *b;
    *b = aux;
}

// e) Ordenar (menor en a, mayor en b)
void orden(int *a, int *b) {
    if (*a > *b) {
        Invertir(a, b);
    }
}

int main() {
    int x, y;
    printf("Ingrese dos numeros: ");
    scanf("%d %d", &x, &y);

    // f) Probar las funciones
    printf("Originales: x=%d, y=%d\n", x, y);
    
    printf("Datos de x: ");
    mostrar(&x);

    orden(&x, &y);
    printf("Ordenados (menor primero): x=%d, y=%d\n", x, y);

    Invertir(&x, &y);
    printf("Invertidos: x=%d, y=%d\n", x, y);

    return 0;
}