#include <stdio.h>

int main(){  
    int n; // Solicita quantidade de numeros
    printf("Digite a quantidade de numeros");
    scanf ("%d", &n);
    int soma=0;
    int numeros [n];
    for (int i=0; i<n; i++){
        printf("Entre com numero \n");
        scanf ("%d", &numeros[i]); 
        soma=soma+numeros[i];
    }

   float media_aritmetica=(float)soma/n;
   printf("media aritmetica: %.2f\n", media_aritmetica);


    return 0;
}