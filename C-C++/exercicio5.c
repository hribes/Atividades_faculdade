#include <stdio.h>

#define MAX_CONTATOS 100

// Estrutura para armazenar os dados de um contato
struct Contato {
    char nome[50];
    char endereco[100];
    char telefone[15];
    char email[50];
};

int main() {
    struct Contato agenda[MAX_CONTATOS];
    int i, opcao;
    int count = 0;

    // Menu para cadastrar contatos
    while (count < MAX_CONTATOS) {
        printf("\nCadastrar novo contato (1 - Sim, 0 - Não)? ");
        scanf("%d", &opcao);

        if (opcao == 0) {
            break;
        }

        printf("Digite o nome: ");
        scanf(" %[^\n]", agenda[count].nome);
        printf("Digite o endereco: ");
        scanf(" %[^\n]", agenda[count].endereco);
        printf("Digite o telefone: ");
        scanf(" %s", agenda[count].telefone);
        printf("Digite o email: ");
        scanf(" %s", agenda[count].email);

        count++;

        if (count == MAX_CONTATOS) {
            printf("Agenda cheia! Não é possível adicionar mais contatos.\n");
        }
    }

    // Exibir todos os contatos cadastrados
    printf("\nContatos cadastrados:\n");
    for (i = 0; i < count; i++) {
        printf("\nContato %d:\n", i + 1);
        printf("Nome: %s\n", agenda[i].nome);
        printf("Endereco: %s\n", agenda[i].endereco);
        printf("Telefone: %s\n", agenda[i].telefone);
        printf("Email: %s\n", agenda[i].email);
    }

    return 0;
}
