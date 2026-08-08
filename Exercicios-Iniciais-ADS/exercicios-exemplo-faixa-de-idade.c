# include <stdio.h>
# include <stdlib.h>

int main ()
{
    // exercício passado pelo professor: 
    //Enunciado: Escreva um programa em C que: 1. Peça ao usuário para inserir a quantidade de pessoas. / 2. Solicite a idade de cada pessoa. /  3. Classifique as idades nas seguintes faixas: ○ Jovens: 0 a 17 anos / ○ Adultos: 18 a 64 anos / ○ Idosos: 65 anos ou mais /  4. Ao final, exiba a quantidade de pessoas em cada faixa etária. / Exemplo de Entrada: Digite a idade da pessoa 1: 15 /  Digite a idade da pessoa 2: 25 /  Digite a idade da pessoa 3: 70 /  Exemplo de Saída: Jovens: 1 / Adultos: 1 / Idosos: 1

 int idade, idade1, idade2, idade3;
 int jovens = 0, adultos = 0, idosos = 0;
 int qtdepessoas;

 printf("Digite a idade da pessoa 1: ");
 scanf("%d", &idade1);
 printf("Digite a idade da pessoa 2: ");
 scanf("%d", &idade2);
 printf("Digite a idade da pessoa 3: ");
 scanf("%d", &idade3);
 
 if (idade1 >= 0 && idade1 <= 17) {
 jovens++;
 } else if (idade1 >= 18 && idade1 <= 64) {
 adultos++;
 } else if (idade1 >= 65) {
 idosos++;
 }

 if (idade2 >= 0 && idade2 <= 17) {
 jovens++;
 } else if (idade2 >= 18 && idade2 <= 64) {
 adultos++;
 } else if (idade2 >= 65) {
 idosos++;
 }
 
 if (idade3 >= 0 && idade3 <= 17) {
 jovens++;
 } else if (idade3 >= 18 && idade3 <= 64) {
 adultos++;
 } else if (idade3 >= 65) {
 idosos++;
 }
 
 printf("Jovens: %d\n", jovens);
 printf("Adultos: %d\n", adultos);
 printf("Idosos: %d\n", idosos);

    // NOTA DE EVOLUÇÃO (Reflexão com a IA):
    // O código original do professor fixava apenas 3 pessoas (idade1, idade2, idade3) o que não fez muita logica para mim, visto que foi pedido "1. Peça ao usuário para inserir a quantidade de pessoas"
    // e duplicava os "ifs", violando o item 1 do enunciado. Junto com a IA, corrigi a lógica para usar um laço 'for' dinâmico, tornando o programa 
    // aberto para ler qualquer quantidade de pessoas informada pelo usuário.

    printf("Digite a quantidade de pessoas:\n");
    scanf("%d", &qtdepessoas);

    for (int i = 1; i <= qtdepessoas; i++)
    {
        printf("Digite a idade da pessoa %d:", i);
        scanf("%d", &idade);

        if (idade >= 0 && idade <= 17) {
            jovens++;
        } else if (idade >= 18 && idade <= 64) {
            adultos++;
        } else if (idade >= 65) {
            idosos++;
        }
    }

    printf("\nJovens: %d\n", jovens);
    printf("Adultos: %d\n", adultos);
    printf("Idosos: %d\n", idosos);

    
return 0;
}
