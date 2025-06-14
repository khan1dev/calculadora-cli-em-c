#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include "calculadora.h"

int main() {
    int estado_while = 1;
    char linha[50];  // linha maior pra evitar overflow

    while (estado_while) {
        int numero1;
        int numero2;
        char operacao[12];
        char continuar;

        printf("Digite a operação e dois números inteiros (ex: somar 2 2): ");
        fgets(linha, sizeof(linha), stdin);
        sscanf(linha, "%s %d %d", operacao, &numero1, &numero2);

        struct Calculadora calculadora;
        for (int i = 0; operacao[i] != '\0'; i++) {
            operacao[i] = tolower(operacao[i]);
        }
        construtor(&calculadora, operacao, numero1, numero2);
        calcular(&calculadora);

        printf("Deseja sair? (Y para sair, N para continuar): ");
        fgets(linha, sizeof(linha), stdin);
        sscanf(linha, " %c", &continuar);

        if (tolower(continuar) == 'y') {
            estado_while = 0;
        }
    }

    return 0;
}
