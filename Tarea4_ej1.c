#include <stdio.h>
#include <ctype.h>
typedef struct fecha{
    int dia;
    char mes[50];
    int anio;

} tipo_fecha;
//debe ir despues de los datos

void pide_fecha(tipo_fecha *fechass);
void Imprime_fecha(tipo_fecha fechass);

int main(){
    tipo_fecha actual;

    //ESTRUCTURA EN UNA FUNCION
    pide_fecha(&actual);
    Imprime_fecha(actual);
}
//FUNCION
void pide_fecha(tipo_fecha *fechass){
    printf("Dia:");
    scanf("%d", &fechass->dia);
//_____________
    printf("Mes:");
    scanf("%s", fechass->mes);

    int bandera = 0; // Fuera
    for (int i = 0; fechass->mes[i] != '\0'; i++) {
        if (fechass->mes[i] == ' ') {
            bandera = 0; // Fuera de palabra
            fechass->mes[i] = tolower(fechass->mes[i]); //MIN
        }
        else if (bandera) {
                // Dentro
                fechass->mes[i] = tolower(fechass->mes[i]); //MIN
            }
        else {
                bandera = 1;
                fechass->mes[i] = toupper(fechass->mes[i]); //Mayuscula
            }
        }
//_____________
    printf("Anio:");
    scanf("%d", &fechass->anio);

}
void Imprime_fecha(tipo_fecha fechass){
    // Se rellena con ceros a la izquierda hasta el valor dado por el flag anterior.
    // Por ejemplo “%04d” imprime un número justificado con ceros hasta 4 dígitos.
    printf("%02d/", fechass.dia);
    printf("%s/", fechass.mes);
    printf("%04d", fechass.anio);
}
