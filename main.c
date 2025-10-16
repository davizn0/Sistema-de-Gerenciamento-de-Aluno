#include <stdio.h>
#include <string.h> //para usar strcpy

struct aluno {
    int matricula;
    char nome[50];
    char sobrenome[50];
    float nota1;
    float nota2;
    float media;
};

int main() {
    struct aluno aluno1;
    
    printf("Digite o primeiro nome do aluno: ");
    scanf("%s", &aluno1.nome);
    
    printf("Digite o sobrenome do aluno: ");
    scanf("%s", &aluno1.sobrenome);
    
    printf("Digite a matrícula do aluno: ");
    scanf("%d", &aluno1.matricula);
    
    printf("Digite a nota 1: ");
    scanf("%f", &aluno1.nota1);
    
    printf("Digite a nota 2: ");
    scanf("%f", &aluno1.nota2);

    aluno1.media = (aluno1.nota1 + aluno1.nota2) / 2;
    
    printf("\n*DADOS DO ALUNO*\n");
    printf("\nNome: %s %s\n", aluno1.nome, aluno1.sobrenome);
    printf("Matricula: %d\n", aluno1.matricula);
    printf("Nota 1: %.2f\n", aluno1.nota1);
    printf("Nota 2: %.2f\n", aluno1.nota2);
    printf("Media: %.2f\n", aluno1.media);
    
    if (aluno1.media >= 6) {
        printf("\nO aluno está aprovado!\n");
    } else {
        printf("O aluno está reprovado!\n");
    }
}

