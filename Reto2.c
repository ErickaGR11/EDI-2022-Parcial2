#include<stdio.h>
void ConversorDec_Hex(int num_dec);

int main()
{
    int numero_decimal;
    printf("Ingrese el numero decimal para convertirlo en hexadecimal:\n");
    scanf("%d",&numero_decimal);

    ConversorDec_Hex(numero_decimal);

}
void ConversorDec_Hex(int num_dec) {
    int hexa;
    if (num_dec > 0) {
        hexa = num_dec % 16;
        ConversorDec_Hex(num_dec / 16);
    }
    else {
        //no se regresa nada
       return;
    }
    if (hexa > 10)
        // [0]=A [1]=B [2]=C [3]=D [4]=E [5]=F
        //ej. cuando el residuo (hexa) de 15 se le resta 10 = [5]= F
        printf("%c", 'A' + (hexa - 10));
    else
        printf("%d", hexa);
}
