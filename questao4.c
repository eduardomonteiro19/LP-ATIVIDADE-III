#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>


int main() {
    int numeros[5];
    int i;
    int countImpares = 0;
    int countNegativos = 0;
    int maior, menor;
    int somaPares = 0;
    int somaTotal = 0;

  
    printf("Digite 5 numeros inteiros:\n");
    for (i = 0; i < 5; i++) {
        scanf("%d", &numeros[i]);

        if (numeros[i] % 2 != 0) {
            countImpares++;
        }

        if (numeros[i] < 0) {
            countNegativos++;
        }

       
        somaTotal += numeros[i];

      
        if (i == 0 || numeros[i] > maior) {
            maior = numeros[i];
        }
        if (i == 0 || numeros[i] < menor) {
            menor = numeros[i];
        }

        if (numeros[i] % 2 == 0) {
            somaPares += numeros[i];
        }
    }

    
    float mediaTotal = (float)somaTotal / 5;

   
    float mediaPares = 0.0;
    if (countImpares < 5) {  
        mediaPares = (float)somaPares / (5 - countImpares);
    }

    printf("\nResultados:\n");
    printf("Quantidade de numeros impares: %d\n", countImpares);
    printf("Quantidade de numeros negativos: %d\n", countNegativos);
    printf("Maior numero: %d\n", maior);
    printf("Menor numero: %d\n", menor);
    printf("Media de numeros pares: %.2f\n", mediaPares);
    printf("Media de numeros inseridos: %.2f\n", mediaTotal);

    return 0;
}
