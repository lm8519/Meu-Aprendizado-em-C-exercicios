# include <stdio.h>
# include <stdlib.h>
# include <locale.h>

/*
// Void main não precisa de Return 0
void main ()
{
    setlocale(LC_ALL, "pt_BR.UTF-8");

// Exemplo de declaração e atribuição no ponteiro
    int a=3;
    int *p;
    p=&a;

    printf("Conteudo apontado por p: %i\n", *p);
    printf("Enderço em p: %p\n", p);

}

// Exemplo simples
int main () {
    setlocale(LC_ALL, "pt_BR.UTF-8");

    // Declarando uma variável inteira
    int valor = 10;

    // Declarando um ponteiro para int e atribua o endereço da variável "valor" a ele
    int *ponteiro = &valor;

    // Imprimindo o valor apontado pelo ponteiro usando o operador "*" (importante o operador de referencia)
    printf("O valor da variável apontada pelo ponteiro é: %d\n", *ponteiro);

    // Exemplo sem o operador de referencia "*"
    printf("O valor da variável apontada pelo ponteiro é: %d\n", ponteiro);

    return 0;

// Função para trocar valores de duas variáveis usando ponteiros
void trocarValores(int *ptr1, int *ptr2) {
    int temp = *ptr1;
    *ptr1 = *ptr2;
    *ptr2 = temp;
}

int main () {
    setlocale(LC_ALL, "pt_BR.UTF-8");

    int numero1, numero2;

    printf("Digite o primeiro número:");
    scanf("%d", &numero1);

    printf("Digite o segundo número:");
    scanf("%d", &numero2);

    printf("Antes da troca: %d, %d\n", numero1, numero2);

    // Chama a função para trocar os valores
    trocarValores (&numero1, &numero2);

    printf("Depois da troca: %d, %d\n", numero1, numero2);

    return 0;
    

    // Exemplo de mudança de conteúdo e endereço do ponteiro

    void main () {
        int a=3,b=1,c=2, *p1=NULL,*p2=NULL;
        p1=&a;
        p2=&b;
        printf("Conteudo apontado por p1: %i\n",*p1);
        printf("Endereco em p1: %p\n",p1);

        printf("Conteudo apontado por p2: %i\n",*p2);
        printf("Endereco em p2: %p\n",p2);

        a=4;
        p2=&c;

         printf("Conteudo apontado por p1: %i\n",*p1);
        printf("Endereco em p1: %p\n",p1);

        printf("Conteudo apontado por p2: %i\n",*p2);
        printf("Endereco em p2: %p\n",p2);
    

        // Exemplo de mudança de conteúdo usando o ponteiro
    void main () {
        int a=3,b=1,c=2, *p1=NULL,*p2=NULL;
        p1=&a;
        p2=&b;
        printf("Conteudo apontado por p1: %i\n",*p1);
        printf("Endereco em p1: %p\n",p1);

        printf("Conteudo apontado por p2: %i\n",*p2);
        printf("Endereco em p2: %p\n",p2);

        *p1=6;
        (*p2)++;

        printf("Conteudo apontado por p1: %i\n",*p1);
        printf("Endereco em p1: %p\n",p1);

        printf("Conteudo apontado por p2: %i\n",*p2);
        printf("Endereco em p2: %p\n",p2);

}
        
       // Exemplo de ponteiros de outros tipos
       void main () {
        int a=3, *p_int; // Ponteiro chamado int
        float b=2.8,*p_float; // Ponteiro chamado float
        char c='a',*p_char; // Ponteiro chamado char
        double d=4.9,*p_double; // // Ponteiro chamado double

        // Atribuição dos endereços das respectivas variaveis
        p_int=&a;
        p_float=&b;
        p_char=&c;
        p_double=&d;

        printf("Conteudo apontado por p_int: %i\n",*p_int);
        printf("Endereco em p_int: %p\n",p_int);

        printf("Conteudo apontado por p_float: %f\n",*p_float);
        printf("Endereco em p_float: %p\n",p_float);

        printf("Conteudo apontado por p_char: %c\n",*p_char);
        printf("Endereco em p_char: %p\n",p_char);

        printf("Conteudo apontado por p_double: %lf\n",*p_double);
        printf("Endereco em p_double: %p\n",p_double);

        */

        // Exercicio analise o código abaixo em linguagem C:

        void main () {
            int x, y=0, *p;
            p = &y;
            x = *p + 4; // Resulta em y = 4, porem é descartado
            x = 3; // Vale esse resultado 2 (com o x--)
            x--;

            *p = x+y; // Então x = 2 e y = 0

            printf("%i %i\n",x,y);
       }