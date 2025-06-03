#include<stdio.h>
#include<stdlib.h>

#include "alunos.h"
#include "notas.h"

void cadastrarNota(Nota *nota, int *conta){
    system ("clear");
    printf("---- Cadastrar nota ----\n");
    printf("Informe a matricula do aluno: ");
    scanf("%d", &nota->matricula);
    printf("Informe a nota: ");
    scanf("%f", &nota->nota);
    *conta = *conta +1; 
}