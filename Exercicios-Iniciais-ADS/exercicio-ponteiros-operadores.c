# include <stdio.h>
# include <stdlib.h>
# include <locale.h>

int main ()
{
    setlocale(LC_ALL, "pt_BR.UTF-8");

    double vet [19];

    printf("Digite o primeiro valor do tipo double:");
    scanf("%lf", &vet [0]);

    printf("[0] é: %.1lf", vet [0]);
    
return 0;
}
