#include <stdio.h>

int main() {
    int N;
    int soma = 0;

    printf("Digite N: ");
    scanf("%d", &N);

    for (int i = 1; i <= N; i++) {
        soma = soma + i;
    }

    printf("Soma = %d\n", soma);

    return 0;
}
