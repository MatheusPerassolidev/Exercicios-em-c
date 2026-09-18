#include <stdio.h>

int main(void) {
    int velocidade, limite;

    printf("Digite a velocidade do veiculo: ");
    scanf("%d", &velocidade);

    printf("Digite a velocidade maxima permitida: ");
    scanf("%d", &limite);

    if (velocidade <= limite) {
        printf("Velocidade permitida!\n");
    } else if (velocidade <= limite * 1.20) {
        printf("Multa grave!\n");
    } else {
        printf("Multa gravissima!\n");
    }

    return 0;
}