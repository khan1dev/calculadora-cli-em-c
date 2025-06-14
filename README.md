# 🧮 Calculadora CLI em C — com Factory Method

Este é um dos meus primeiros projetos em **linguagem C**, criado em meados de **2018**, quando eu ainda estava começando minha jornada na programação. Na época, eu sequer conhecia o GitHub e, por isso, guardei o código em um drive pessoal. Agora, com mais experiência em Git e GitHub, estou trazendo esse projeto para cá com carinho e nostalgia.

## 📚 Contexto e Aprendizados

Minha primeira linguagem de programação foi **Python**, e através dela aprendi os fundamentos de:
- Lógica de programação
- Programação Orientada a Objetos (POO)
- Concorrência

Ao começar a explorar outras linguagens, mergulhei no **C**, onde aprendi sobre:
- Manipulação de entrada com `fgets()` e `sscanf()` para interações via **linha de comando (CLI)**
- Implementação de padrões de projeto como o **Factory Method**, que oferece uma forma elegante e flexível de criação de objetos, mesmo em uma linguagem como C, que não possui suporte nativo à orientação a objetos

## ✨ Sobre o Projeto

Esta é uma **calculadora simples**, executada no terminal, que demonstra:

- Como simular o uso de **classes e métodos** em C usando struct e ponteiros
- A aplicação prática do padrão de projeto **Factory Method**
- Entrada de dados com `fgets()` + `sscanf()` para tornar a experiência mais robusta e segura

Como toque pessoal, incluí uma pequena homenagem ao escritor **George Orwell** e ao seu livro *1984*, com uma referência especial ao resultado da soma **2 + 2**, uma provocação famosa dentro da obra.

## 🚀 Como executar

Certifique-se de ter o compilador `gcc` instalado. Em seguida, rode os comandos abaixo:

```bash
gcc main.c calculadora.c -o main
./main
