void quitar(Conjunto* c, int elemento);
int main() {
    Conjunto c = conjunto_vacio();
    añadir(&c, 1);
    añadir(&c, 2);
    printf("Conjunto antes de quitar: ");
    imprimir_conjunto(&c);
    
    quitar(&c, 1);
    printf("Conjunto después de quitar 1: ");
    imprimir_conjunto(&c);
    
    return 0;
}

void quitar(Conjunto* c, int elemento) {
    for (int i = 0; i < c->cardinalidad; i++) {
        if (c->elementos[i] == elemento) {
            for (int j = i; j < c->cardinalidad - 1; j++) {
                c->elementos[j] = c->elementos[j + 1]; 
            }
            c->cardinalidad--; 
            return;
        }
    }
}