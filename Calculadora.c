#include <stdio.h>
#include <stdlib.h>
 
//Função principal do programa
void main(){
 
    //Definindo Variáveis
    float valor1, valor2;
    int opcao;
    printf("Caro usuarios, escolha uma alternativa.");
    printf("\n1-somar");
    printf("\n2-subtrair");
    printf("\n3-dividir");
    printf("\n4-multiplicar\n");
    scanf("%d", &opcao);

    printf("Digite um valor: ");
    scanf("%f", &valor1);

    printf("Digite um valor: ");
    scanf("%f", &valor2);


    switch(opcao){
        case 1:
            printf("Resultado da soma: %.2f\n", valor1 + valor2 );
            break;
        case 2:
            printf("Resultado da subtracao: %.2f\n", valor1 - valor2 );
            break;
        case 3:
            printf("Resultado da divisao: %.2f\n", valor1 / valor2 );
            break;
        case 4:
            printf("Resultado da multiplicacao: %.2f\n", valor1 * valor2);
            break;
    }
 
    //Pausa o programa após executar
    system("pause");
 
}