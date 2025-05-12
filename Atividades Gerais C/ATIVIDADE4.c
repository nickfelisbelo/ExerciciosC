#include <stdio.h>
int main(){
    //Declarando as variaveis
    char nome[30];
    int idade;
    //Pedindo as informações aos usuarios e guardando as informaões nas variaveis
    printf("Digite seu  nome:\n");
    scanf(" %[^\n]", nome);
    printf("Digite sua idade:\n");
    scanf("%d", &idade);
    //Fazendo comparacoes
    if(idade <16){
        printf("%s você não pode voltar\n",nome);
    } else if(idade < 18 && idade >= 70){
        printf("%s seu voto é facutativo\n", nome);
    } else{
        printf("%s seu voto é obrigatório\n", nome);
    }
    return 0;
}