//Declararando as bibliotecas 
#include <stdio.h>
int main(){
    //Declarando as variaveis 
    int i, num, res = 1;
    //Pedindo as informações e as guardando nas variáveis 
    printf("Digite um numero:\n");
    scanf("%d" , &num);
    //Usando for para fazer loops para multiplicar e saber o fatorial
    for(i=1;i<=num;i++){
        //Calculando o fatorial(100*99*98*97...*1)
        res *= i;
    }
    //Imprimindo o resultado para o usuário
    printf("O resultado é: %d", res);
    return 0;
}