#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

#define MAX_SIZE 100

typedef struct {
    int elementos[MAX_SIZE];
    int cardinalidad;
} Conjunto;

Conjunto conjunto_vacio();
void añadir(Conjunto* c, int elemento);
void quitar(Conjunto* c, int elemento);
bool pertenece(Conjunto* c, int elemento);
bool es_vacio(Conjunto* c);
int cardinal(Conjunto* c);
Conjunto union_conjuntos(Conjunto* c1, Conjunto* c2);
void imprimir_conjunto(Conjunto* c);

int main() {
    Conjunto c1 = conjunto_vacio();
    Conjunto c2 = conjunto_vacio();

    añadir(&c1, 1);
    añadir(&c1, 2);
    añadir(&c1, 3);
    printf("Conjunto 1: ");
    imprimir_conjunto(&c1);

    añadir(&c2, 2);
    añadir(&c2, 3);
    añadir(&c2, 4);
    printf("Conjunto 2: ");
    imprimir_conjunto(&c2);

    printf("¿El elemento 2 pertenece al Conjunto 1? %s\n", pertenece(&c1, 2) ? "Sí" : "No");

    quitar(&c1, 2);
    printf("Conjunto 1 después de quitar el 2: ");
    imprimir_conjunto(&c1);

    printf("¿El Conjunto 1 está vacío? %s\n", es_vacio(&c1) ? "Sí" : "No");

    printf("Cardinalidad del Conjunto 1: %d\n", cardinal(&c1));

    Conjunto c_union = union_conjuntos(&c1, &c2);
    printf("Unión de Conjunto 1 y Conjunto 2: ");
    imprimir_conjunto(&c_union);

    return 0;
}
