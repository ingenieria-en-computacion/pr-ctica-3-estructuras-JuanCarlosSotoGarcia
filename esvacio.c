bool es_vacio(Conjunto* c);

int main() {
    Conjunto c = conjunto_vacio();
    
    bool vacio = es_vacio(&c);
    printf("¿El conjunto está vacío? %s\n", vacio ? "Sí" : "No");
    
    return 0;
}

bool es_vacio(Conjunto* c) {
    return c->cardinalidad == 0; 
}