#include <stdio.h>
#include <string.h>

// Definição da struct Territorio
// Agrupa dados relacionados
typedef struct {
    char nome[30];
    char cor[10];
    int tropas;
} Territorio;

int main() {
    // Declaração vetor para armazenar 5 territórios
    Territorio territorios[5];

    printf("=== Cadastro de Territórios ===\n");

    // entrada dos dados de cada território
    for (int i = 0; i < 5; i++) {
        printf("\nTerritório %d:\n", i + 1);

        // Entrada do nome do território
        printf("Digite o nome do território: ");
        scanf(" %30[^\n]", territorios[i].nome); // Lê até 30 caracteres ou até nova linha

        // Entrada da cor do exército
        printf("Digite a cor do exército: ");
        scanf(" %10s", territorios[i].cor); // Lê até 10 caracteres

        // Entrada do número de tropas
        printf("Digite o número de tropas: ");
        scanf("%d", &territorios[i].tropas);
    }

   

    return 0;
}
