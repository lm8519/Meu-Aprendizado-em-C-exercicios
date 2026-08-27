//Video https://www.youtube.com/watch?v=yKoLERQUZ1A&t=5125s - Aprenda Linguagem C para iniciantes em 2H (Vídeo indicado no ebook da faculdade)

# include <stdio.h>
# include <stdlib.h>
# include <locale.h>

int main (void)
{
    setlocale(LC_ALL, "pt_BR.UTF-8");

    int n = 10; //atribuindo valor para variável
    float n2 = 6.79; //float é uma variável que possui casas decimais 
    char letra = 'a'; //Variável do tipo caracter (uma unica letra)
    char frase[10] = "Bom dia"; //Variável do tipo "frase" (uma quantidade maior de caracteres)
    double n3 = 1.23456; //Variável que possui casas decimais, porem comporta mais casas decimais do que o float (15) - real com precisão dupla

    printf("Hello World\n");

    printf("Exibindo o número inteiro %d\n", n);
    printf("Exibindo um número real %f\n", n2);
    printf("Exibindo o caracter %c\n", letra);
    printf("%s\n", frase);
    printf("Exibindo variável do tipo double %f\n", n3);
    printf("Valores: %d %f %c %s %f\n", n, n2, letra, frase, n3);

return 0;
}
