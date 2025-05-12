#include <stdio.h>
int main(){
    //Declarando as variaveis
    //O valor inicial da soma é 0, pois nn temos nenhum valor ainda
    int i,soma = 0;
    //Fazendo o laço com for
    for(i=0;i<=200;i+=2){
        // soma é a soma + o i, então temos
        soma += i;
    }
    printf("O resultado é %d", soma);
    return 0;
}