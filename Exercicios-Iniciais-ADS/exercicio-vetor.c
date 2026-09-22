# include <stdio.h>
# include <stdlib.h>
# include <locale.h>

// Como eu fiz o exercício 
int main ()
{
    setlocale(LC_ALL, "pt_BR.UTF-8");

    /*
    int v[20];
    int i;

    // Digitar os 20 números
    for (i = 0; i < 20; i++)
    {
        printf("Digite o %dº número inteiro: \n", i + 1);
        scanf("%d", &v[i]);
    }
    
    // Mostrar os 20 números
    for (i = 0; i < 20; i++)
    {
        printf("O %dº inteiro é: %d \n", i + 1, v[i]);
    }
    */

// Como o professor fez (eu esqueci de dizer quais são pares e quais são ímpares)
    int v[20];
    int i, pares=0;

    for(i=0;i<20;i++){
        printf("Digite o %io valor: ",i+1);
        scanf("%i", &v[i]);
    }

    for(i=0;i<20;i++){
        printf("%i\t", v[i]);
    }
    printf("\nPares: ");
    for(i=0;i<20;i++){
        if(v[i]%2==0){
            printf("%i\t", v[i]);
            pares++;
        }
    }
    printf("\nQuant. pares: %i\n", pares);
    
return 0;
}
