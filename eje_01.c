#include <stdio.h>
#include <math.h>

/*definicion de la funcion potencia de que recibe un parametro y devuelve un valor de tipo flotante*/
float serie(int m);

/*declaracion de las variables globales*/
int i, n;
float pot;

int main(){
float resultado;
resultado = 0.0;
printf("Ingresa el limite de la sumatoria\n");
scanf("%d",&n);

/*aqui se llama la funcion serie y se envía como parámetro el valor guardado en la variable n*/
/*en la varaible resultado es donde se recoge el resultado regresado de la funcion serie()*/
resultado = serie(n);

printf("El valor de la serie ingresada es:\n");
printf("%f\n",resultado);
return 0;
}

/*a continuacion se define las operaciones que se van a realizar en la funcion serie*/
float serie(int m){
/*inicializamos la variable i con valor de 1 tal como lo indica le ecuacion de las instrucciones*/
i = 1;
/*declaramos la variable temp y suma que utilizaremos para para guardar el resultados del coseno
y de la sumaoria respectivamente*/
float temp,suma;
/*inicializamos la variable suma en 0.0 para que no contenga valores erroneos cuando se ejecute el programa*/
suma = 0.0;
/*con este while estamos definiendo los limites de la sumaoria, tal como se indican en la ecuacion*/
while (i <= n){
/*asignamos el resultado del coseno a la variable temp*/
temp = cos(i);
/*obtenemos el cuadrado de la variable i*/
pot = i*i;
/*sumamos el resultado de temp/pot a la variable suma de manera acumulativa*/
suma = suma+(temp/pot);
/*incrementamos i que ademas de servir para las operaciones tambien es la variable de control para el while*/
i = i+1;
}
/*regreamos el resultado de la sumaoria*/
return(suma);
}
