#include <stdio.h>

void separador(const char *titulo) {
     printf("\n=== %s ===\n", titulo);
}

//Torre
void moverTorre(void) {
    separador("Torre (for) - Direita x5");
     for (int i = 0; i < 5; i++) {
        puts("Direita");
          }
}

//Bispo
void moverBispo(void) {
    separador("Bispo (while) - Cima Direita x5");
    int passos = 0;
    while (passos < 5) {
        puts("Cima Direita");
        passos++;
    }
}

//Rainha
void moverRainha(void) {
     separador("Rainha (do-while) - Esquerda x8");
      int n = 0;
       do {
        puts("Esquerda");
        n++;
    } while (n < 8);
}

int main(void) {
    separador("Iniciando Nível Aventureiro - Movimentos das Peças");

    moverTorre();
    moverBispo();
    moverRainha();

    separador("Fim do Nível Aventureiro!");
    return 0;
}