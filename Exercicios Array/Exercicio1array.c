#include <locale.h>
#include <stdio.h>

int main(){
    setlocale(LC_ALL,"");
    int num[6];
    int i;
    int soma = 0;
    for(i = 0; i <=5; i++){
        printf("Digite os números    ");
        scanf("%d", &num[i]);
        soma = soma + num[i];
    }
    printf("A soma de todos os números é igual a %d", soma);
    return 0;
}