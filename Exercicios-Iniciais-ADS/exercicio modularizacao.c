# include <stdio.h>
# include <stdlib.h>
# include <locale.h>

// Declaração da função soma
int soma (int a, int b){
    return a + b;
}

int main ()
{
    setlocale(LC_ALL, "pt_BR.UTF-8");

    // Declaração de duas variáveis inteiras
    int numero1 = 5;
    int numero2 = 3;

    // Chama a função soma com os números 5 e 3 e armazena o resultado na variável "resultado"
    int resultado = soma (numero1, numero2);

    // Imprime o resultado
    printf("A soma de %d e %d é %d\n", numero1, numero2, resultado);

return 0;
}
    