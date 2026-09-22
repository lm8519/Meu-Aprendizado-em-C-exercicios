# include <stdio.h>
# include <stdlib.h>
# include <locale.h>

int main ()
{
    setlocale(LC_ALL, "pt_BR.UTF-8");

    float notas [10][3];
    float maior[3], menor[3];
    int i, j;

    for(i=0;i<10;i++){
        for(j=0;j<3;j++){
            printf("Digite a nota %i do aluno %i: ", j+1,i+1);
            scanf("%f", &notas[i][j]);
        }
    }
    for(i=0;i<10;i++){
        for(j=0;j<3;j++){
            printf("%.1f \t", notas[i][j]);
            if(i==0){
                maior[j]=notas[i][j];
                menor[j]=notas[i][j];
            }else{
                if(maior[j]<notas[i][j]){
                    maior[j]=notas[i][j];
                }
                if(menor[j]>notas[i][j]){
                    menor[j]=notas[i][j];
                }
            }
        }
        printf("\n");
    }
    printf("\nMaiores notas: ");
    for(j=0;j<3;j++){
        printf("%.1f\t", maior[j]);
    }
    printf("\nMenores notas: ");
    for(j=0;j<3;j++){
        printf("%.1f\t", menor[j]);
    }
    
return 0;
}
