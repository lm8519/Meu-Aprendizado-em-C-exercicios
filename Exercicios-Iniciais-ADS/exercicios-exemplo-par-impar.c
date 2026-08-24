# include <stdio.h>
# include <stdlib.h>

int main ()
{
   int valor1, resultado;
   
   printf("Digite um numero:\n");
   scanf("%d", &valor1);

   if ( valor1 % 2 == 0){
    resultado = valor1 / 2;
    printf ("A metade de %d e: %d\n", valor1, resultado);
   } else {
    resultado = valor1 * 2;
    printf("O dobro de %d e: %d\n", valor1, resultado);

   }

return 0;
}
