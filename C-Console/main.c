#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <time.h>

void jogo_imprimirTabuleiro(char tabuleiro[]);
char jogo_alternarJogador(char jogador);
bool jogo_verificarVencedor(int pontuacao[], int rodadas);
int jogo_escolherPosicaoAleatoria(int min, int max, char tabuleiro[], int rodadas);
void exibirMenu();

int main() {
    #define RED     "\033[1;31m"
    #define RESET   "\033[0m"
    #define AZUL    "\033[1;34m"
    
    bool jogoAtivo = true;
    int posicaoEscolhida = 11, vitoriasX = 0, vitoriasO = 0, modoJogo = 3;
    char continuar, jogadorAtual = 'X';
    srand(time(NULL));
    
    do {
        char tabuleiro[9] = {'1', '2', '3', '4', '5', '6', '7', '8', '9'};
        int rodadasEmpate = 0, pontuacao[9] = {0,0,0,0,0,0,0,0,0};
        
        exibirMenu();
        if (scanf("%d", &modoJogo) == 1) {
            while (getchar() != '\n');  
            
        } else {
            while (getchar() != '\n');  
            printf("❌ Opção inválida!  Vai ser o Modo padrão : 2\n");
            modoJogo = 2;  
        }

        do {
            jogo_imprimirTabuleiro(tabuleiro);
            printf("\n\n Jogador [%c], escolha uma posição: ", jogadorAtual);
            
            if (scanf("%d", &posicaoEscolhida) == 1) {
                while (getchar() != '\n');  
            
            } else {
                while (getchar() != '\n');  
                printf("❌ Opção inválida!  Vai ser o Aleatoria ");
                posicaoEscolhida = jogo_escolherPosicaoAleatoria(1, 9, tabuleiro, rodadasEmpate); ;  
            }
            
            
            
            //system("clear");

            if(posicaoEscolhida > 0 && posicaoEscolhida < 10 && 
               tabuleiro[posicaoEscolhida - 1] != 'X' && 
               tabuleiro[posicaoEscolhida - 1] != 'O') {
                
                tabuleiro[posicaoEscolhida - 1] = jogadorAtual;
                pontuacao[posicaoEscolhida - 1] = (jogadorAtual == 'X') ? 1 : 100;
                rodadasEmpate++;
                
                jogoAtivo = jogo_verificarVencedor(pontuacao, rodadasEmpate);
                
                if(modoJogo == 1 && jogoAtivo) {
                    jogadorAtual = jogo_alternarJogador(jogadorAtual);
                    posicaoEscolhida = jogo_escolherPosicaoAleatoria(1, 9, tabuleiro, rodadasEmpate);
                    printf(AZUL " \n 🤖 Máquina jogou na posição %d\n" RESET, posicaoEscolhida);
                    
                    if(posicaoEscolhida != 0) {
                        tabuleiro[posicaoEscolhida - 1] = jogadorAtual;
                        pontuacao[posicaoEscolhida - 1] = (jogadorAtual == 'X') ? 1 : 100;
                        jogoAtivo = jogo_verificarVencedor(pontuacao, rodadasEmpate);
                        
                    }
                }
            } else {
                printf(RED "\n\n Posição inválida! Tente novamente [%c].\n" RESET, jogadorAtual);
                jogadorAtual = jogo_alternarJogador(jogadorAtual);
            }

            if(!jogoAtivo) {
                if(jogadorAtual == 'X') vitoriasX++;
                else vitoriasO++;
                
                printf("\n\n 🎉 Parabéns! O jogador [%c] venceu!", jogadorAtual);
                printf("\n\n       |X| = %i         |O| = %i \n", vitoriasX, vitoriasO);
                jogo_imprimirTabuleiro(tabuleiro);
            } 
            else if(rodadasEmpate == 9) {
                printf("\n\n 🤝 Empate! Vamos tentar novamente?\n");
                jogo_imprimirTabuleiro(tabuleiro);
                jogoAtivo = false;
            }

            jogadorAtual = jogo_alternarJogador(jogadorAtual);

        } while(jogoAtivo);

        printf("\n\n 🔄  Continuar jogando? (S/N): ");
        scanf(" %c", &continuar);
        
    } while(continuar == 'S' || continuar == 's');

    return 0;
}

void jogo_imprimirTabuleiro(char tabuleiro[]) {
    printf("\n  %c | %c | %c \n", tabuleiro[0], tabuleiro[1], tabuleiro[2]);
    printf(" ---|---|---\n");
    printf("  %c | %c | %c \n", tabuleiro[3], tabuleiro[4], tabuleiro[5]);
    printf(" ---|---|---\n");
    printf("  %c | %c | %c \n", tabuleiro[6], tabuleiro[7], tabuleiro[8]);
}

char jogo_alternarJogador(char jogador) {
    return (jogador == 'X') ? 'O' : 'X';
}

bool jogo_verificarVencedor(int pontuacao[], int rodadas) {
    int somasLinhas[8], idx = 0;
    
    // Verificar linhas horizontais
    for(int i = 0; i < 7; i += 3)
        somasLinhas[idx++] = pontuacao[0+i] + pontuacao[1+i] + pontuacao[2+i];
    
    // Verificar linhas verticais
    for(int i = 0; i < 3; i++)
        somasLinhas[idx++] = pontuacao[0+i] + pontuacao[3+i] + pontuacao[6+i];
    
    // Verificar diagonais
    for(int i = 0; i < 7; i += 6)
        somasLinhas[idx++] = pontuacao[0+i] + pontuacao[4] + pontuacao[8-i];
    
    // Verificar se alguém venceu
    for(int i = 0; i < 8; i++) {
        if(somasLinhas[i] == 3 || somasLinhas[i] == 300)
            return false;
    }
    return true;
}

int jogo_escolherPosicaoAleatoria(int min, int max, char tabuleiro[], int rodadas) {
    if(rodadas == 9) return 0;
    
    int posicao;
    do {
        posicao = rand() % (max - min + 1) + min;
    } while(tabuleiro[posicao - 1] == 'X' || tabuleiro[posicao - 1] == 'O');
    
    return posicao;
}

void exibirMenu() {
    printf("\n");
    printf("==================================\n");
    printf("     🎮  Bem-vindo ao Jogo da Velha!   \n");
    printf("==================================\n");
    printf("Escolha um modo de jogo:\n");
    printf("[1] - 🤖  Jogador vs Máquina (IA aleatória)\n");
    printf("[2] - 🧑 🤝 🧑 Jogador vs Jogador (1v1)\n");
    printf("Digite sua escolha: ");
}