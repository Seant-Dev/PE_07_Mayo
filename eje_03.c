#include <stdio.h>
float promvoltaje(float a,float b,float c, float d, float e);

/*aqui se define la funcion de promedio de voltaje y se indica que la funcion recibe cinco
variables de tipo flotante y regresa un valor de tipo flotante*/
float vol1,vol2,vol3,vol4,vol5;
int i,n;
/*aqui se definen las variables globales*/
int main(){
printf("Ingresa el limite de quintetas de valores de voltajes a calcular el promedio:\n");
scanf("%d", &n);
i = 1;
float temp;
while(i <= n){
printf("Ingresa los cinco voltajes resgistrados en el dia:\n");
scanf("%f,%f,%f,%f,%f",&vol1,&vol2,&vol3,&vol4,&vol5);
temp=promvoltaje(vol1,vol2,vol3,vol4,vol5);
if(temp <= 120)
{
printf("VOLTAJE CORRECTO EN EL DIA\n");
}
if(temp > 220)
{
printf("ALTO VOLTAJE REGISTRADO EN EL DIA\n");
}
i = i+1;
}
}
/*a continuacion se define las operaciones que se van a realizar en la funcion promvoltaje*/
float promvoltaje(float a,float b,float c, float d, float e){
float result;
result = ((a+b+c+d+e)/5);
return(result);
}