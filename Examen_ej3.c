#include <stdio.h>
#include <string.h>
#define MAX 4
#define LONG 10

void pedir_nombres_calif(char arr_nomb[MAX][LONG], float  arr[]);
void imprimir(char arreglo[MAX][LONG], float arr[]);
void ordenar(char arr[MAX][LONG], float arreglo[MAX]);
int main()
{
    char arr_nombres[MAX][LONG];
    float arr_prom[MAX];

     pedir_nombres_calif(arr_nombres, arr_prom);
     printf("\n");
     imprimir(arr_nombres,arr_prom);
     ordenar( arr_nombres, arr_prom);
     printf("\n\n");
     printf("Arreglos ordenados:\n");
     imprimir(arr_nombres,arr_prom);
}

void pedir_nombres_calif(char arr_nomb[MAX][LONG], float arr[]){

    for (int i = 0; i < MAX; ++i) {
        printf("Dame el nombre %d:\n", i);
        scanf("%s", arr_nomb[i]);
    }

    for (int i = 0; i < MAX; ++i) {
        printf("Dame la calificacion %d:\n", i);
        scanf("%f", &arr[i]);
    }
}
void ordenar(char arr[MAX][LONG], float arreglo[MAX]) {
    int i, j;
    float aux;
    char aux2[LONG];
    int intercambio = 1;

    for (i = 0; i < MAX && intercambio == 1; i++) {
        intercambio = 0;
        for (j = 0; j < MAX - i - 1; j++) {
            if (arreglo[j] < arreglo[j + 1]) {
                if (strcmp(arr[j], arr[j + 1]) != 0) { //compara dos cadenas
                    strcpy(aux2, arr[j]); //La función strcpy recibe dos parámetros
                    //, primero la string donde se va a copiar el contenido, y segundo la string del cual será copiado su contenido.
                    aux = arreglo[j];
                    strcpy(arr[j], arr[j + 1]);
                    arreglo[j] = arreglo[j + 1];
                    strcpy(arr[j + 1], aux2);
                    arreglo[j + 1] = aux;

                    intercambio = 1;
                }
            }
        }
    }
}
void imprimir(char arreglo[MAX][LONG], float arr[MAX]){
    printf("[  ");
    for (int i = 0; i < MAX; ++i) {
        printf("%s  ", arreglo[i]);
    }
    printf("]");
    printf("\n");
    printf("[  ");
    for (int j = 0; j < MAX; ++j) {
        printf("%.2f  ", arr[j]);
    }
    printf("]");
}