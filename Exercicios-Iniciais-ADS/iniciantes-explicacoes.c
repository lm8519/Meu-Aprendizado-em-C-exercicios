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


    printf("Hello World\n");

    printf("Exibindo o número inteiro %d\n", n);
    printf("Exibindo um número real %f\n");


return 0;
}
