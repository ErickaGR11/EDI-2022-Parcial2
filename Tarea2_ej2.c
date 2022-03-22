#include <stdio.h>
#define MAX 4

void Pide_valores(int arreglo[MAX]);
void imprimir_result(int arreglo[MAX]);
int BuscaBinarioIterativo(int arreglo[MAX], int num_Buscar);

int main() {
    int arreglo[MAX];
    int num_Buscar;
    int posicion;
    Pide_valores(arreglo);
    imprimir_result( arreglo);

    printf("\nDame el numero que quieres buscar:\n");
    scanf("%d", &num_Buscar);

    posicion =  BuscaBinarioIterativo( arreglo, num_Buscar);
    printf("La posicion es %d", posicion);

    return 0;
}

void Pide_valores(int arreglo[MAX] ){
    for (int i=0; i<MAX; i++){
        printf("Dame el valor %d \n", i);
        scanf("%d", &arreglo[i]);
    }
}

void imprimir_result(int arreglo[MAX]){
    printf("El arreglo es:\n" );
    for (int i=0; i<MAX; i++) {
        printf("[%d] ", arreglo[i] );
    }
}
int BuscaBinarioIterativo(int arreglo[MAX], int num_Buscar) {
    int inicio = 0;
    int fin = MAX - 1;
    int mitad;
    int bandera = 0;

    // Mientras los indices no se crucen y no haya encontrado el valor
    while (inicio <= fin && bandera == 0) {
        mitad = inicio + (fin - inicio) / 2;

        if (arreglo[mitad] == num_Buscar)
            bandera = 1;
        else if (arreglo[mitad] > num_Buscar) // Seguiria buscando en la mitad inferior
            fin = mitad - 1;
        else // Seguiria buscando en la mitad superior
            inicio = mitad + 1;
    }
    if (bandera == 1)
        return mitad;
    else
        return inicio;

}