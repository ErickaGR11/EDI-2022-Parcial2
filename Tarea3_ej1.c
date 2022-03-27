#include <stdio.h>
#define MAX 4
void ordenar (int arreglo[MAX]);
void imprimeArreglo(int arreglo[MAX]);
void Checar_arreglo (int arreglo[MAX]);

int main(){
    int arreglo[MAX];

    for (int i = 0; i < MAX; ++i) {
        printf("Dame el valor %d :", i);
        scanf("%d", &arreglo[i]);
    }
    imprimeArreglo(arreglo);

    ordenar ( arreglo);
    printf("\nEl arreglo ordenado es: ");
    imprimeArreglo(arreglo);

    printf("\n");
    printf("0=NO, 1=SI; Se repite?: ");
    Checar_arreglo (arreglo);

}
void ordenar (int arreglo[MAX]){
    int aux;
    int intercambio = 1;
    int actual;

    for(int i = 0; i < MAX && intercambio == 1; i++){
        intercambio = 0;
        for(actual = 0; actual < MAX - i - 1; actual++){
            if(arreglo[actual] > arreglo[actual + 1]){
                aux = arreglo[actual];
                arreglo[actual] = arreglo[actual + 1];
                arreglo[actual + 1] = aux;

                intercambio = 1;
            }
        }
        printf("  Actual llego a: %d", actual);
        imprimeArreglo(arreglo);
    }
}

void imprimeArreglo(int arreglo[MAX]){
    printf("\n[");
    for(int i = 0; i < MAX; i++){
        printf(" %d ", arreglo[i]);
    }
    printf("]");
}

void Checar_arreglo (int arreglo[MAX]) {
    for (int i = 0; i < MAX - 1; ++i) {
        if (arreglo[i] == arreglo[i+ 1]) {
            printf("1");
            i= MAX;
        }
        else {
             printf("0");
             i= MAX;
        }
    }
}