/*19. Buscar aluno por nome
 Cadastre 3 alunos (struct). Peça um nome e mostre os dados se encontrar*/
#include <stdio.h>
//Usado para comparar texto, no caso o aluno que ele procura
#include <string.h>
//Fazendo o struct
typedef struct{
    char nome[50];
} Aluno;

int main(){
    //Declararando as variaveis
    int i;
    char procura[50];
    Aluno aluno[3];
    // lendo as variaveis
    for(i=0;i<3;i++){
    printf("Digite seu nome:\n");
    scanf(" %[^\n]", aluno[i].nome);
    }
    printf("Digite o nome do aluno que procura:\n");
    scanf(" %[^\n]", procura);
    for(i=0;i<3;i++){
        //strstr é usado para comparar o texto junto com a biblioteca #include<string.h>
        //Não deu certo a comparação ai eu pesquisei se para comparar texto e numero era da mesma forma(no caso ==), ai vi essa biblioteca
        if(strstr(aluno[i].nome, procura)){
         printf("\nAluno %d:\nNome: %s", i+1, aluno[i].nome);   
        }
    }
    return 0;
}