#include <stdio.h>
/*En este programa la biblioteca math.h no es necesaria*/
#include <math.h>

int n;
int multiplos (int m);
int main( ) {
    printf ("Ingresa el limite de la serie para calcular cuantos multiplos de 7 existen en ese intervalo\n");
    scanf("%d", &n);
    int temp;

    /*la variable temp recibe el numero de multiplos de 7 encontrados en el intervalo (0,n]*/
    temp = multiplos(n);

    printf("En el intervalo ingresado el total de numeros que son multiplos de 7 son:\n");
    printf("%d", temp);
}

/*Esta funcion busca los numeros multiplos de 7 por medio del modulo de 7*/
int multiplos (int m){
    int sum,i,result;
    i = 1;
    sum = 0;
    while(i <= m)
    {
        /*cuando el residuo de la division de i/7 es igual a 0, significa que es multiplo de 7*/
        result = i%7;
        if(result == 0)
        {
            sum = sum+1;
        }
        i = i+1;
    }
    /*En esa seccion regresamos el resultado que sera la cantidad de multiplo de 7*/
    return(sum);
}