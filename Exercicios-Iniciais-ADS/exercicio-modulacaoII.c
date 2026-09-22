# include <stdio.h>
# include <stdlib.h>
# include <locale.h>

float taxa_media(float y, float y0, float x, float x0){
    float tx;
    tx=(y-y0)/(x-x0);
    return tx;

}

int main ()
{
    setlocale(LC_ALL, "pt_BR.UTF-8");

    float vy, vy0, vx, vx0, resposta;

    printf("Digite o valor de Y: ");
    scanf("%f", &vy);
    printf("Digite o valor de Y0: ");
    scanf("%f", &vy0);
    printf("Digite o valor de X: ");
    scanf("%f", &vx);
    printf("Digite o valor de X0: ");
    scanf("%f", &vx0);

    resposta=taxa_media(vy,vy0,vx,vx0);
    printf("A taxa média é %f\n", resposta);

return 0;
}
