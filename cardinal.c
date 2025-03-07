int cardinal(Conjunto* c);
int main() {
    Conjunto c = conjunto_vacio();
    añadir(&c, 1);
    añadir(&c, 2);
    
    int num_elementos = cardinal(&c);
    printf("Cardinalidad del conjunto: %d\n", num_elementos);
    
    return 0;
}

int cardinal(Conjunto* c) {
    return c->cardinalidad; 
}