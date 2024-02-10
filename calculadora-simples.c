#include <stdio.h>

float adicao( ) {
    float valor1, valor2;
    printf("\nDigite o primeiro número: ");
    scanf("%f", &valor1);
        
    printf("\nDigite o segundo número: ");
    scanf("%f", &valor2);
    
    return (valor1 + valor2);
}

float subtracao( ) {
    float valor1, valor2;
    printf("\nDigite o primeiro número: ");
    scanf("%f", &valor1);
        
    printf("\nDigite o segundo número: ");
    scanf("%f", &valor2);
    
    return (valor1 - valor2);
}

float multiplicacao( ) {
    float valor1, valor2;
    printf("\nDigite o primeiro número: ");
    scanf("%f", &valor1);
        
    printf("\nDigite o segundo número: ");
    scanf("%f", &valor2);
    
    return (valor1 * valor2);
}

float divisao( ) {
    float valor1, valor2;
    printf("\nDigite o primeiro número: ");
    scanf("%f", &valor1);
        
    printf("\nDigite o segundo número: ");
    scanf("%f", &valor2);
    
    if(valor2 == 0) {
        printf("\nErro! Não existe divisão por zero.\n");
        return 0;
    } else {
        return (valor1 / valor2);  
    }
}

void menu( ) {
    int operacao, escolha;
    float resultado = 0;
    
    do {
    printf("\nMENU\n\nDigite o número da operação a ser realizada: \n1- Adição \n2- Subtração \n3- Multiplicação \n4- Divisão \n\n");

    scanf("%d", &operacao);
    
    switch (operacao) {
        case 1:
            resultado = adicao( );
                printf("\nResultado: %.2f\n", resultado);
                    break;
                
        case 2:
            resultado = subtracao( );
                printf("\nResultado: %.2f\n", resultado);
                    break;
                
        case 3:
            resultado = multiplicacao( );
                printf("\nResultado: %.2f\n", resultado);
                    break;
                
        case 4:
            resultado = divisao( );
                if (resultado != 0) {
                    printf("\nResultado: %.2f\n", resultado);
                }
                    break;
                
        default:
            printf("\nOperação inválida, tente de novo!\n");
        }
    
    printf("\nDeseja voltar ao menu principal? \n\nCaso sim, digite 1. \n\nCaso não, digite qualquer número.\n\n");
    scanf("%d", &escolha);
    
    } while (escolha == 1);
    
    printf("\nFim do programa.");
}

int main( ) {
    printf("Olá, esse programa simula uma calculadora simples em C.\n");
    
    menu( );
    
    return 0;
}