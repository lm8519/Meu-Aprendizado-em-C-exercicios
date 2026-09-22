# include <stdio.h>
# include <stdlib.h>
# include <locale.h>

void maiornumero(float n1, float n2) // Mesmo tipo porem tem que repetir 
{
    if(n1>n2){
        printf("Maior número é %f\n", n1);
    }else{
        printf("Maior número é %f\n", n2);
    }
}

int main ()
{
    setlocale(LC_ALL, "pt_BR.UTF-8");

    maiornumero(3,4.5);
    
return 0;
}
