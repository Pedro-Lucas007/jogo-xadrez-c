#include <stdio.h>

void separador(const char *titulo) {
    printf("\n=== %s ===\n", titulo);
}

void mostrarTabuleiro(void) {
    separador("Tabuleiro 8x8");
    for (int linha = 1; linha <= 8; linha++) {
        for (int coluna = 1; coluna <= 8; coluna++) {
            printf("[%d,%d] ", linha, coluna);
        }

        printf("\n");
    }
}

void moverTorre(void) {
    separador("Torre - Movendo na horizontal");
    for (int i = 1; i <= 8; i++) {
        printf("Torre se move para a direita: coluna %d\n", i);
    }
}

void moverBispo(void) {
    separador("Bispo - Movendo em diagonal");
    int linha = 1, coluna = 1;
    while (linha <= 8 && coluna <= 8) {
        printf("Bispo se move para: [%d,%d]\n", linha, coluna);
        linha++;
        coluna++;
    }
}

void moverRainha(void) {
    separador("Rainha - Movimentos combinados");
    int movimentos = 0;
    do {
        printf("Rainha se move: Passo %d (direita/diagonal)\n", movimentos + 1);
        movimentos++;
    } while (movimentos < 8);
}

int main(void) {
    separador("Iniciando Nível Mestre - Movimentos completos");
    mostrarTabuleiro();

    int escolha;
    printf("\nEscolha uma peça para mover:\n");
    printf("1 - Torre\n2 - Bispo\n3 - Rainha\nEscolha: ");
    scanf("%d", &escolha);

    switch (escolha) {
        case 1:
            moverTorre();
            break;
        case 2:
            moverBispo();
            break;
        case 3:
            moverRainha();
            break;
        default:
            printf("Escolha inválida! Encerrando...\n");
            return 0;
    }

    separador("Fim do Nível Mestre!");
    return 0;
}