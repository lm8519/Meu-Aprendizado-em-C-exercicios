# include <stdio.h>
# include <stdlib.h>
# include <locale.h>

void main ()
{
    setlocale(LC_ALL, "pt_BR.UTF-8");

    int vet[3] = {10,20,30}; // Declaração vetor com 3 posições do tipo INT com valores de 10,20 e 30 (posições - 0, 1 e 2)
    int *ptr; // Declarado ponteiro chamado ptr do tipo INT
    ptr = vet; // Ponteiro recebe o endereço do vetor

    printf("Valor de vet[0]: %d\n", vet[0]);
    printf("Valor de *ptr: %d\n", *ptr);
    ptr = &vet[1];

    printf("Valor de vet[1]: %d\n", vet[1]);
    printf("Valor de *ptr: %d\n", *ptr);
    ptr = &vet[2];

    printf("Valor de vet[2]: %d\n", vet[2]);
    printf("Valor de *ptr: %d\n", *ptr);
}
