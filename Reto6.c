#include <stdio.h>
#define MAX 10 //capacidad de la cola
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

int main()
{
    Cola cola;
    int r;
    int valor;
    int k=2;
    inicializacion(&cola);

   r= estaVacia(cola);

    //printf("valor r: %d\n", r);

    r= insertar(&cola, 1);
    r= insertar(&cola, 2);
    r= insertar(&cola, 3);
    r= insertar(&cola, 4);
    r= insertar(&cola, 5);

    for (int i = 1; i <= k; ++i) {
        r= eliminar(&cola, &valor);
        if(i!=k)
           insertar(&cola, valor);
    }

    return 0;
}
void inicializacion(Cola *c){
    c->inicio =0;
    c->fin=0;
}

int estaVacia (Cola cola){
    int r=0;
    if (cola.inicio==cola.fin){
        r=1;
    }
    return r;
}

int estaLlena(Cola cola){
    if (cola.fin==cola.inicio-1 || (cola.inicio==0 && cola.fin==MAX))
        return 1;
    return 0;

}
int insertar(Cola *c, int valor){
    int r=0;

    if (estaLlena(*c)==0){ //Hay espacio para insertar
        c->datos [c->fin]= valor; //poner el valor dentro del arreglo en la pos fin
        //mover fin a la sig casilla libre
        c->fin++;//incremento el valor de fin

        if(c->fin==MAX+1)
            c->fin=0;
        r=1;
    }
    return r;
}

int eliminar(Cola *c, int *v){
    int r=0;
    if (estaVacia(*c)){
        *v= c->datos[c->inicio];

        c->inicio= (c->inicio+1)%(MAX+1);
        r=1;
    }
    return r;
}