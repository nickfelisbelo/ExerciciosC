//Declararando as bibliotecas 
#include <stdio.h>
int main(){
    //Declarando as variaveis 
    int i, num[5], pares = 0;
    //Pedindo as informações e as guardando nas variaveis 
    printf("Digite 5 numeros:\n");
    //Usando for para fazer loops para guardar as variaveis
    for(i=0;i<5;i++){
       //Guardando as variaveis 
        scanf("%d", &num[i]);
        }//Dei um quebra linha para ficar mais facil a visualização da ordem invertida
        printf("\n");
    //Imprimindo o resultado para o usuário
    //i = 4, pois o array começa com o valor[0] e termina no valor[n]
    for(i=4;i>=0;i--){
       //Imprimindo as variaveis/valores de forma invertida
        printf("%d\n", num[i]);
        }
    return 0;
}