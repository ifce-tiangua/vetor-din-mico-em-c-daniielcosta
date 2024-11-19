#include<stdio.h>
#include<stdlib.h>

int main() {
    int tamanho, i;
    int *vetor;

    scanf("%d", &tamanho);

    if (tamanho <= 0) {
        printf("[vazio]\n");
         return 0;
    }

    vetor = (int *)malloc(tamanho * sizeof(int));
    if (vetor == NULL) {
        printf("Erro ao alocar memória.\n");
        return 1;
    }

    for (i = 0; i < tamanho; i++) {
        scanf("%d", &vetor[i]);
    }

    printf("[");
    for (i = 0; i < tamanho; i++) {
        printf("%d", vetor[i]);
        if (i < tamanho - 1) {
            printf(",");
        }
    }
    printf("]\n");

    free(vetor);

    return 0;
}
