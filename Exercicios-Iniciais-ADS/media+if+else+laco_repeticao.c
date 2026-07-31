# include <stdio.h>
# include <stdlib.h>

int main ()
{
    int valor1, valor2, valor3, media;

do {
    printf("Digite o primeiro valor: \n", valor1);
    scanf("%d", &valor1);
    if (valor1 < 0 || valor1 > 10) {
        printf("Valor invalido! Tente novamente.\n");
}
} while (valor1 < 0 || valor1 > 10);

do {
    printf("Digite o segundo valor: \n", valor2);
    scanf("%d", &valor2);
    if (valor2 < 0 || valor2 > 10) {
        printf("Valor invalido! Tente novamente.\n");
    }
} while (valor2 < 0 || valor2 > 10);

do {
    printf("Digite o terceiro valor: \n", valor3);
    scanf("%d", &valor3);
    if (valor3 < 0 || valor3 > 10 ) {
        printf("Valor invalido! Tente novamente. \n");
    }
} while (valor3 < 0 || valor3 > 10);

    media = (valor1 + valor2 + valor3)/3;

    printf("A media e: %d \n", media);

    if (media >= 6)
    {
        printf("Aprovado!\n");
    
    } else {
        printf("Reprovado\n");
    }

return 0;
}