//poyecto de Algebra linea 

#include <stdio.h> 

#include <math.h> 

#include <windows.h> 

#define M_pi 3.14159265358979323846 
#define M_PI 3.14159265358979323846 
  

int selector;//selector de indicacion de eleccion del menu 

int angulo; 

int zoom; 
// Declaración de variables
double x, matrizT[2][2], matrizX[2][1], resultadoA[2][1], T;

float valores_punto1[2][1], valores_punto2[2][1],valores_punto3[2][1]; 

double valores_punto_resultado1[2][1],valores_punto_resultado2[2][1],valores_punto_resultado3[2][1]; 

double zoom_matriz[2][2], rotacion[2][2], resultado[2][2]; 

double temporal; 

double convertidor_rad(int angulo); 

int main() 

{ 

    printf("Bienvenido. Escoja el programa a utilizar\n"); 
    printf("Programa A..............................1\n"); 
    printf("Programa B..............................2\n"); 
    printf("Teclea el numero\n"); 

    scanf("%d",&selector); 

  

    if(selector == 1) 

    { 
   // Supongamos que x es una variable de tipo double
    printf("Ingresa el valor del ángulo T en grados: ");
    scanf("%lf", &T);
    T = T * M_PI / 180.0;  // Convertir a radianes

    printf("Ingresa el valor de x: ");
    scanf("%lf", &x);

    // Asignar valores a las matrices
    matrizT[0][0] = cos(T);
    matrizT[0][1] = -sin(T);
    matrizT[1][0] = sin(T);
    matrizT[1][1] = cos(T);

    matrizX[0][0] = x;
    matrizX[1][0] = x * x * x + 1;

    // Imprimir las matrices
    printf("\nMatriz T:\n");
    printf("%f\t%f\n", matrizT[0][0], matrizT[0][1]);
    printf("%f\t%f\n", matrizT[1][0], matrizT[1][1]);

    printf("\nMatriz X:\n");
    printf("%f\n", matrizX[0][0]);
    printf("%f\n", matrizX[1][0]);

    // Multiplicación de matriz transpuesta por matrizX
    resultado[0][0] = matrizT[0][0] * matrizX[0][0] + matrizT[0][1] * matrizX[1][0];
    resultado[1][0] = matrizT[1][0] * matrizX[0][0] + matrizT[1][1] * matrizX[1][0];

    // Imprimir el resultado
    printf("\nResultado de la multiplicación:\n");
    printf("%f\n", resultadoA[0][0]);
    printf("%f\n", resultadoA[1][0]);

    return 0;
}

  

    } 

    if(selector == 2) 

    { 

        system("cls"); 

        printf("Ingresa el angulo a rotar (en grados) ="); 

        scanf("%d",&angulo); 

        printf("Ingrese el zoom a aplicar ="); 

        scanf("%d",&zoom); 

        printf("\n\n"); 

        //punto 1 

        printf("X1 ="); 

        scanf("%f",&valores_punto1[0][0]); 

        printf("Y1 ="); 

        scanf("%f",&valores_punto1[1][0]); 

        //punto 2 

        printf("X2 ="); 

        scanf("%f",&valores_punto2[0][0]); 

        printf("Y2 ="); 

        scanf("%f",&valores_punto2[1][0]); 

        //punto 3 

        printf("X3 ="); 

        scanf("%f",&valores_punto3[0][0]); 

        printf("Y3 ="); 

        scanf("%f",&valores_punto3[1][0]); 

        //iniciazion de zoo_,matriz 

        zoom_matriz[0][0]=zoom; 

        zoom_matriz[0][1]=0; 

        zoom_matriz[1][1]=zoom; 

        zoom_matriz[1][0]=0; 

  

        //matriz de rotacion 

        rotacion[0][0]= cos(convertidor_rad(angulo)); 

        rotacion[0][1]= -(sin(convertidor_rad(angulo))); 

        rotacion[1][0]= sin(convertidor_rad(angulo)); 

        rotacion[1][1]= -(cos(convertidor_rad(angulo))); 

        //multiplicacion de zoom por rotacion 

        for (int i=0;i<2;i++) 

        { 

            for (int j=0;j<2;j++) 

            { 

                double suma=0; 

                for (int k=0;k<2;k++) 

                { 

                    suma=suma+(rotacion[i][k]*zoom_matriz[k][j]); 

                } 

                resultado[i][j]=suma; 

            } 

        } 

        //multiplicacion de resultado por puntos 

        for (int i=0;i<2;i++) 

        { 

            for (int j=0;j<1;j++) 

            { 

                double suma=0; 

                for (int k=0;k<2;k++) 

                { 

                    suma=suma+(resultado[i][k]*valores_punto1[k][j]); 

                } 

                valores_punto_resultado1[i][j]=suma; 

            } 

        } 

        //multiplicacion 

        for (int i=0;i<2;i++) 

        { 

            for (int j=0;j<1;j++) 

            { 

                double suma=0; 

                for (int k=0;k<2;k++) 

                { 

                    suma=suma+(resultado[i][k]*valores_punto2[k][j]); 

                } 

                valores_punto_resultado2[i][j]=suma; 

            } 

        } 

        //multiplicacion 

        for (int i=0;i<2;i++) 

        { 

            for (int j=0;j<1;j++) 

            { 

                double suma=0; 

                for (int k=0;k<2;k++) 

                { 

                    suma=suma+(resultado[i][k]*valores_punto3[k][j]); 

                } 

                valores_punto_resultado3[i][j]=suma; 

            } 

        } 

        printf("Puntos ya procesados\n"); 

        printf("x1 = %f\n",valores_punto_resultado1[0][0]); 

        printf("y1 = %f\n",valores_punto_resultado1[1][0]); 

        printf("x2 = %f\n",valores_punto_resultado2[0][0]); 

        printf("y2 = %f\n",valores_punto_resultado3[1][0]); 

        printf("x3 = %f\n",valores_punto_resultado3[0][0]); 

        printf("y3 = %f\n",valores_punto_resultado2[1][0]); 

    } 

} 

double convertidor_rad(int angulo) 

{ 

    double x; 

    x= angulo*(M_pi/180); 

    return x; 

} 

 