#include <stdio.h>
#define MAX 3
void ordenar (int arreglo[MAX]);
void imprimeArreglo(int arreglo[MAX]);
void Checar_arreglo (int arreglo[MAX]);

int main(){
    int arreglo[MAX];

    for (int i = 0; i < MAX; ++i) {
        printf("Dame el valor %d: \n", i);
        scanf("%d", &arreglo[i]);
       // printf("\n ");
    }
    imprimeArreglo(arreglo);

    ordenar ( arreglo);
    printf("\nEl arreglo ordenado es: ");
    imprimeArreglo(arreglo);

    printf("\n");
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
   int aux=0;
   int numero_rep;
    for (int i = 0; i < MAX; ++i) {
       int cont=0;
        if (arreglo[i] == arreglo[i+ 1]) {
            cont++;
            i++;
        }
        if (aux<cont){
            numero_rep=i;
            aux=cont;
        }
    }
    printf("\nNumero que mas se repite es: %d", arreglo[numero_rep]);
}