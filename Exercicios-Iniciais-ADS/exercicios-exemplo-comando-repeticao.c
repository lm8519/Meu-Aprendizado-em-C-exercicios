# include <stdio.h>
# include <stdlib.h>

int main ()
{
    // Estrutura de loop FOR (executa uma sequência de instruções várias vezes e abrevia o código que gerencia a variável de loop. A sintaxe do laço for consiste em uma das primeiras instruções a serem utilizadas.)

    int i;
    int y = 1;
    int x = 1;
    for (i = 1; i < 11; i++)
    {
        printf("%d \n", i);

    }
    // Estruruta de loop while (repete uma instrução ou um grupo de instruções enquanto uma determinada condição for verdadeira. Ele testa a condição antes de executar o corpo do loop)

    while (y < 11)
    {
        printf("%d \n", y);
        y++;
    }
    
    // Estrutura de loop do-while (simula a instrução while, mas testa a condição no final do corpo do loop.)
    do
    {
        printf("%d \n", x);
        x++;
        } while (x < 11);
    
    
return 0;
}
