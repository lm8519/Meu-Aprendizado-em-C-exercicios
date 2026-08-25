# include <stdio.h>
# include <stdlib.h>

int main ()
{
    int valor1, valor2, valor3, media;

    printf("Digite o primeiro numero:\n");
    scanf( "%d", &valor1);

    printf("Digite o segundo numero:\n");
    scanf( "%d", &valor2);

    printf("Digite o terceito numero:\n");
    scanf( "%d", &valor3);

    media = (valor1 + valor2 + valor3)/3;

    printf("Valor da media e: %d\n", media);

    if (media < 5)
    {
        printf("Classificacao: Baixa\n"); 
    }
    else if (media >= 5 && media <= 7)
    {
        printf("Classificacao: Media\n");
    }
    else  if (media > 7)
    {
        printf("Classificacao: Alta\n");
    }
    

return 0;
}
