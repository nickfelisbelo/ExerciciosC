#include <locale.h>
#include <stdio.h>

int main() {
    setlocale(LC_ALL, "");
    int num[6];
    int i;
    int soma = 0;
    float media;
    for(i = 0; i < 6; i++) {
        printf("Digite um número: ");
        scanf("%d", &num[i]);
        soma = soma + num[i];
    }
    media = soma / 6;
    printf("A média é %.2f\n", media);
    printf("Notas acima da média\n");
    for(i = 0; i < 6; i++){
    if (num[i] > media){
        printf("%d\n", num[i]);
    }
    }
    return 0;
}