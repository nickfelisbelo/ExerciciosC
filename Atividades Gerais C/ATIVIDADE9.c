#include <stdio.h>
//Declarando a variável pra limpar os resultados após o loop
#include <stdlib.h>
int main(){
    //Declarando as variaveis
    int opcao, res, num1, num2;
    //Fazendo o laço com while
    do{
        printf("O que deseja:\n1-Somar\n2-Subtrair\n0-Sair\n");
        scanf("%d", &opcao);
        // caso seja 0 acaba;
        if(opcao == 0){
            break;
        } else{
        //Usando switch para gerenciar de acordo com a escolha
        switch(opcao){
            case 1:
            printf("Digite 2 numeros:\n");
            scanf("%d %d", &num1, &num2);
            res = num1 + num2;
            break;
            case 2:
            printf("Digite 2 numeros:\n");
            scanf("%d %d", &num1, &num2);
            res = num1 - num2;
            break;
            default:
            printf("Opção Invalida! Tente Novamente\n");
            break;
        } //Imprimindo o resultado
        printf("O resultado é: %d\n", res);
        printf("Digite:\n1-Voltar\n0-Sair\n");
        scanf("%d", &opcao);
        }//limpando as informações da tela
        system("clear");
    } /*Enquanto a opcao for diferente de 0-Sair o laco ira continuar*/ while(opcao != 0);
    return 0;
}