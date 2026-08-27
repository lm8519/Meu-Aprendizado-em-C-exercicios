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

    int valor1, valor2, soma, sub, mult, di, numero, resto;

    //Para não ficar aparecendo toda vez no código quando testar algo "novo" (permanece no arquivo, porem não é executada)
/* 
    //Usos do comando printf com diversas variáveis
    printf("Hello World\n");

    printf("Exibindo o número inteiro %d\n", n);
    printf("Exibindo um número real %f\n", n2);
    printf("Exibindo o caracter %c\n", letra);
    printf("%s\n", frase);
    printf("Exibindo variável do tipo double %f\n", n3);
    printf("Valores: %d %f %c %s %f\n", n, n2, letra, frase, n3);

    //Usos do comando scanf com diversas variáveis
    printf("Digite um número inteiro: ");
    scanf("%d", &valor1); //& Comercial 

    printf("Digite outro número inteiro: ");
    scanf("%d", &valor2);

    //Operadores aritméticos
    soma = valor1 + valor2;
    sub = valor1 - valor2;
    mult = valor1 * valor2;
    di = valor1 / valor2;

    printf("Valor da soma de %d + %d = %d\n", valor1, valor2, soma);
    printf("Valor da subtração de %d - %d = %d\n", valor1, valor2, sub);
    printf("Valor da multiplicação de %d * %d = %d\n", valor1, valor2, mult);
    printf("Valor da divisão de %d / %d = %d\n", valor1, valor2, di);
*/ 

    printf("Digite um número inteiro: ");
    scanf("%d", &numero);

    resto = numero % 2; //Ao inves do resultado da divisão, aparece o resto

    printf("Resto da divisão: %d", resto);
    
return 0;
}
