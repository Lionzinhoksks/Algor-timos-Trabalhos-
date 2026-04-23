#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX 100

char lista[MAX][50];
int total = 0;

// Carregar dados do arquivo
void carregar() {
    FILE *f = fopen("lista.txt", "r");

    if (f == NULL) return;

    while (fgets(lista[total], 50, f)) {
        lista[total][strcspn(lista[total], "\n")] = 0;
        total++;
    }

    fclose(f);
}

// Salvar dados no arquivo
void salvar() {
    FILE *f = fopen("lista.txt", "w");

    for (int i = 0; i < total; i++) {
        fprintf(f, "%s\n", lista[i]);
    }

    fclose(f);
}

// Adicionar item
void adicionar() {
    if (total >= MAX) {
        printf("Lista cheia!\n");
        return;
    }

    printf("Digite o Nome, Matrícula e Série/Turma do Aluno: ");
    fgets(lista[total], 50, stdin);

    lista[total][strcspn(lista[total], "\n")] = 0;
    total++;

    salvar();
}

// Listar itens
void listar() {
    printf("\n--- Lista ---\n");
    for (int i = 0; i < total; i++) {
        printf("%d - %s\n", i, lista[i]);
    }
}

// Remover item
void remover() {
    int index;

    printf("Digite o Nome do Aluno para remover: ");
    scanf("%d", &index);
    getchar();

    if (index < 0 || index >= total) {
        printf("Nome inválido!\n");
        return;
    }

    for (int i = index; i < total - 1; i++) {
        strcpy(lista[i], lista[i + 1]);
    }

    total--;

    salvar();
}

// Editar item
void editar() {
    int index;

    printf("Digite o Nome para editar: ");
    scanf("%d", &index);
    getchar();

    if (index < 0 || index >= total) {
        printf("Nome inválido!\n");
        return;
    }

    printf("Edição finalizada!!!");

    lista[index][strcspn(lista[index], "\n")] = 0;

    salvar();
}

// Menu principal
int main() {
    int opcao;

    carregar();

    do {
        printf("\n1 - Adicionar\n2 - Listar\n3 - Remover\n4 - Editar\n0 - Sair\n");
        printf("Escolha: ");
        scanf("%d", &opcao);
        getchar();

        switch (opcao) {
            case 1: adicionar(); break;
            case 2: listar(); break;
            case 3: remover(); break;
            case 4: editar(); break;
            case 0: printf("Saindo...\n"); break;
            default: printf("Opção inválida!\n");
        }

    } while (opcao != 0);

    return 0;
}
