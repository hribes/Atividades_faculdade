#include <stdio.h>
#include <string.h>

// Estrutura para armazenar os dados de um aluno
struct Aluno {
    char nome[50];
    char RA[20];
    float media;
};

int main() {
    struct Aluno alunos[10];
    int i, j;
    float maiorMedia = 0.0, menorMedia = 10.0;
    char nomesMaiorMedia[10][50];
    char RAsMenorMedia[10][20];
    int countMaiorMedia = 0, countMenorMedia = 0;

    // Leitura dos dados dos alunos
    for (i = 0; i < 10; i++) {
        printf("Digite o nome do aluno %d: ", i + 1);
        scanf(" %[^\n]", alunos[i].nome);
        printf("Digite o RA do aluno %d: ", i + 1);
        scanf(" %s", alunos[i].RA);
        printf("Digite a média do aluno %d: ", i + 1);
        scanf("%f", &alunos[i].media);

        // Verificação da maior média
        if (alunos[i].media > maiorMedia) {
            maiorMedia = alunos[i].media;
            countMaiorMedia = 0;
            // Copia o nome para a lista de maiores médias
            for (j = 0; alunos[i].nome[j] != '\0'; j++) {
                nomesMaiorMedia[countMaiorMedia][j] = alunos[i].nome[j];
            }
            nomesMaiorMedia[countMaiorMedia][j] = '\0'; // Termina a string
            countMaiorMedia++;
        } else if (alunos[i].media == maiorMedia) {
            for (j = 0; alunos[i].nome[j] != '\0'; j++) {
                nomesMaiorMedia[countMaiorMedia][j] = alunos[i].nome[j];
            }
            nomesMaiorMedia[countMaiorMedia][j] = '\0'; // Termina a string
            countMaiorMedia++;
        }

        // Verificação da menor média
        if (alunos[i].media < menorMedia) {
            menorMedia = alunos[i].media;
            countMenorMedia = 0;
            // Copia o RA para a lista de menores médias
            for (j = 0; alunos[i].RA[j] != '\0'; j++) {
                RAsMenorMedia[countMenorMedia][j] = alunos[i].RA[j];
            }
            RAsMenorMedia[countMenorMedia][j] = '\0'; // Termina a string
            countMenorMedia++;
        } else if (alunos[i].media == menorMedia) {
            for (j = 0; alunos[i].RA[j] != '\0'; j++) {
                RAsMenorMedia[countMenorMedia][j] = alunos[i].RA[j];
            }
            RAsMenorMedia[countMenorMedia][j] = '\0'; // Termina a string
            countMenorMedia++;
        }
    }

    // Exibição dos nomes dos alunos com a maior média
    printf("\nAlunos com a maior média (%.2f):\n", maiorMedia);
    for (i = 0; i < countMaiorMedia; i++) {
        printf("%s\n", nomesMaiorMedia[i]);
    }

    // Exibição dos RAs dos alunos com a menor média
    printf("\nRAs dos alunos com a menor média (%.2f):\n", menorMedia);
    for (i = 0; i < countMenorMedia; i++) {
        printf("%s\n", RAsMenorMedia[i]);
    }

    return 0;
}
