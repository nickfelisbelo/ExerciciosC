#include <stdio.h>
int main(){
    //Declarando as variaveis
    int num1, num2;
    //Pedindo as informações aos usuarios
    printf("Digite 2 numeros:\n");
    //Guardando as informaões nas variaveis
    scanf("%d %d", &num1, &num2);
    //Fazendo comparacoes
    if(num1>num2){
        printf("%d é maior\n",num1);
    } else{
        printf("%d é maior\n",num2);
    }
    return 0;
}