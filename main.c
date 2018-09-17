/* PROGRAMA ESPECIALIZADO EN GEOMETRIA
 * PARA SACAR EL AREA, VOLUMEN Y PERIMETRO DE 3 FIGURAS
 *
 * AUTORA: YASMIN ALVARADO LEE
 * CORREO: yazminalvlee@gmail.com
 * Fecha: 17 de septiembre
*/

#include <stdio.h>
#include <math.h>

//Funcion del perimetro
int perCuadrado (double k) {
    double resultado;
    resultado = k * 4;
    return resultado;
}

int perTriangulo (double a, double b, double c) {
    double resultado;
    resultado = a + b + c;
    return resultado;
}

int perRectangulo (double b, double h) {
    double resultado;
    resultado = b + b + h + h;
    return resultado;
}

//Funcion del area
int areaCuadrado (double k) {
    double resultado;
    resultado = k * k;
    return resultado;
}

int areaTriangulo (double a, double b) {
    double resultado;
    resultado = (a*b) / 2;
    return resultado;
}

int areaRectangulo (double b, double h) {
    double resultado;
    resultado = b*h;
    return resultado;
}

//Funcion del volumen
int volPiramide (double s, double z) {
    double resultado;
    resultado = (s * z/3);
    return resultado;
}

int volTriangulo (double a, double b, double c) {
    double resultado;
    resultado = (((a*b)/2) * c) / 3;
    return resultado;
}

int volRectangulo (double b, double h, double k) {
    double resultado;
    resultado = (b * h)* k;
    return resultado;
}
//Variables
int main(){
    int figura;
    int opcion;
    float resultado;
    double f1;
    double f2;
    double f3;

    //Sacar Perimetro
    do{
        printf("Que quieres sacar?\n");
        printf("1. Perimetro\n");
        printf("2. Area\n");
        printf("3. Volumen\n");
        printf("0. Salida\n");
        scanf("%i", &opcion);
        if(opcion == 1) {
            printf("Que perimetro quieres sacar?\n");
            printf("1. Cuadrado\n");
            printf("2. Triangulo\n");
            printf("3. Rectangulo\n");
            scanf("%i", &figura);

            if (figura == 1) {
                printf("Dime la medida de uno de los lados de el cuadrado:");
                scanf("%lf", &f1);
                resultado = perCuadrado(f1);
            }

            else if (figura == 2) {
                printf("Dime uno de los lados de el Triangulo: ");
                scanf("%lf, %lf, %lf", &f1, &f2, &f3);
                resultado = perTriangulo(f1, f2, f3);
            }
            else if (figura == 3) {
                printf("Dame la base y la altura de el rectangulo: ");
                scanf("%lf, %lf", &f1, &f2);
                resultado = perRectangulo(f1, f2);
            }
            printf("El perimetro es: %f\n", resultado);
//SACAR AREA
        } else if (opcion == 2) {
            printf("Que figura quieres sacar su area?\n");
            printf("1. Cuadrado\n");
            printf("2. Triangulo\n");
            printf("3. Rectangulo\n");
            scanf("%i", &figura);

            if (figura == 1) {
                printf("Dime los lados de el cuadrado: ");
                scanf("%lf", &f1);
                resultado = areaCuadrado(f1);
            }

            else if (figura == 2) {
                printf("Dime los lados de el triangulo: ");
                scanf("%lf, %lf", &f1, &f2);
                resultado = areaTriangulo(f1, f2);
            }

            else if (figura == 3) {
                printf("Dame la base y la altura de el rectangulo: ");
                scanf("%lf, %lf", &f1, &f2);
                resultado = areaRectangulo(f1, f2);
            }
            printf("El area es: %f\n", resultado);
//SACAR VOLUMEN
        } else if (opcion == 3) {
            printf("Que figura quieres sacar su volumen?\n");
            printf("1. Piramide\n");
            printf("2. Triangulo\n");
            printf("3. Rectangulo\n");
            scanf("%i", &figura);

            if (figura == 1) {
                printf("Dime los lados de la piramide: ");
                scanf("%lf", &f1);
                resultado = volPiramide(f1, f2);
            }

            else if (figura == 2) {
                printf("Dame los lados de el triangulo: ");
                scanf("%lf, %lf, %lf", &f1, &f2, &f3);
                resultado= volTriangulo(f1, f2, f3);
            }

            else if (figura == 3) {
                printf("Dame la base y la altura de el recangulo: ");
                scanf("%lf, %lf, %lf", &f1, &f2, &f3);
                resultado = volRectangulo(f1, f2, f3);
            }
            printf("El volumen es: %f\n", resultado);
//EL EXIT
        }
        else if (opcion == 0) {
            printf("Adios! :)");
        }

    } while (opcion != 0);






    return 0;
}