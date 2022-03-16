#include <stdio.h>

int Fibonacci (int b );
int main() {

    int numero;
    int resultado;
    printf("Escribe un numero \n");
    scanf("%d", &numero);

    resultado= Fibonacci (numero);
    printf("%d", resultado);
}
// 0 1 1 2 3 5 8
// 0 1/2 3 4 5 6
int Fibonacci (int numero) {
    int resultado;

     if ( numero==0 ){
        resultado= 0;}
    else if (numero== 1){
        resultado=1;
    }
   else {
      resultado=  Fibonacci(numero - 1) + Fibonacci(numero-2);
   }
    return (resultado);
        }

