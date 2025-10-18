#include <stdio.h>

void separador(const char *titulo) {
    printf("\n=== %s ===\n", titulo);
}

int main(void) {
    separador("Torre (for) Direita x5");
    for (int i = 0; i < 5; i++) {
        puts("Direita");
    }

    separador ("Bispo (while) - Cima Direita x5");
    int passos = 0;
    while (passos < 5){
    puts("Cima Direita");
    passos = passos + 1;
    }

    separador("Rainha (do-while) - Esquerda x8");
    int n = 0;
    do {
        puts("Esquerda");
        n++;
    } while (n < 8);
    
    return 0;

}