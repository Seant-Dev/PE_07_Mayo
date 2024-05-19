#include <stdio.h>
#include <math.h>
int factorial(int j);
/*aqui se define la función factorial que recibe un parámetro de tipo entero y regresa un valor de tipo
entero*/
int i, n;
/*aqui se definen las variables globales de i y n*/
int main(){
printf("Ingresa el limite de la sumatoria:\n");
scanf("%d", &n);
float temp,resultado,serie;
i = 1;
serie = 0.0;
while(i <= n){
temp = i-1;
resultado = factorial(i);
serie = serie+(temp/resultado);
i = i+1;
}
printf("El resultado de la serie es:\n");
printf("%f\n", serie);
}
/*a continuacion se define las operaciones que se van a realizar en la funcion factorial*/
int factorial(int j){
int l,temp;
l = 1;
temp = 1;
while(l <= j){
temp = temp*l;
l = l+1;
}
return(temp);
}