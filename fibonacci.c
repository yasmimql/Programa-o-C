#include <stdio.h>

int main() {
    int quantidade;
    int a = 0;
    int b = 1;
    int proximo;

    printf("Digite a quantidade de numeros: ");
    scanf("%d", &quantidade);

    for (int i = 0; i < quantidade; i++) {
        printf("%d ", a);

        proximo = a + b;
        a = b;
        b = proximo;
    }

    printf("\n");

    return 0;
}
