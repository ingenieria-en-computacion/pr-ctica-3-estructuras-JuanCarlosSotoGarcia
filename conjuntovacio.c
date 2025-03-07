#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

#define MAX_SIZE 100

typedef struct {
    int elementos[MAX_SIZE];
    int cardinalidad;
} Conjunto;

Conjunto conjunto_vacio();
void imprimir_conjunto(Conjunto* c);

int main() {
    Conjunto c = conjunto_vacio();
    printf("Conjunto vacío: ");
    imprimir_conjunto(&c);
    return 0;
}

Conjunto conjunto_vacio() {
    Conjunto c;
    c.cardinalidad = 0;
    return c;
}

void imprimir_conjunto(Conjunto* c) {
    printf("{ ");
    for (int i = 0; i < c->cardinalidad; i++) {
        printf("%d ", c->elementos[i]);
    }
    printf("}\n");
}