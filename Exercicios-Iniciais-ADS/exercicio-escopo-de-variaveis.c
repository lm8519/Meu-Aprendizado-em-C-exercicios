# include <stdio.h>
# include <stdlib.h>
# include <locale.h>

// Variável Global
int glovalVar = 10;

// Função com parâmetros

int funcao (int a, int b) {
    // Variável local dentro da função

    int localVarFuncao = 20;

    printf("Escopo Local - localVarFuncao: %d\n", localVarFuncao);

    // Parâmetro de funçao

    printf("Parâmetros da Função - a: %d, b: %d\n", a, b);

    // Acesso à variável global dentro da função
    printf("Escopo Global (dentro da função) - globalVar: %d\n", glovalVar);
}

int main ()
{
    setlocale(LC_ALL, "pt_BR.UTF-8");

    // Variável local dentro da função main
    int localVarMain = 5;

    printf("Escopo Global - globalVar: %d\n", glovalVar);
    printf("Escopo Local - localVarMain: %d\n", localVarMain);

    // Escopo de Bloco
    {
        int blockVar= 15;
        printf("Escopo de Bloco - blockVar: %d\n", blockVar);
    }

    // Parâmetro de Função
    int resultado = funcao (7, 3);

    printf("Resultado da função: %d\n", resultado);


return 0;
}
