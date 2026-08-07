# include <stdio.h>
# include <stdlib.h>

int main ()
{
    int valor1, valor2, diferenca;

    printf("Digite o primeiro numero:\n");
    scanf("%d", &valor1);

    printf("Digite o segundo numero:\n");
    scanf("%d", &valor2);

    diferenca = valor1 - valor2;

    printf("A diferenca ente %d e %d é: %d\n", valor1, valor2, diferenca);
    
return 0;
}
