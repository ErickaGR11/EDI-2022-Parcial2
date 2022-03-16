#include <stdio.h>
#include <string.h>
#define MAX 40
void esPalindromoRecursivo(char * cadena);
int main() {

    char cadena[MAX];

    printf("Escribe una cadena de caracteres \n");
    scanf("%s", &cadena);

   esPalindromoRecursivo(cadena);

}

void esPalindromoRecursivo(char * cadena ) {
    int longitudDeCadena = strlen(cadena);

    int indiceFin = longitudDeCadena - 1;

    int indiceInicio = 0;

    if (indiceInicio >= indiceFin ) {
        indiceInicio++;
        indiceFin--;
    }

    if (cadena[indiceInicio] == cadena[indiceFin] ){
        printf("1\n");

    }
    else {
        printf("0\n");
    }
}
