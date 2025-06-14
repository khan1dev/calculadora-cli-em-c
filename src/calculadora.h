#ifndef CALCULADORA_H
#define CALCULADORA_H

struct Calculadora {
    int numero1;
    int numero2;
    char operacao[12];
};

void construtor(struct Calculadora *calculadora, char *operacao, int numero1, int numero2);
void calcular(struct Calculadora *calculadora);

#endif
