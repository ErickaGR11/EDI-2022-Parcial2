#include <stdio.h>
#define MAX 3
void Solicitar_letras(char arr[MAX]);
int BuscarBinarioRecursivo(char arr[MAX], int letra_Abuscar, int fin,  int inicio);
int main()
{
    char arr[MAX];
    char caracter_obj;
    char result;

    Solicitar_letras(arr);

    printf("Dame el objetivo:");
    fflush(stdin);
    scanf("%c", &caracter_obj);

    result = BuscarBinarioRecursivo(arr, caracter_obj, MAX, 0);
    printf("Letra es: %c", result);

}
void Solicitar_letras(char arr[MAX]){
    printf("Dame las letras:\n");
    for(int i = 0; i < MAX; i++)
    {
        printf("letra [%d]:", i);
        fflush(stdin);
        scanf("%c", &arr[i]);
    }
}

int BuscarBinarioRecursivo(char arr[MAX], int letra_Abuscar, int fin,  int inicio){
    if(inicio==fin){
        return arr[0];
    }
    int mitad=inicio + (fin - inicio) / 2;
    if(arr[mitad]>letra_Abuscar){
        if(arr[mitad-1]>letra_Abuscar){
            return BuscarBinarioRecursivo(arr, letra_Abuscar, mitad-1,  inicio);
        }
        return arr[mitad];
    }
    return BuscarBinarioRecursivo(arr, letra_Abuscar, fin, mitad+1);
}