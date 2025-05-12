#include <stdio.h>
int main(){
    //Declarando as variaveis
    int i, num, res;
    //Pedindo o valor desejado
    printf("Digite 1 numero:\n");
    //Guardado a informação
    scanf("%d", &num);
   //Fazendo laço de retição com for
   for(i=1;i<=10;i++){
       res = num * i;
       printf("%d * %d = %d\n", i, num, res);
   }
    return 0;
}