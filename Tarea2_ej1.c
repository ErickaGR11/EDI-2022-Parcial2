#include <stdio.h>
//Biblioteca: string.h de la funcion strcmp
//Declaración: strcmp( char *cadena1,  char *cadena2);
//Parámetros: Las dos cadenas a comparar
//Valor devuelto: Un número entero

#include <string.h>
#define LONGITUD 100
#define MAX 4

void Solicitar_nombres(char arr[][LONGITUD], int max);
int Buscar_nombre(char arr[][LONGITUD], char Busqueda[], int max);
void imprimir_result(int result);
int main()
{
    char arreglo_nombre[MAX][LONGITUD];
    char Busqueda[LONGITUD];
    int result;
    Solicitar_nombres(arreglo_nombre,  MAX);


    result = Buscar_nombre(arreglo_nombre, Busqueda, MAX);

    // comparacion del resultado de la funcion de busqueda
    imprimir_result( result);
}

void Solicitar_nombres(char arr[][LONGITUD], int max)
{
    printf("Dame la lista de nombres:\n");
    for(int i = 0; i < max; i++)
    {
        printf("Dame el nombre %d:", i);
        scanf("%s", arr[i]);
    }
}

int Buscar_nombre(char arr[][LONGITUD], char Busqueda[], int max)
{

    printf("Dame el nombre a buscar:");
    scanf("%s", Busqueda);

    for(int i = 0; i < max; i++)
       // if (arr[i]== Busqueda)

        //Devuelve 0 si las cadenas de texto son iguales (incluyendo mayúsculas y minúsculas);
        if(strcmp(arr[i], Busqueda)==0)
            //si es igual a cero, que retorne la posicion, si no que retorne -1
            return i;
    return -1;
}

void imprimir_result(int result) {
    if (result >= 0){
        printf("\nPosicion %d\n", result);
   // printf("Posicion %d\n", result + 1);
}
    else{
        printf("Posicion -1");
    }
}