#include <pthread.h>
#include <stdio.h>
int saldo; 

void * holaHilo(){
    printf("Hola desde un hilo \n");
    pthread_exit(NULL);
}

void *incrementoSaldo(){
    printf("El saldo actual es de %d\n", saldo);
    saldo=saldo+100;
    printf("El nuevo saldo es de %d\n", saldo);
}

int main(){
    pthread_t t;

    for (int i=0; i<=99; i++){
        pthread_create(&t, NULL, incrementoSaldo, NULL);
    }
    pthread_exit(NULL);

}