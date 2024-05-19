#include <stdio.h>

int main() {
    /*La variable estado servia para controlar el while de los resultados*/
    int num_1, num_2, estado = 1;
    /*La varaible operacion sirve para seleccionar el tipo de operacion a realizar*/
    char operacion;
    float resultado, resultado_usuario;

    /*Ingresamos el primer numero*/
    printf("Ingresa el 1er numero: ");
    scanf("%d", &num_1);

    /*Ingresamos el segundo numero*/
    printf("\nIngresa el 2do numero: ");
    scanf("%d", &num_2);

    //Se pide que el usuario seleccione una operacion tecleando el signo correspondiente
    printf("\nOperacion a realizar (+, -, *, /): ");
    scanf(" %c", &operacion);

    // Calcular el resultado tomando en cuenta la operacion que se selecciono
    if (operacion == '+') {
        resultado = num_1 + num_2;
    } else if (operacion == '-') {
        resultado = num_1 - num_2;
    } else if (operacion == '*') {
        resultado = num_1 * num_2;
    } else if (operacion == '/') {
        // Verificamos que el segundo numero no sea 0
        if (num_2 != 0) {
            resultado = (float) num_1 / num_2;
        } else {
            //En caso de que el segundo numero sea cero se muestra que no es posible realizar la operacion
            printf("\nError: Division por cero no permitida.");
        }
    } else {
        printf("\nOperacion no valida.");
    }

    /*El ciclop while se repite hasta que el usuario ingrese el resultado correcto*/
    while(estado){
        //El usuario ingresa el resultado de la operacion
        printf("\nIngresa el resultado de la operacion: ");
        scanf("%f", &resultado_usuario);

        // Se compara el resultado del usuario con el resultado de la operacion
        if(resultado == resultado_usuario){
            printf("\nEnhorabuena");
            /*cunado el resultado del usuario es correcto la variable estado cambia a 0 y temrina el ciclo while*/
            estado = 0;
        } else {
            printf("\nLo siento, intentalo otra vez");
        }
    }

    return 0;
}