bool pertenece(Conjunto* c, int elemento);
int main() {
    Conjunto c = conjunto_vacio();
    añadir(&c, 1);
    añadir(&c, 2);
    
    bool existe = pertenece(&c, 2);
    printf("¿El elemento 2 pertenece al conjunto? %s\n", existe ? "Sí" : "No");
    
    return 0;
}

bool pertenece(Conjunto* c, int elemento) {
    for (int i = 0; i < c->cardinalidad; i++) {
        if (c->elementos[i] == elemento) {
            return true; 
        }
    }
    return false; 
}