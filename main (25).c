#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
int main(){
    setlocale(LC_ALL,"");
    int opcao,quant;
    float valorUni, total;
    total = 0;
    valorUni = 0;
    do{
    printf("Insira o que deseja\n1-Teclado - R$ 100,00\n2-Mouse - R$ 50,00\n3-Monitor - R$ 800,00\n4-Placa de Vídeo - R$ 2000,00\n5-Sair\n");
    scanf("%d", &opcao);
    switch(opcao){
        case 1:
        printf("Insira a quantidade de teclados:\n");
        scanf("%d", &quant);
        valorUni = quant * 100;
        break;
        case 2:
        printf("Insira a quantidade de mouses:\n");
        scanf("%d", &quant);
        valorUni = quant * 50;
        break;
        case 3:
        printf("Insira a quantidade de monitores:\n");
        scanf("%d", &quant);
        valorUni = quant * 800;
        break;
        case 4:
        printf("Insira a quantidade de placas de vídeo:\n");
        scanf("%d", &quant);
        valorUni = quant * 2000;
        break;
        case 5:
        printf("Saindo...");
        break;
        default:
        printf("Erro...\n");
    }
    if (opcao == 1 || opcao == 2 || opcao == 3 || opcao == 4){
    total = total + valorUni;
    printf("Você tem de pagar %.2f\n", total);
    printf("Digite\n1-Comprar mais itens\n5-Sair\n");
    scanf("%d", &opcao);
    system("clear");
    }} while (opcao != 5);
    return 0;
}