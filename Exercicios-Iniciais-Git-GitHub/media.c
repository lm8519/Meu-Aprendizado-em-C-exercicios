# include <stdio.h>
# include <stdlib.h>

int main ()
{
    int valor1, valor2, valor3, media;

    printf("Digite o primeiro valor: \n", valor1);
    scanf("%d", &valor1);

    printf("Digite o segundo valor: \n", valor2);
    scanf("%d", &valor2);

    printf("Digite o terceiro valor: \n", valor3);
    scanf("%d", &valor3);

    media = (valor1 + valor2 + valor3)/3;

    printf("A media é: %d", media);

return 0;
}