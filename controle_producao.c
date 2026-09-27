#include <stdio.h>

int dias, pcsprodz, pcstotais, acimade50 = 0;

int main(){

    for(dias = 1; dias <= 7; dias++){

        printf("quantas pecas foram produzidas hoje: \n");
        scanf("%i", &pcsprodz);

        pcstotais = pcstotais + pcsprodz;

        if(pcsprodz > 50){
            acimade50++;
        }
    }

    printf("total produzido: %i\n", pcstotais);
    printf("dias com producao acima de 50: %i\n", acimade50);

      return 0;
}
