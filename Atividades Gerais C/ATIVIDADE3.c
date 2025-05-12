#include <stdio.h>
int main(){
    //Declarando as variaveis
    int num1, num2, media;
    //Pedindo as informações aos usuarios
    printf("Digite 2 notas:\n");
    //Guardando as informaões nas variaveis
    scanf("%d %d", &num1, &num2);
    //Fazendo o calculo da média
    media = (num1 + num2) / 2;
    //Fazendo comparacoes
    if(media >= 7){
        printf("Você foi aprovado\n");
    } else{
        printf("Você foi reprovado\n");
    }
    return 0;
}