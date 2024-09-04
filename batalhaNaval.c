#include <stdio.h>

// Definição da estrutura Coordenadas
struct Coordenadas {
    int x;
    int y;
};

// Definição da estrutura Navios
struct TNavio {
    Coordenadas navioVertical;
    Coordenadas navioHorizontal;
};

//Eu sou programador de computador experiente. 
// Estou usando o struct pra ficar mais legível e usar o ambiente ide do dev c++
// Inicialização da constante global do tipo TNavio
const TNavio navios = {
    {2, 3},  // Coordenadas do navio vertical - ficou mais fácil ler assim :)
    {6, 5}   // Coordenadas do navio horizontal - ficou mais fácil ler assim :)
};

int main() {
    // Dimensões do tabuleiro
    const int tamanhoTabuleiro = 10;
    char tabuleiro[tamanhoTabuleiro][tamanhoTabuleiro];

    // Inicializando o tabuleiro com pontinhos pra simbolizar o espaço vazio na hora de imprimir
    for (int i = 0; i < tamanhoTabuleiro; i++) {
        for (int j = 0; j < tamanhoTabuleiro; j++) {
            tabuleiro[i][j] = '.';
        }
    }

    // Posicionando o navio vertical no tabuleiro, ajustando para começar em (1,1)
    tabuleiro[navios.navioVertical.y - 1][navios.navioVertical.x - 1] = 'V';

    // Posicionando o navio horizontal no tabuleiro, ajustando para começar em (1,1)
    tabuleiro[navios.navioHorizontal.y - 1][navios.navioHorizontal.x - 1] = 'H';

    // Exibir o tabuleiro com as coordenadas dos navios
    printf("Tabuleiro de Batalha Naval:\n");
    for (int i = 0; i < tamanhoTabuleiro; i++) {
        for (int j = 0; j < tamanhoTabuleiro; j++) {
            printf("%c ", tabuleiro[i][j]);
        }
        printf("\n");
    }

    return 0;
}
