#include <stdio.h>

int main() {
    int idade =0;
    printf("Informe sua idade:");
    scanf("%i", &idade);

    int eh_crianca_menor_que_12anos = idade < 12;
    int eh_adolescente_maior_que_13anos = idade > 13;
    int eh_adulto_maior_que_18anos = idade > 18; 
    int eh_idoso_maior_que_65anos = idade > 65;

    if (eh_crianca_menor_que_12anos) {
        printf("Com %i anos eh crianca\n", idade);
     } else if (eh_adolescente_maior_que_13anos) {
        printf("Com %i anos eh adolescente\n", idade);
     } else if (eh_adulto_maior_que_18anos) {
        printf("Com %i anos eh adulto\n", idade);
     } else if (eh_idoso_maior_que_65anos) {
        printf("Com %i anos eh idoso", idade);            
    }




    return 0;
}