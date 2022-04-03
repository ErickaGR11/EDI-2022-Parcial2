#include <stdio.h>
#include <math.h>
typedef struct puntos{
    int x1; int y1;
    int x2; int y2;
    float dist;

} tipo_punto;
//debe ir despues de los datos

void pide_puntos(tipo_punto *puntoss);
void Imprime_puntos(tipo_punto puntoss);
void calcula_distancia(tipo_punto *distancia);
int main(){

    tipo_punto puntos;

    //ESTRUCTURA EN UNA FUNCION
    pide_puntos(&puntos);
    Imprime_puntos(puntos);
    calcula_distancia(&puntos);
    printf("\n\nLa distancia de los puntos dados es: %f", puntos.dist);
}
//FUNCIONES
void pide_puntos(tipo_punto *puntoss){
        printf("Dame x1:");
        scanf("%d", &puntoss->x1);
        printf("Dame y1:");
        scanf("%d", &puntoss->y1);

        printf("Dame x2:");
        scanf("%d", &puntoss->x2);
        printf("Dame y2:");
        scanf("%d", &puntoss->y2);

}
void Imprime_puntos(tipo_punto puntoss){
        printf("Punto 1: ");
        printf("(%d, ", puntoss.x1);
        printf("%d)", puntoss.y1);

        printf("\t Punto 2: ");
        printf("(%d, ", puntoss.x2);
        printf("%d)", puntoss.y2);
}
void calcula_distancia(tipo_punto *distancia){
    printf("\nLa formula es:\ndistancia = raiz (x2-x1)+(y2-y1)");
    distancia-> dist= sqrt(pow(distancia->x2-distancia->x1, 2) + pow(distancia->y2-distancia->y1, 2));

}