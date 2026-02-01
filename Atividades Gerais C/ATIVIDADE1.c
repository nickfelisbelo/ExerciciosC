//declarando as bibliotecas
#include<stdio.h>
int main(){
    //Declarando as variaveis
    int num;
    //pedindo um numero ao usuario
    printf("Digite um numero:\n");
    //guardando o valor na variavel
    scanf("%d", &num);
    //Verificando se é par ou impar
    if(num % 2 == 0){
        printf("É par\n");
    } else{
        printf("É impar");
    }
    return 0;
}
