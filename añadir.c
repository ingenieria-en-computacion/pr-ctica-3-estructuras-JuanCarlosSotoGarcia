void añadir(Conjunto* c, int elemento);

int main() {
    Conjunto c = conjunto_vacio();
    añadir(&c, 1);
    añadir(&c, 2);
    printf("Conjunto después de añadir 1 y 2: ");
    imprimir_conjunto(&c);
    return 0;
}

void añadir(Conjunto* c, int elemento) {
    if (c->cardinalidad < MAX_SIZE) {
        for (int i = 0; i < c->cardinalidad; i++) {
            if (c->elementos[i] == elemento) {
                return; 
            }
        }
        c->elementos[c->cardinalidad++] = elemento; 
    }
}