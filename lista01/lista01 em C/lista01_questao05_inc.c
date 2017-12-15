#include <stdio.h>

int main(){
    int dia,ano,mes,dia_atual,mes_atual,ano_atual;
    int anos,dias,meses;

    printf("Digite o dia do seu nascimento:\n");
    scanf("%d",&dia);
    printf("Digite o mes do seu nascimento:\n");
    scanf("%d",&mes);
    printf("Digite o ano do seu nascimento:\n");
    scanf("%d",&ano);

    printf("Digite a data atual da mesma forma que voce digitou a sua data de nascimento:\n");
    scanf("%d %d %d",&dia_atual,&mes_atual,&ano_atual);

    // anos = ano atual - ano de nascimento
    anos = ano_atual - ano;

    //meses = mes atual - mes de nascimento - 1
    if (mes<mes_atual){
        meses = mes_atual - mes - 1;
    }
    else{
        meses = mes_atual;
        anos = anos - 1;
    }

    if (mes==2)
    {
        if(ano%4==0)
            dias = ( 28-dia ) + dia_atual;
        else
            dias = (29 - dia) + dia_atual;
    }
    if ((mes_atual==4) || (mes_atual==6) || (mes_atual==9) || (mes_atual==11))
        dias = (30-dia) + dia_atual;
    else
        dias = (31-dia) + dia_atual;

    printf("\t Voce tem %d anos, %d meses e %d dias",anos,meses,dias);
}
