# include <stdio.h>
# include <stdlib.h>

int main ()
{
    // Variáveis
    int valor1, valor2, valor3, valor4, diferenca, quadrado;

    // Exercício diferença
    printf("Digite o primeiro numero:\n");
    scanf("%d", &valor1);

    printf("Digite o segundo numero:\n");
    scanf("%d", &valor2);

    diferenca = valor1 - valor2;

    printf("A diferenca ente %d e %d e: %d\n", valor1, valor2, diferenca);
    
    // Exercício n° ao quadrado
    printf("Digite um numero:\n");
    scanf("%d", &valor3);

    quadrado = valor3*valor3;

    printf("Valor de %d ao quadrado e: %d\n", valor3, quadrado);
    
    // Exercício Par ou Ímpar
    printf("Digite um numero:\n");
    scanf("%d", &valor4);

    if (valor4 % 2 == 0) {
        printf("Par\n");
    } else {
        printf("Impar\n");
    }

    return 0;
}
