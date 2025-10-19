#include <stdio.h>
#include <string.h>

// Definindo quantos territórios teremos
#define NUM_TERRITORIOS 5

// Cada território tem nome, cor do exército e número de tropas
struct Territorio {
    char nome[50];
    char corExercito[20];
    int tropas;
};

int main() {
    // Criando os 5 territórios
    struct Territorio mapa[NUM_TERRITORIOS];

    // Território 1 - América
    strcpy(mapa[0].nome, "América");
    strcpy(mapa[0].corExercito, "Azul");
    mapa[0].tropas = 3;

    // Território 2 - Europa
    strcpy(mapa[1].nome, "Europa");
    strcpy(mapa[1].corExercito, "Verde");
    mapa[1].tropas = 3;

    // Território 3 - Nome não foi dado, vamos chamar de "Território 3"
    strcpy(mapa[2].nome, "Território 3");
    strcpy(mapa[2].corExercito, "Vermelho");
    mapa[2].tropas = 5;

    // Território 4 - África
    strcpy(mapa[3].nome, "África");
    strcpy(mapa[3].corExercito, "Amarelo");
    mapa[3].tropas = 4;

    // Território 5 - Oceania
    strcpy(mapa[4].nome, "Oceania");
    strcpy(mapa[4].corExercito, "Branco");
    mapa[4].tropas = 2;

    // Mostrando os territórios na tela
    printf("=== Mapa de Territórios ===\n\n");

    for (int i = 0; i < NUM_TERRITORIOS; i++) {
        printf("Território %d:\n", i + 1);
        printf("Nome: %s\n", mapa[i].nome);
        printf("Cor do exército: %s\n", mapa[i].corExercito);
        printf("Número de tropas: %d\n", mapa[i].tropas);
        printf("-------------------------\n");
    }

    return 0;
}
