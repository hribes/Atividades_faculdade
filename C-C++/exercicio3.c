#include <stdio.h>
#include <string.h>

// Estrutura para armazenar os dados de um aluno
struct Aluno {
    char nome[50];
    char RA[20];
    char cidade[50];
    float media;
};

void main() {
    struct Aluno alunos[3];
    int i;
    float maiorMedia = 0.0;
    char RA_MaiorMedia[20];

    // Leitura dos dados dos alunos
    for (i = 0; i < 3; i++) {
        printf("Digite o nome do aluno %d: ", i + 1);
        scanf(" %[^\n]", alunos[i].nome);
        printf("Digite o RA do aluno %d: ", i + 1);
        scanf(" %s", alunos[i].RA);
        printf("Digite a cidade do aluno %d: ", i + 1);
        scanf(" %s", alunos[i].cidade);
        printf("Digite a média do aluno %d: ", i + 1);
        scanf("%f", &alunos[i].media);

        // Verificação da maior média
        if (alunos[i].media > maiorMedia) {
            maiorMedia = alunos[i].media;
            strcpy(RA_MaiorMedia, alunos[i].RA);
        }
    }

    // Exibição dos nomes dos alunos que moram em Marília
    printf("\nAlunos que moram em Marília:\n");
    for (i = 0; i < 3; i++) {
        if (strcmp(alunos[i].cidade, "Marilia") == 0) {
            printf("%s\n", alunos[i].nome);
        }
    }

    // Exibição do RA do aluno com a maior média
    printf("\nRA do aluno com maior média: %s\n", RA_MaiorMedia);

}
