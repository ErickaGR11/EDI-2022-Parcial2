#include <stdio.h>
#define MAX 3
void Solicitar_letras(char arr[MAX], int max);
void imprimir_arreglo(char arr[MAX]);
int BuscaBinarioIterativo(char arreglo[MAX], char caract_obj);
void imprimir_result(int result);

int main()
{
    char arreglo_letras[MAX];
    char result;
    char caracter_obj;
    Solicitar_letras(arreglo_letras,  MAX);
    imprimir_arreglo( arreglo_letras);

    printf("\nDame el caracter objetivo:");
    scanf("%s", &caracter_obj);

    //  printf("Caracter dado es: %c\n", caracter_obj);
    result= BuscaBinarioIterativo( arreglo_letras,  caracter_obj);
    printf("El caracter mayor al objetivo es: %c", result);
}

void Solicitar_letras(char arr[MAX],   int max)
{
    printf("Dame las letras:\n");
    for(int i = 0; i < max; i++)
    {
        printf("letra [%d]:", i);
        scanf("%s", &arr[i]);
    }
}

int BuscaBinarioIterativo(char arreglo[MAX], char caract_obj) {
    int inicio = 0;
    int fin = MAX - 1;
    int mitad;
    int bandera = 0;

    // Mientras los indices no se crucen y no haya encontrado el valor
    while (inicio <= fin && bandera == 0) {
        mitad = inicio + (fin - inicio) / 2;

        if (arreglo[mitad] > caract_obj && arreglo[mitad]< MAX || arreglo[mitad] != arreglo[mitad+1])
            bandera = 1;
        else if (arreglo[mitad] > caract_obj) // Seguiria buscando en la mitad inferior
            fin = mitad - 1;
        else // Seguiria buscando en la mitad superior
            inicio = mitad + 1;
    }
    if (bandera == 1) {
        return arreglo[mitad];
    }
    else
        return arreglo[0];
}

void imprimir_arreglo(char arr[MAX]){
    for(int i=0; i<MAX; i++){
        printf("%c \t", arr[i]);
    }
}