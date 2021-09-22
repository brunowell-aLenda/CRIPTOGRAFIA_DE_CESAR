#include <stdio.h>

#define TAMANHO_TEXTO 4
#define QTD_LETRAS 26

int main() {

    int i = 0;
    char texto[TAMANHO_TEXTO];

    printf("Digite um texto para criptografar: "); // COLOCAR ABXY É PARA SAIR DEAB
    for (i = 0; i < TAMANHO_TEXTO; i++) {//LÊ O TEXTO PARA CRIPTOGRAFAR
        scanf("%c", &texto[i]);
    }

    for (i = 0; i < TAMANHO_TEXTO; i++) { //
        texto[i] = 'A' + (texto[i] - 'A' + 3) % QTD_LETRAS;
    }
    
    printf("Texto criptografado: ");
    for (i = 0; i < TAMANHO_TEXTO; i++) {//IMPRESSAO DO TEXTO CRIPTOGRFADO
        printf("%c", texto[i]);
    }

    return 0;
}