#include <locale.h>
#include <stdio.h>

int main() {
    setlocale(LC_ALL, "");
    int num[8];
    int i;
    int par = 0, impar = 0;

    for(i = 0; i < 8; i++) {
        printf("Digite um número: ");
        scanf("%d", &num[i]);
        if(num[i] % 2 == 0) {
            par++;
        } else {
            impar++;
        }
    }
    printf("Temos %d numeros pares e %d impares.\n", par, impar);
    return 0;
}
