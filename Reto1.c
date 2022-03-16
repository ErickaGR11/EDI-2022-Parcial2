#include <stdio.h>
#define MAX 4
void Multiplicacion (int arreglo[MAX], int arreglo2[MAX]);
void imprimir (int arreglo[MAX]);
int main(void) {

    int arreglo[MAX];
    int arreglo2[MAX];

    for (int i = 0; i < MAX; i++) {
        do {
            printf("Dame el valor de %d\n", i);
            scanf("%d", &arreglo[i]);

        }while (arreglo[i] <= -30 || arreglo[i]>= 30  );

    }

    printf("El arreglo dado es:\n");
    imprimir ( arreglo);
    printf("\nLa multiplicacion del arreglo es:\n");
    Multiplicacion ( arreglo,  arreglo2);
    imprimir ( arreglo2);

    return 0;
}
void Multiplicacion (int arreglo[MAX], int arreglo2[MAX]){
    for (int i=0; i<MAX;i++)
    {
        arreglo2[i]=1;

        for (int j=0; j<MAX;j++)
        {
            arreglo2[i]*=arreglo[j];
        }

        arreglo2[i]= arreglo2[i]/arreglo[i];
    }
}
void imprimir (int arreglo[MAX]){
    for (int i=0; i<MAX;i++)
    {
        printf("%d\t", arreglo[i]);

    }

}