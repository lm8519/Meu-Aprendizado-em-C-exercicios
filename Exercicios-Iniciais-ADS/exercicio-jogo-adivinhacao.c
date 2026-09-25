# include <stdio.h>
# include <stdlib.h>
# include <locale.h>

int main ()
{
    setlocale(LC_ALL, "pt_BR.UTF-8");

    int numero_secreto, chute;

    // Pede para pessoa inserir o número secreto
    printf("Peça para alguém digitar o número secreto (entre 1 e 100): ");
    scanf ("%d", &numero_secreto);

    // Limpa a tela para que o número secreto não fique visível
    printf("\033[H\033[J"); // Código ANSI para limpar a tela (alternativa ao system("clear"))

    // Outra pessoa tenta adivinhar
    printf("Tente adivinhar o número secreto: ");
    scanf("%d", &chute);

    // Verificase a tentativa foi correta
    if (chute == numero_secreto) {
        printf("Parabéns! Você acertou o número! \n");
    
    } else {
        printf("Você errou! O número secreto era %d. \n", numero_secreto);
    }

return 0;
}
