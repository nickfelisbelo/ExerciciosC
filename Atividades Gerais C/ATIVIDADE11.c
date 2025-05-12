//Declararando as bibliotecas 
#include <stdio.h>
int main(){
    //Declarando as variaveis 
    int i;
    float num[10], soma = 0, media = 0;
    //Pedindo as informações e as guardando nas variaveis 
    printf("Digite 10 numeros:\n");
    //Usando for para fazer loops para guardar as variaveis 
    for(i=0;i<10;i++){
       //Guardando as variaveis 
        scanf("%f", &num[i]);
        //Calculando a soma, para depois fazer a media
        soma += num[i];
    }
    media = soma / 10;
    //Imprimindo o resultado para o usuário 
    printf("A media é: %.2f", media);
    return 0;
}