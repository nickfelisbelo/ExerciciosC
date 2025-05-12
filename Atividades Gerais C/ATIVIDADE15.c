//Declararando as bibliotecas 
#include <stdio.h>
//Não sei muito bem a diferença, mas falaram que o struc como typedef struct é melhor
typedef struct{
    char nome[50];
    int idade;
    float nota;
} Alunos;

int main(){
    //Declarando as variaveis 
    int i;
    Alunos aluno;
    //Pedindo as informações e as guardando nas variaveis 
    printf("Digite o nome do aluno:\n");
    scanf(" %[^\n]", aluno.nome);
    printf("Digite a idade do aluno:\n");
    scanf("%d", &aluno.idade);
    printf("Digite a nota do aluno:\n");
    scanf("%f", &aluno.nota);
    //Imprimindo o resultado para o usuário
    printf("\nAluno 1\nNome: %s\nIdade: %d\nNota: %.2f\n", aluno.nome, aluno.idade, aluno.nota);
    
    return 0;
}