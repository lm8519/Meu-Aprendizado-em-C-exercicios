# include <stdio.h>
# include <stdlib.h>
# include <locale.h>

void main ()
{
    setlocale(LC_ALL, "pt_BR.UTF-8");

    /*
    float vet [5]={1.2,5.4,8.9,2.3,0.7};
    float *p=vet;

    printf("Valor da posição 0: %f\n", *p);
    printf("Endereço da posição 0: %p\n",p);

    p=p+2;
    printf("Valor da posição 2: %f\n", *p);
    printf("Endereço da posição 2: %p\n", p);

    p++;
    printf("Valor da posição 3: %f\n", *p);
    printf("Endereço da posição 3: %p\n", p);

    printf("Valor da posição 4: %f\n", *(p+1));
    printf("Endereço da posição 4: %p\n", *(p+1));

    printf("Valor da posição 3 subtraindo 1: %f\n", *p-1);
    printf("Endereço da posição 2: %p\n", p-1);
    */
   
    /*
    char a='x',b='k';
    char *p_a=&a, *p_b=&b;
    if(p_a>p_b) {
        printf("p_a > p_b\n %p > %p\n", p_a,p_b);
    }else{
        printf("p_b > p_a\n %p > %p\n",p_b,p_a);
    }
    printf("Diferença: %p\n", p_a-p_b);
    */

    double vet[5]={1.2,5.4,8.9,2.3,0.7};
    double *p=vet;

    p+=2;
    printf("Valor da posição 2: %lf\n", *p);
    p-=1;
    printf("Valor da posição 1: %lf\n", *p);
}
