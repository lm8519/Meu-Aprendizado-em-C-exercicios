//Video https://www.youtube.com/watch?v=yKoLERQUZ1A&t=5125s - Aprenda Linguagem C para iniciantes em 2H (Vídeo indicado no ebook da faculdade)

# include <stdio.h>
# include <stdlib.h>
# include <locale.h>

//Declarando constantes para as linhas e colunas da matriz
#define LINHAS 2
#define COLUNAS 2

/*Esqueleto de uma função
tipo_de_retorno nome_funcao(parametros) // Sempre vai ter um tipo, nome e pode ser que tenha
{
    comandos...
}
*/

//Função Multiplicar
int multiplicar (int pn1, int pn2) //Multiplica recebe n1, n2 e retorna um int
{
    int res;
    res = pn1 * pn2;
    return(res); //Retornando o valor par main por estar fora da main (uma outra area de codigo), ai a função main vai chamar essa função quando precisar dela
    //se quiser que a função não tenha retorno e colocar tipo "void"
    //Vai retornar a variável "return(res)" sempre para quem chamar a função
}

int main (void) //função main
{
    setlocale(LC_ALL, "pt_BR.UTF-8");

    int n = 10; //atribuindo valor para variável
    float n2 = 6.79; //float é uma variável que possui casas decimais 
    char letra = 'a'; //Variável do tipo caracter (uma unica letra)
    char frase[10] = "Bom dia"; //Variável do tipo "frase" (uma quantidade maior de caracteres)
    double n3 = 1.23456; //Variável que possui casas decimais, porem comporta mais casas decimais do que o float (15) - real com precisão dupla
    int valor1, valor2, soma, sub, mult, di, numero, resto, dia, cont=100, resp;
    float nota1, nota2, media, freq;

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
 

    printf("Digite um número inteiro:\n ");
    scanf("%d", &numero);

    resto = numero % 2; //Ao inves do resultado da divisão, aparece o resto

    printf("Resto da divisão: %d\n", resto);
    
    //If e else
    if(resto == 0)
    {
        printf("Número par!\n");
    } else
    {
        printf("Número ímpar!\n");
    }


//Média com alteração de casas decimais
printf("Digite a primeira nota:\n");
scanf("%f", &nota1);

printf("Digite a segunda nota:\n");
scanf("%f", &nota2);

media = (nota1 + nota2)/2;

printf("Media = %.2f\n", media); //Para dizer quantas casas decimais quer %.(numero de casas)f (exemplo %.2f)

//if aninhado (if dentro de outro if) - quantidade imensa de if dentro de outro if
if ( media >= 6)
{
    printf("Aluno aprovado :)\n");
} else
        if ( media < 3)
        {
            printf("Aluno reprovado :(\n");
        } else
            {
                printf("Aluno em recuperação.\n");
            }        

//Switch...Case

printf("Digite um número de 1 a 7:");
scanf("%d", &dia);

switch (dia)
{
    case 1:
        printf("Domingo\n");
    break;
    case 2:
        printf("Segunda\n");
    break;
    case 3:
        printf("Terça\n");
    break;
    case 4:
        printf("Quarta\n");
    break;
    case 5:
        printf("Quinta\n");
    break;
    case 6:
        printf("Sexta\n");
    break;
    case 7:
        printf("Sabádo\n");
    break;

    default:
        printf("Valor inválido!\n");
}

//Diferença if / else de switch case - If else ficaria muito grande, então mais facil fazer switch case, pois fica mais limpo
//Switch não trabalha com condicional (Case dia > 1) (Valores fixos / constrantes)
//If / else pode testar condicionais 

//Linha

//Operador ternário: pode ser mais curto que usar if / else em algumas ocasiões
printf("Digite um número inteiro:\n");
scanf("%d", &numero);

//Condição a testar ? Verdadeiro : Falso

numero > 0 ? printf("Positivo\n") : printf("Negativo\n");

// ":" (else)

// Operadores lógicos (&&) (||)
printf("Digite a frequência do aluno:\n");
scanf("%f", &freq);

printf("Digite a primeira nota:\n");
scanf("%f", &nota1);

printf("Digite a segunda nota:\n");
scanf("%f", &nota2);

media = (nota1 + nota2)/2;

printf("Media = %.2f\n", media); //Para dizer quantas casas decimais quer %.(numero de casas)f (exemplo %.2f)

if ( media >= 6 && freq >= 75) //operador && (E) (As duas condições tem que ser verdadeira para que a condição seja verdadeira)
{
    printf("Aluno aprovado :)\n");
} else
        if ( media < 3 || freq < 75) //Operador || (Ou) (Uma ou outra tem que ser verdadeira para que a condição seja verdadeira)
        {
            printf("Aluno reprovado :(\n");
        } else
            {
                printf("Aluno em recuperação.\n");
            } 

//Estrutura de repetição FOR
for (cont = 1; cont <= 10; cont = cont + 1)  //Vai repetir tantas vezes ate quando for o limite (pode também ser cont++, para não ter que escrever tudo)
{
    printf("%d - Boa tarde!\n", cont);
}

for (cont = 1; cont <= 10; cont = cont + 2)  //Vai repetir tantas vezes ate quando for o limite (auterando a "soma")  
{
    printf("%d - Boa tarde!\n", cont);
}

//Estrutura de repetição while

cont = 1 ; //inicializando a variável de controle

//while (condição) repete enquanto a condição for verdadeira
while (cont <= 5)
{
    printf("%d - Linguagem C \n", cont);
    cont++; //incremento da variável de controle
}

//Estrutura de repetição do while

//Executa um comando primeiro e somente testa se a consição é verdadeira no final
//Isto garante que o comando será executado no mínimo UMA VEZ

cont = 1 ; //inicializando a variável de controle

do 
{
    printf("%d - looping do...while \n", cont);
    cont++; //Incremento da variável de controle
}
while (cont <= 10);

//Outra opção dizendo para a pessoa digitar um número não ele pré estabelecido
do 
{
    printf("Digite um valor positivo para repetir: \n");
    scanf("%d", &resp);
}
while (resp > 0);

//***VATOR (ARRAY)***
//Declarando e inicializando o vetor V1 (Pode colocar no inicio junto com as demais, so colocou aqui para ficar facil visualização)
float v1[4] = {7.1, 8.4, 9.5, 5.2}; // O que é um Vetor (Array)? É uma varíavel que tem multiplas posições de armazenamento (Nesse exemplo Float chamada v1 que tem 4 posições de armazenamento)

//{7.1, 8.4, 9.5, 5.2} indices do vetor

printf("Exibindo os Valores do Vator \n\n");
printf("v1[0] = %.1f\n", v1 [0]); //Primeiro indice não é o 1, é o 0
printf("v1[1] = %.1f\n", v1 [1]);
printf("v1[2] = %.1f\n", v1 [2]);
printf("v1[3] = %.1f\n", v1 [3]);

//Vetor (Array) com estrutura de repetição 
int i; //contador para índices do vetor

for( i = 0; i < 4; i++)
{
    printf("v1[%d] = %.1f\n", i, v1[i]);
}

//****Matriz (Array bidimensional)*****
//Declarando uma matriz
int matriz[LINHAS][COLUNAS], i, j; //Vetor é um caso especial de matriz, pode ter varias dimenções (nesse caso ela tem linhas e colunas)
//i Contador de linhas //j Contador de colunas

printf("\nDigite valor para a matriz\n\n");
//Recebendo os valores da matriz

for (i=0; i < LINHAS; i++) //o índice j controla a linha
{
    for (j=0; j < COLUNAS; j++) // o índice j controla a coluna
    {
        printf("\nElemento[%d][%d] = ", i, j);
        scanf("%d", &matriz [ i ] [ j ]);
    }
}

printf("\n\n------------- Saída de Dados -------------\n\n");

for (i = 0; i < LINHAS; i++) //o índice i controla a linha
{
    for (j = 0; j < COLUNAS; j++) //o índice j controla a coluna
    {
        printf("\nElemento[%d][%d] = %d\n", i, j, matriz[ i ][ j ]);
    }
}

//*** struct ***

//Definindo o conteúdo da struct
struct fichaAluno // é uma variável especial, dentro dela pode armazenar outras variáveis 
{
    int matricula;
    float nota1;
    float nota2;
};
//A struct sempre é la em cima nas variáveis, colocamos aqui para melhor visualização

//Criando a variiável aluno que será do tipo struct fichaAluno
struct  fichaAluno aluno; //aluno é uma variável do tipo fichaAluno

printf("Número de matricula: ");
scanf("%d", &aluno.matricula);

printf("Informe a 1a. nota: ");
scanf("%f", &aluno.nota1);

printf("Informe a 2a. nota: ");
scanf("%f", &aluno.nota2);

printf("\n\n ---------- Lendo os dados da struct ----------\n\n");
printf("Matricula: %d\n", aluno.matricula);
printf("Nota da Prova 1: %.2f\n", aluno.nota1);
printf("Nota da Prova 2: %.2f\n\n", aluno.nota2);
*/

//****** FUNÇÕES ****

//Chamando a função
int v1, v2, resultado; //Variável aqui para melhor visualização

printf("Digite o primeiro valor:");
scanf("%d", &v1);

printf("Digite o segundo valor:");
scanf("%d", &v2);

//Chama a função e recebe o retorno
resultado = multiplicar(v1, v2); //Multiplicar, nome da função la em cima
//se não tivesse essa linha, a função não seria chamada

printf("Resultado = %d\n\n", resultado);

return 0;
}
