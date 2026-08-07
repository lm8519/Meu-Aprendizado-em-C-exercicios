# include <stdio.h>
# include <stdlib.h>

int main ()
{
    // Exercício exemplo usando \n para quebras de linha e \t para tabulação
    printf("Lista de Produtos: \n");
    printf("Produto\t\tPreco\t\tQuantidade\n");
    printf("---------------------------------------------------------\n");
    printf("Cafe\t\tR$ 3.50\t\t10\n");
    printf("Pao\t\tR$ 2.00\t\t20\n");
    printf("Leite\t\tR$ 4.50\t\t15\n");
    
    // Mais uma linha para pular
    printf("\nResumo da compra:\n");
    printf("\t- Total de produtos: 3\n");
    printf("\t- Valor total: R$ 10.00\n");

    return 0;
}