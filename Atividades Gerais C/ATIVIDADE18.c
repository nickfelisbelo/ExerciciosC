/*18. Boletim de aluno
 Struct com nome e 3 notas. Calcule a média e informe se foi aprovado*/
#include <stdio.h>
//Fazendo o struct
typedef struct{
    char nome[30];
    float nota[3];
} Aluno;

int main(){
    //Declararando as variaveis
    int i;
    float media = 0.0, soma = 0.0;
    Aluno aluno;
    // lendo as variaveis
    printf("Digite seu nome:\n");
    scanf(" %[^\n]", aluno.nome);
    printf("Digite suas notas:\n");
    //lendo as 3 notas com for e scanf
    for(i=0;i<3;i++){
    scanf("%f", &aluno.nota[i]);
    soma += aluno.nota[i];
    }
    media = soma / 3;
    //imprimindo a media ao usuario
    printf("Sua media é: %.2f\n", media);
    //Vendo se o aluno foi aprovado ou nao
    if(media >= 7){
        printf("Você foi aprovado\n");
    } else{
    printf("Você foi reprovado\n");
    } 
    return 0;
}