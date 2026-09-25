# include <stdio.h>
# include <stdlib.h>
# include <locale.h>

int main ()
{
    setlocale(LC_ALL, "pt_BR.UTF-8");

    float pc1, pc2, pc3;
    int economicos = 0, moderados = 0, carissimos = 0;

    // Solicita o preço dos produtos
    printf("Digite o valor do produto 1: \n");
    scanf("%f", &pc1);

    printf("Digite o valor do produto 2: \n");
    scanf("%f", &pc2);

    printf("Digite o valor do produto 3: \n");
    scanf("%f", &pc3);

    // Classificação do preço 1
    if (pc1 < 50)
    {
        economicos++;
    } else if (pc1 >= 50 && pc1 <= 100) {
        moderados++;
    } else {
        carissimos++;
    }

    // Classificação do preço 2
    if (pc2 < 50)
    {
        economicos++;
    } else if (pc2 >= 50 && pc2 <= 100) {
        moderados++;
    } else {
        carissimos++;
    }

    // Classificação do preço 3
    if (pc3 < 50)
    {
        economicos++;
    } else if (pc3 >= 50 && pc3 <= 100) {
        moderados++;
    } else {
        carissimos++;
    }

    printf("Econômico: %d \n", economicos);
    printf("Moderados: %d \n", moderados);
    printf("Carissimos: %d \n", carissimos);
    
return 0;
}
