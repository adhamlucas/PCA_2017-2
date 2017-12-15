#include <stdio.h>

  int main(){
    int dia_nasc, mes_nasc, ano_nasc;
    int dia_atual, mes_atual, ano_atual;
    int ano, mes, dia;

    printf("Digite o dia, o mês e o ano de nascimento\n");
    scanf("%i %i %i", &dia_nasc, &mes_nasc, &ano_nasc);
    printf("Digite o dia, o mês e o ano atual\n");
    scanf("%i %i %i", &dia_atual, &mes_atual, &ano_atual);

    if(ano_nasc == ano_atual){
      ano = 0;
      if(dia_nasc <= dia_atual){
        mes = mes_atual - mes_nasc;
        dia = dia_atual - dia_nasc;
      }
      else{
        mes = mes_atual - mes_nasc - 1;
        dia = 30 - dia_atual;
      }
    }

    else{
        ano = ano_atual - ano_nasc;

        if(dia_atual >= dia_nasc && mes_atual >= mes_nasc){
          dia = dia_atual - dia_nasc;
          mes = mes_atual - mes_nasc;
        }
        if(dia_atual < dia_nasc && mes_atual > mes_nasc){
          dia = 30 - (dia_nasc - dia_atual);
          mes = (mes_atual - mes_nasc) - 1;
        }
        if(dia_atual < dia_nasc && mes_atual == mes_nasc){
          ano = ano - 1;
          dia = 30 - (dia_nasc - dia_atual);
          mes = 12 - 1;
        }
        if(dia_atual < dia_nasc && mes_atual < mes_nasc){
          ano = ano - 1
          dia = 30 - (dia_nasc - dia_atual);
          mes = 12 - (mes_nasc - mes_atual) - 1;
        }
        if(dia_atual >= dia_nasc && mes_atual < mes_nasc){
          ano = ano - 1;
          dia = dia_atual - dia_nasc;
          mes = 12 - (mes_nasc - mes_atual);
        }
    }

    printf("%i ano(s) %i mes(es) %i dia(s)\n", ano, mes, dia);

    return 0;
  }
