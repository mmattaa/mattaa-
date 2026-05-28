#include <stdio.h>
#include <string.h>


int main(){
    char texto[11];     //Sabor srting 
    texto[0]= '0';
    texto[1]= 'l';
    texto[2]= 'a';
    texto[3]= ' ';
    texto[4]= 'p';
    texto[5]= 'e';
    texto[6]= 's';
    texto[7]= 's';
    texto[8]= 'o';
    texto[9]= 'a';
    texto[10]= 'l';

    printf("%s\n", texto);

    // Nao pode 
    // texto = "Bom dia";
    // texto = "Bom" + "dia";

    //copiar a string
    strcpy(texto, "Bom"); // texto = "Bom"
    printf("%s\n", texto);

    for(int i=0; i<11; i++){
        printf("%c", texto[i]);
    }
    printf("\n");

    // concatenar a string 
    strcat(texto, " dia"); // texto = texto + "dia";
    printf("%s\n", texto);

    // tamanho da string
    int tamanho = strlen(texto);
    printf("O texto '%s' tem %i caracteres\n", texto, tamanho);
    int capacidade = sizeof(texto);
    printf("O texto guarda ate %i caracteres\n", capacidade);

    // preencher a string com um caracter
    memset(texto, 'a', 8);
    printf("%s\n", texto); 
    // LIMPA A STRING 
    memset(texto, '\0', capacidade);
    printf("%s\n", texto);

    // string > outra, string == outra 
    int compara = strcmp("banana", "laranja"); 
    // < 0 ordem eh antes 
    printf("compara banana com laranja = %i\n", compara);
    compara = strcmp("laranja", "banana"); 
    // 0 ordem eh depois
    printf("compara laranja com banana =%i\n", compara);
    compara = strcmp("banana", "banana");
    // 0 = sao iguais 
    printf("compara banana com banana =%i\n", compara);
    compara = strcmp("banana", "BANANA"); 
    // > 0 Maiusculo na frente Maiusculo
    printf("compara banana com BANANA =%i\n", compara);

    char *tem_letra_a = strchr("Sergipe", 'a');
    printf("Sergipe tem a letra 'a'? %s\n", tem_letra_a);
    tem_letra_a = strchr("roraima", 'a');
    printf("roraima tem a letra 'a'? %s\n", tem_letra_a);

    // procura uma string na string 
    char *tem_silva = strstr("Joao da silva neto", "silva");
    printf("'Joao da silva neto' tem 'silva'? %s\n", tem_silva);
    tem_silva = strstr("jose de sousa", "silva");
    printf("'jose de sousa' tem 'silva'? %s\n", tem_silva);


    return 0;
}