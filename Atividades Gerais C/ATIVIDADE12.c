//Declararando as bibliotecas 
#include <stdio.h>
int main(){
    //Declarando as variaveis 
    int i, num[10], maior, menor;
    //Pedindo as informações e as guardando nas variaveis 
    printf("Digite 10 numeros:\n");
    scanf("%d", &num[0]);
    //Estabelecendo o valor das variaveis
    menor = num[0];
    maior = num[0];
    //Usando for para fazer loops para guardar as variaveis
    for(i=1;i<10;i++){
       //Guardando as variaveis 
        scanf("%d", &num[i]);
        //Comparando para ver o maior e menor numero digitado
        if(num[i] > maior){
            maior = num[i];
        } if(num[i] < menor){
            menor = num[i];
        }
    }
    //Imprimindo o resultado para o usuário 
    printf("O menor numero é: %d\nO maior numero é: %d\n", menor,maior);
    return 0;
}