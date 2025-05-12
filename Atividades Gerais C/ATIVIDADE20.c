/*20. Média da turma
 Cadastre 5 alunos (nome e média final). Mostre a média geral da turma.*/
#include <stdio.h>
//Fazendo o struct
typedef struct{
    char nome[50];
    float media;
} Aluno;

int main(){
    //Declararando as variaveis
    int i;
    float soma = 0.0, mTurma = 0.0;
    Aluno aluno[5];
    // guardando as variaveis
    for(i=0; i<5; i++){
    printf("Digite seu nome:\n");
    scanf(" %[^\n]", aluno[i].nome);
    printf("Digite sua media:\n");
    scanf("%f", &aluno[i].media);
    //vendo a soma das medias
    soma += aluno[i].media;
    }
    //Calculando a media geral da turma
    mTurma = soma / 5;
    //Imprimindo o resultado
    printf("A média geral da turma é:  %.2f", mTurma);
    //Encerrando o codigo
    return 0;
}