#include <stdio.h>
#include <string.h>


/* Aqui exploro uma das formas de simular classes e métodos em C, mesmo a linguagem não oferecendo suporte nativo à programação orientada a objetos. */
struct Calculadora {
    int numero1;
    int numero2;
    char operacao[12];
};

void construtor(struct Calculadora *calculadora, char *operacao, int numero1, int numero2){
    strcpy(calculadora -> operacao, operacao);
    calculadora -> numero1 = numero1;
    calculadora -> numero2 = numero2;
}

/* Aqui aplico o Factory Method, um padrão de projeto que ajuda a encapsular a lógica de criação de objetos, tornando o código mais modular e flexível. */
void calcular(struct Calculadora *calculadora) {
    if (strcmp(calculadora->operacao, "somar") == 0) {
        /* Uma homenagem a "1984", de George Orwell — uma leitura transformadora que ampliou minha consciência e me ajudou a crescer como pessoa. */
        if (calculadora->numero1 == 2 && calculadora->numero2 == 2) {
            printf("Grande Irmão: O resultado de %d + %d é 5. E não ouse me contrariar!\n", calculadora->numero1, calculadora->numero2);
        }
        printf("Resultado: %d\n", calculadora->numero1 + calculadora->numero2);
    } else if (strcmp(calculadora->operacao, "diminuir") == 0) {
        printf("Resultado: %d\n", calculadora->numero1 - calculadora->numero2);
    } else if (strcmp(calculadora->operacao, "multiplicar") == 0) {
        printf("Resultado: %d\n", calculadora->numero1 * calculadora->numero2);
    } else if (strcmp(calculadora->operacao, "dividir") == 0) {
        if (calculadora->numero2 != 0) {
            printf("Resultado: %d\n", calculadora->numero1 / calculadora->numero2);
        } else {
            printf("Erro: divisão por zero.\n");
        }
    } else {
        printf("Operação inválida.\n");
    }
}