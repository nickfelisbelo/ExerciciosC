#include <stdio.h>
//Fazendo o struct
typedef struct{
    char nome[30];
    int idade;
} Pessoa;

int main(){
    //Declararando a variavel i
    int i;
    Pessoa pessoa[2];
    //Fazendo o laco de repeticao com for pra ler as variaveis 
    for(i=0;i<2;i++){
    printf("Digite seu nome:\n");
    scanf(" %[^\n]", pessoa[i].nome);
    printf("Digite sua idade:\n");
    scanf("%d", &pessoa[i].idade);
    }
    //Vendo se ambos possuem a mesma idade
    if(pessoa[0].idade == pessoa[1].idade){
        printf("Ambos possuem a mesma idade\n");
    } else{
    printf("\nPessoa mais velha:\n");
    //Fazendo comparacoes com if e esse
    if(pessoa[0].idade > pessoa[1].idade){
        printf("%s\n", pessoa[0].nome);
    } else if(pessoa[1].idade > pessoa[0].idade){
        printf("%s\n", pessoa[1].nome);
    }
    }
    return 0;
}