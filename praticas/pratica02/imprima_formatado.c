#include <stdio.h>

int main(){
    printf("  ==============================\n");
    printf("    N O T A    L E G A L \n");
    printf("  ==============================\n");
    printf("                               \n");
    printf("Produto         Qnt Valor Unit)\n");
    printf("%-15s %03i %11.2f\n", "Camiseta", 2, 39.99);
    printf("%-15s %03i %11.2f\n", "Calca", 1, 89.90);
    printf("%-15s %03i %11.2f\n", "Meia Social", 3, 19.99);
    printf("  ==============================\n");
    printf("%s %25.2f\n", "Total", 229.85);    


    return 0;
}