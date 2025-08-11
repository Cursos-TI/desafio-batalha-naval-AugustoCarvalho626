#include <stdio.h>

// Jogo de Batalha Naval
// Tema 2 – Navios nas Diagonais
// Teste: Augusto Bento Carvalho



int main(){

// Declarando a matriz.
    int tabela[10][10];

// Preenchendo o tabuleiro com "0". Obs: 0 = Água.

for (int i = 0; i < 10; i++) {      // Loop para as linhas (de 0 a 9).
    for (int j = 0; j < 10; j++) {      // Loop para as colunas (de 0 a 9).
        tabela[i][j] = 0; 
    } 
} 


// Posicionando o primeiro navio na horizontal.

for (int i = 0; i < 3; i++) {       // Loop para posicionar um navio de tamanho 3. 
   
    tabela[2][3 + i] = 3;           // A linha é sempre 2. A coluna começa em 3 e aumenta a cada passo.  
} 

     
// Posicionando o segundo navio na vertical. 

for (int i = 0; i < 3; i++) {       // Loop para posicionar um navio de tamanho 3.
    
    tabela[5 + i][7] = 3;           // A coluna é sempre 7. A linha começa em 5 e aumenta a cada passo. 
} 


// Posicionando o terceiro navio na diagonal. 

for (int i = 0, j = 0; i < 3 && j < 3; i++, j++) {       // Loop para posicionar um navio de tamanho 3.
   

    tabela[5 + i][0 + j] = 3;           // A coluna e a linha aumentam a cada passo. 
} 


// Posicionando o quarto navio na diagonal. 

for (int i = 0, j = 0; i < 3 && j < 3; i++, j++) {       // Loop para posicionar um navio de tamanho 3.
   

    tabela[4 + i][6 - j] = 3;           // A linha aumentam e a coluna diminui a cada passo. 
} 


// Exibir o tabuleiro completo.

printf("  A B C D E F G H I J\n");          // Imprime as letras das colunas. 
 

// Loop para imprimir as linhas e o conteúdo.

for (int i = 0; i < 10; i++) { 
    printf("%d ", i + 1);               // Imprime o número da linha. 
 
    for (int j = 0; j < 10; j++) { 
        printf("%d ", tabela[i][j]);        // Imprime o valor da célula com espaço.
    } 
    printf("\n");       // Pula para a próxima linha no final de cada linha. 
} 


     

    return 0;
}