//Declararando as bibliotecas 
#include <stdio.h>
int main(){
    //Declarando as variaveis 
    int i, num[10], pares = 0;
    //Pedindo as informações e as guardando nas variaveis 
    printf("Digite 10 numeros:\n");
    //Usando for para fazer loops para guardar as variaveis
    for(i=0;i<10;i++){
       //Guardando as variaveis 
        scanf("%d", &num[i]);
        //Comparando para ver se o numero é par
        if(num[i] % 2 == 0){
            pares++;
        }
    }
    //Imprimindo o resultado para o usuário 
    printf("Há um total de %d numeros pares\n", pares);
    return 0;
}