#include <stdio.h>

typedef struct{
    char nome[30];
    float preco;
    int quant;
} Produto;

int main(){
    //Declararando a variavel i e total
    int i;
    float total = 0;
    Produto produto[5];
    //Fazendo o laco de repeticao com for pra ler as variaveis 
    for(i=0;i<5;i++){
    printf("Digite o nome do produto:\n");
    scanf(" %[^\n]", produto[i].nome);
    printf("Digite o preco do produto:\n");
    scanf("%f", &produto[i].preco);
    printf("Digite a quantidade do produto:\n");
    scanf("%d", &produto[i].quant);
    }
    printf("\nTotal gasto por produto:\n");
    //Fazendo laco com for para imprimir o resultado 
    for(i=0;i<5;i++){
        total += (produto[i].quant * produto[i].preco);
        printf("%s: %.2f", produto[i].nome, total);
    }
    return 0;
}