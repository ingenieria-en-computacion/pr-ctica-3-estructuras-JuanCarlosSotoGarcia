Conjunto union_conjuntos(Conjunto* c1, Conjunto* c2);
int main() {
    Conjunto c1 = conjunto_vacio();
    añadir(&c1, 1);
    añadir(&c1, 2);
    
    Conjunto c2 = conjunto_vacio();
    añadir(&c2, 2);
    añadir(&c2, 3);
    
    Conjunto c_union = union_conjuntos(&c1, &c2);
    printf("Unión del conjunto: ");
    imprimir_conjunto(&c_union);
    
    return 0;
}

Conjunto union_conjuntos(Conjunto* c1, Conjunto* c2) {
    Conjunto resultado = conjunto_vacio(); 
    for (int i = 0; i < c1->cardinalidad; i++) {
        añadir(&resultado, c1->elementos[i]); // Añadir elementos de c1
    }
    for (int i = 0; i < c2->cardinalidad; i++) {
        añadir(&resultado, c2->elementos[i]); // Añadir elementos de c2
    }
    return resultado; 
}