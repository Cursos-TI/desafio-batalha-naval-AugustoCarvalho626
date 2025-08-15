#include <stdio.h>
#include <stdlib.h>

// Jogo de Batalha Naval
// Tema 3 – Habilidades especiais e áreas de efeito
// Teste: Augusto Bento Carvalho


#define TAMANHO_TABULEIRO 10
#define AGUA 0
#define TIRO 3



int main(){

// Declarando a matriz.
    int tabela[10][10];

// Preenchendo o tabuleiro com "0". Obs: 0 = Água.

for (int i = 0; i < TAMANHO_TABULEIRO; i++) {           // Loop para as linhas (de 0 a 9).
    for (int j = 0; j < TAMANHO_TABULEIRO; j++) {       // Loop para as colunas (de 0 a 9).
        tabela[i][j] = AGUA;   
    }
} 

// Declarando a variável para a formula if do losango
int centro = 2;

for (int i = 0; i < 5; i++) {
    for (int j = 0; j < 5; j++) {
        if (abs(i - centro) + abs(j - centro) <= centro) {
            tabela[i][j] = TIRO;       // Faz parte do losango!
        } else {
            tabela[i][j] = AGUA;
        }
    }
}

// Declarando as variáveis para a formula if da cruz
int base_cruz = 4;
int base_cruz1 = 7; 

for (int i = 2; i < 7; i++) {
    for (int j = 5; j < 10; j++) {
        if (i == base_cruz  || j == base_cruz1) {
            tabela[i][j] = TIRO;    // Faz parte da cruz!
        } else {
            tabela[i][j] = AGUA;
        }
    }
}


// Declarando variáveis para a formula do if do cone
int base_cone = 7;
int base_cone1 = 3; 

for (int i = 5; i < 9; i++) {
    for (int j = 0; j < 5; j++) {
        if (j <= i - base_cone1  && j >= base_cone - i) {
            tabela[i][j] = TIRO;       // Faz parte da cruz!
        } else {
            tabela[i][j] = AGUA;
        }
    }
}


// Exibir o tabuleiro completo.

printf("  A B C D E F G H I J\n");          // Imprime as letras das colunas. 
 

// Loop para imprimir as linhas e o conteúdo.

for (int i = 0; i < TAMANHO_TABULEIRO; i++) { 
    printf("%d ", i + 1);               // Imprime o número da linha. 
 
    for (int j = 0; j < TAMANHO_TABULEIRO; j++) { 
        printf("%d ", tabela[i][j]);        // Imprime o valor da célula com espaço.
    } 
    printf("\n");       // Pula para a próxima linha no final de cada linha. 
} 


    return 0;
}