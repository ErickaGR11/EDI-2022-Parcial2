#include <stdio.h>
#define MAX 4
void Solicitar_numeros(int arr[MAX]);
int BuscarBinarioRecursivo(int arr[MAX], int num_Abuscar, int fin,  int inicio);

int main()
{
    int arr[MAX];
    int caracter_obj;
    int result;
    Solicitar_numeros(arr);
    printf("Dame el objetivo:");
    scanf("%d", &caracter_obj);

    result= BuscarBinarioRecursivo( arr,  caracter_obj,  MAX,  0);
    printf("Salida: %d", result);
}
void Solicitar_numeros(int arr[MAX]){
    printf("Dame los numeros:\n");
    for(int i = 0; i < MAX; i++)
    {
        printf("numero [%d]:", i);
        scanf("%d", &arr[i]);
    }
}

int BuscarBinarioRecursivo(int arr[MAX], int num_Abuscar, int fin,  int inicio){
    if(inicio==fin){
        return 0;
    }
    int mitad=inicio + (fin - inicio) / 2;
    if(arr[mitad]>num_Abuscar){
        if(arr[mitad-1]>num_Abuscar){
            return BuscarBinarioRecursivo(arr, num_Abuscar, mitad-1,  inicio);
        }
        return mitad-1;
    }
    return BuscarBinarioRecursivo(arr, num_Abuscar, fin, mitad+1);
}