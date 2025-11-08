#include <stdio.h>
#include <string.h>

// Definição da struct Territorio
// Agrupa dados relacionados a um território: nome, cor do exército e número de tropas
typedef struct {
    char nome[30];
    char cor[10];
    int tropas;
} Territorio;

int main() {
    // Declaração de vetor para armazenar 5 territórios
    Territorio territorios[5];

    printf("=== Cadastro de Territórios ===\n");

    // Laço para entrada dos dados de cada território
    for (int i = 0; i < 5; i++) {
        printf("\nTerritório %d:\n", i + 1);

        // Entrada do nome do território
        printf("Digite o nome do território: ");
        scanf(" %29[^\n]", territorios[i].nome); // Lê até 29 caracteres ou até nova linha

        // Entrada da cor do exército
        printf("Digite a cor do exército: ");
        scanf(" %9s", territorios[i].cor); // Lê até 9 caracteres

        // Entrada do número de tropas
        printf("Digite o número de tropas: ");
        scanf("%d", &territorios[i].tropas);
    }

    // Exibição dos dados cadastrados
    printf("\n=== Territórios Registrados ===\n");
    for (int i = 0; i < 5; i++) {
        printf("\nTerritório %d:\n", i + 1);
        printf("Nome: %s\n", territorios[i].nome);
        printf("Cor do exército: %s\n", territorios[i].cor);
        printf("Número de tropas: %d\n", territorios[i].tropas);
    }

    return 0;
}
