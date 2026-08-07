# include <stdio.h>
# include <stdlib.h>

int main ()
{
    // Variáveis
    int valor1, valor2, valor3, valor4, valor5, valor6, diferenca, quadrado, media;

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
    
    // Exercício Par ou Ímpar (IF or Else)
    printf("Digite um numero:\n");
    scanf("%d", &valor4);

    if (valor4 % 2 == 0) {
        printf("Par\n");
    } else {
        printf("Impar\n");
    }

    // Exercício mais avançado IF or ELSE
    printf("Digite sua primeira nota:\n");
    scanf("%d", &valor5);

    printf("Digite sua segunda nota:\n");
    scanf("%d", &valor6);

    media = (valor5 + valor6)/2;

    if (media >= 9){
        printf("Excelente\n");        
    } else if (media >= 6) {
        printf("Aprovado\n");
    } else {
        printf("Reprovado\n");
    }
    
    printf("Sua media e: %d", media);

    return 0;
}
