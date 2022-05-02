#include <stdio.h>
#define MAX 5 //capacidad de la cola
typedef struct cola{
    int datos [MAX+1];
    int inicio;
    int fin;

}Cola;
void inicializacion(Cola *c);//Encabezado
int estaVacia (Cola cola);
int estaLlena(Cola cola);
int insertar(Cola *c, int valor);
int eliminar(Cola *c, int *v);
void imprimir(Cola c);
void algoritmo_examen(Cola *c1, Cola *c2);
int main()
{
    Cola cola1, cola2;

    inicializacion(&cola1);
    insertar(&cola1, 2);
    insertar(&cola1, 3);
    insertar(&cola1, 9);

    inicializacion(&cola2);
    insertar(&cola1, 1);
    insertar(&cola1, 4);
    insertar(&cola1, 8);
    insertar(&cola1, 9);

    algoritmo_examen(&cola1, &cola2);
    return 0;
}
void inicializacion(Cola *c){
    c->inicio=0;
    c->fin=0;
}
void algoritmo_examen(Cola *c1, Cola *c2){
    int valor1; int valor2;
    int contador=0;
    while (contador<3){
        if(eliminar(c1, &valor1)==1){
            if(valor1%2==0)
                insertar(c2, valor1);
            else
                insertar(c1,valor1);
        }
        if (eliminar(c2, &valor2)==1){
            if (valor2%2 !=0)
                insertar(c1, valor2);
            else
                insertar(c2, valor2);
        }
    contador++;
        printf("\n");
         imprimir(*c1);
        printf("\n");
        imprimir(*c2);
    }

}
int estaVacia (Cola cola){
    int r=0;
    if(cola.inicio==cola.fin)
        r=1;
    return r;
}

int estaLlena(Cola cola){
    if(cola.fin == cola.inicio-1 || (cola.inicio == 0 && cola.fin ==MAX))
        return 1;
    return 0;
}
int insertar(Cola *c, int valor){
    int r=0;

    if(estaLlena(*c)==0){ //Hay espacio para insertar
        c->datos[c->fin] = valor;//poner el valor dentro del arreglo en la pos fin
        c->fin++;//mover fin a la sig casilla libre, incremento el valor de fin

        if(c->fin == MAX+1)
            c->fin = 0;
        r=1;
    }
    return r;
}

int eliminar(Cola *c, int *v){
    int r=0;
    if (!estaVacia(*c)){
        *v= c->datos[c->inicio];

        c->inicio= (c->inicio+1)%(MAX+1);
        r=1;
    }
    return r;
}
void imprimir(Cola c){
    for (int i = c.inicio; i % (MAX + 1) != c.fin; i++)
        printf("%d ", c.datos[i % (MAX + 1)]);
}