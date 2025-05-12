#include <stdio.h>
int main(){
    //Declarando as variaveis
    int num1, num2, res, operador;
    //Pedindo as informações aos usuarios e guardando as informaões nas variaveis
    printf("Digite 2 números:\n");
    scanf("%d %d", &num1, &num2);
    printf("Digite o operador:\n1-Adição\n2-Subtração\n3-Multiplicação\n4-Divisão\n");
    scanf("%d", &operador);
    //Fazendo comparacoes
    switch(operador){
        case 1:
        res = num1 + num2;
        break;
        case 2:
        res = num1 - num2;
        break;
        case 3:
        res = num1 * num2;
        break;
        case 4:
        res = num1 - num2;
        break;
        default:
        printf("Opção invalida");
        return 1;
    }
    printf("O resultado é %d", res);
    return 0;
}