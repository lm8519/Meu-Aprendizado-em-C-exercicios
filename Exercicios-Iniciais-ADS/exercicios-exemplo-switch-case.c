#include <stdio.h>
#include <locale.h>

int main() 
{
    int opcao;
    float num1, num2, resultado;

    setlocale(LC_ALL, "pt_BR.UTF-8");

    // Exibe as opções para o usuário
    printf("Escolha uma operação matemática:\n");
    printf("1. Adição\n");
    printf("2. Subtração\n");
    printf("3. Multiplicação\n");
    printf("4. Divisão\n");
    
    printf("Digite sua opção (1-4): ");
    scanf("%d", &opcao);

    // Solicita os dois números
    printf("Digite o primeiro número: ");
    scanf("%f", &num1);
    
    printf("Digite o segundo número: ");
    scanf("%f", &num2);

    // Estrutura switch...case para escolher a operação
    switch(opcao) {
    case 1:
    resultado = num1 + num2;
    printf("Resultado da adição: %.2f\n", resultado);
    break;
 
    case 2:
    resultado = num1 - num2;
    printf("Resultado da subtração: %.2f\n", resultado);
    break;
 
    case 3:
    resultado = num1 * num2;
    printf("Resultado da multiplicação: %.2f\n", resultado);
    break;
 
    case 4:
    if (num2 != 0) {
    resultado = num1 / num2;
    printf("Resultado da divisão: %.2f\n", resultado);
    } else {
    printf("Erro: divisão por zero!\n");
    }
    break;
 
    default:
    printf("Opção inválida!\n");
 }

 return 0; }
