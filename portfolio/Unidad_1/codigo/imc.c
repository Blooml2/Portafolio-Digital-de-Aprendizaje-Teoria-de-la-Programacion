#include <stdio.h>

int main() {
    float peso, altura, imc;

    printf("================================\n");
    printf("      CALCULADORA DE IMC        \n");
    printf("================================\n");

    printf("Ingrese su peso en kg: ");
    scanf("%f", &peso);

    printf("Ingrese su altura en metros: ");
    scanf("%f", &altura);

    imc = peso / (altura * altura);

    printf("================================\n");
    printf("Su IMC es: %.2f\n", imc);
    printf("================================\n");

    return 0;
}
