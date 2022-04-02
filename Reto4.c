#include <stdio.h>
void Pedir_Val_arreglo(int arr1[], int arr2[],  int valor_arr1, int valor_arr2);
void juntar_arr(int arr1[], int arr2[], int arr3[], int valor_arr1, int valor_arr2);
void Ordenar(int arr1[], int valor_arr);
void intercambio (int *a, int *b);
void imprimir_arr(int arr1[], int valor_arr);

int main()
{
    //PEDIR MEDIDA ARREGLO
    int n, m;
    printf("Dame la medida del arreglo 1\n");
    scanf("%d", &n);
    if (n > 100) {
        printf("Dame la medida del arreglo 1\n");
        scanf("%d", &n);
    }
    printf("Dame la medida del arreglo 2\n");
    scanf("%d", &m);
    if (m > 100) {
        printf("Dame la medida del arreglo 2\n");
        scanf("%d", &m);
    }
    //___________________
    int total=n+m;
    int arreglo1[n], arreglo2[m], arreglo3[total];
    Pedir_Val_arreglo(arreglo1, arreglo2, n, m);
    juntar_arr(arreglo1, arreglo2, arreglo3, n, m);
    printf("\n\n");
    printf("El arreglo ordenado es:\n ");
    Ordenar(arreglo3, total);

}

void Pedir_Val_arreglo(int arr1[], int arr2[],  int valor_arr1, int valor_arr2) {

    for (int i = 0; i < valor_arr1; ++i) {
        printf("Ingrese el valor de la casilla [%d] \n", i);
        scanf("%d", &arr1[i]);
    }
    printf("El arreglo dado es:  ");
    imprimir_arr(arr1, valor_arr1);
    printf("\n");

    for (int j = 0; j < valor_arr2; ++j) {
        printf("Ingrese el valor de la casilla [%d] \n", j);
        scanf("%d", &arr2[j]);
    }
    printf("El arreglo dado es:  ");
    imprimir_arr(arr2, valor_arr2);
}

void juntar_arr(int arr1[], int arr2[], int arr3[], int valor_arr1, int valor_arr2){
    int total = valor_arr1 + valor_arr2;
    int contador = 0, cont2 = 0;
    while (total > contador) {
        if (contador>valor_arr1-1) {
            arr3[contador] = arr2[cont2];
            cont2++;
        } else {
            arr3[contador] = arr1[contador];
        }
        contador++;
    }
  //  imprimir_arr(arr3, total);
}
void imprimir_arr(int arr1[], int valor_arr){
    printf("[ ");
    for(int i = 0; i < valor_arr; ++i){
        printf("%d ", arr1[i]);
    }
    printf("]");
}

void Ordenar(int arr1[], int valor_arr){
    int i;
    for ( i = 0; i < valor_arr; i++) {
        for (int actual=i; actual>0; actual--){
            if (arr1[actual]<arr1[actual-1])
                intercambio (&arr1[actual], &arr1[actual-1]);
        }
    }
    imprimir_arr(arr1, valor_arr);
    printf("\n");
}
void intercambio (int *a, int *b){
    int aux;
    aux=*a;
    *a=*b;
    *b = aux;
}