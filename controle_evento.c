#include<stdio.h>

float receitaestudantes, receitaprofissionais,
      receitaempresarial, receitatotal, precomedioparticipante;

int nestudante, nprofissional, nempresarial, totalparticipantes;

float precoestudante = 50;
float precoprofissional = 120.00;
float precoempresarial = 250.00;

int main(){

    printf("digite o numero de estudantes participantes:\n");
    scanf("%i", &nestudante);

    printf("\ndigite o numero de profissionais participantes:\n");
    scanf("%i", &nprofissional);

    printf("\ndigite o numero de empresarios participantes:\n");
    scanf("%i", &nempresarial);

    totalparticipantes = nestudante + nprofissional + nempresarial;

    receitaestudantes = nestudante * iestudante;
    receitaprofissionais = nprofissional * iprofissional;
    receitaempresarial = nempresarial * iempresarial;

    receitatotal = receitaestudantes
                 + receitaprofissionais
                 + receitaempresarial;

    if(receitatotal > 20000){
        iestudante = iestudante * 0.95;
        iprofissional = iprofissional * 0.95;
        iempresarial = iempresarial * 0.95;
    }

    totalparticipantes = nestudante + nprofissional + nempresarial;

    receitaestudantes = nestudante * iestudante;
    receitaprofissionais = nprofissional * iprofissional;
    receitaempresarial = nempresarial * iempresarial;

    receitatotal = receitaestudantes + receitaprofissionais + receitaempresarial;

    precomedioparticipante = receitatotal / totalparticipantes;

    printf("\ntotal de participantes:\n%.2f", totalparticipantes);
    printf("\nreceita de estudantes:\n%.2f", receitaestudantes);
    printf("\nreceita de profissionais:\n%.2f", receitaprofissionais);
    printf("\nreceita de empresarios:\n%.2f", receitaempresarial);
    printf("\nreceita total:\n%.2f", receitatotal);
    printf("\npreco medio por participante:\n%.2f", precomedioparticipante);

        return 0;
}
