#include <stdio.h>
#include <math.h>

/*aqui se define la funcion desviacion que recibe diez parametros de tipo flotante y regresa
un valor de tipo flotante*/
float desviacion(float a,float b, float c, float d, float e, float f, float g, float h, float i, float j);

/*Declaracion de las variables*/
/*aqui se definen las variables globales de m, n, k, l, o, p, q, r, s, t, u, v*/
int m, n;
float k,l,o,p,q,r,s,t,u,v;


int main(){
    printf("Ingresa el limite de conjunto de datos a calcular la desviacion estandar:\n");
    scanf("%d", &n);
    /*La varaible n representa el numero de veces que se ejecutara el ciclo while que esta mas abajo en el codigo*/

    float temp;
    m = 0;
    temp = 0.0;
    while(m < n)
    {
        printf("Ingresa los diez valores separados por comas a los cuales se les va a calcular su desviacion estandar:\n");
        scanf("%f,%f,%f,%f,%f,%f,%f,%f,%f,%f", &k,&l,&o,&p,&q,&r,&s,&t,&u,&v);

        /*Llamada a la funcion los 10 valores ingresados en la parte anterior son enviados a la funcion para calcular desviacion*/
        temp = desviacion(k,l,o,p,q,r,s,t,u,v);
        m = m+1;
        printf("La desviacion estandar de los valores ingresados es:\n");
        printf("%f\n", temp);
    }
}

/*a continuacion se define las operaciones que se van a realizar en la función desviacion */
/*Esta funcion recibe las 10 varaibles que le fueron pasadas en la parte donde se llama a la funcion*/
float desviacion (float a,float b, float c, float d, float e, float f, float g, float h, float i, float j)
{
    float prom, temp1, temp2, temp3, temp4, temp5, temp6, temp7, temp8, temp9, temp10;
    float result, tempf;

    /*La variable w nunca es utilizada en este programa*/
    int w;
    prom = ((a+b+c+d+e+f+g+h+i+j)/10);
    temp1 = ((a-prom)*(a-prom));
    temp2 = ((b-prom)*(b-prom));
    temp3 = ((c-prom)*(c-prom));
    temp4 = ((d-prom)*(d-prom));
    temp5 = ((e-prom)*(e-prom));
    temp6 = ((f-prom)*(f-prom));
    temp7 = ((g-prom)*(g-prom));
    temp8 = ((h-prom)*(h-prom));
    temp9 = ((i-prom)*(i-prom));
    temp10 = ((j-prom)*(j-prom));
    result = ((temp1+temp2+temp3+temp4+temp5+temp6+temp7+temp8+temp9+temp10)/(10));
    /*la funcion sqrt() es para obtener la raiz cuadrada de un numero*/
    tempf = sqrt(result);
    /*El resultado es regresado por la funcion*/
    return(tempf);
}