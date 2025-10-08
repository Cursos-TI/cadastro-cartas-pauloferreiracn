#include <stdio.h>

int main() {
      printf("Hello, World!\n\n"); //Primeiros passos em C - Saída de dados

    //OPERADORES MATEMÁTICOS
    int a = 10; // Exemplo de variável
    int b = 3; // Evitar divisão por zero
    int soma = a + b; // Adição
    int subtracao = a - b; // Subtração
    int multiplicacao = a * b; // Multiplicação
    int divisao = a / b; // Divisão inteira
    int modulo = a % b; // Resto da divisão
    printf("Soma: %d\n", soma); // Saída: 13
    printf("Subtração: %d\n", subtracao); // Saída: 7
    printf("Multiplicação: %d\n", multiplicacao); // Saída: 30
    printf("Divisão: %d\n", divisao); // Saída: 3
    printf("Módulo: %d\n\n", modulo); // Saída: 1

    //Operadores de incremento e decremento também com Pós e Pré-incremento/decremento
    int contador = 5; // Exemplo de variável 
    printf("Contador inicial: %d\n", contador); // Saída: 5
    contador++; // Incremento
    printf("Após incremento: %d\n", contador); // Saída: 6
    contador--; // Decremento
    printf("Após decremento: %d\n\n", contador); // Saída: 5 
    //Pré-incremento
    printf("Pré-incremento: %d\n", ++contador); // Incrementa e depois imprime: 6
    //Pós-incremento
    printf("Pós-incremento: %d\n", contador++); // Imprime e depois incrementa: 6
    printf("Valor após pós-incremento: %d\n\n", contador); // Agora é 7 
    //Pré-decremento
    printf("Pré-decremento: %d\n", --contador); // Decrementa e depois imprime: 6
    //Pós-decremento
    printf("Pós-decremento: %d\n", contador--); // Imprime e depois decrementa: 6
    printf("Valor após pós-decremento: %d\n\n", contador); // Agora é 5 
    
    //Manipulação e conversão de tipos de dados
    int inteiro = 42; // Exemplo de variável inteira
    float pontoFlutuante = 3.14f; // Exemplo de variável float
    double pontoDuplo = 2.718281828459045; // Exemplo de variável double
    char caractere = 'A'; // Exemplo de variável char
    printf("Inteiro: %d\n", inteiro); // Saída: 42
    printf("Ponto Flutuante: %.2f\n", pontoFlutuante); // Saída: 3.14
    printf("Ponto Duplo: %.2f\n", pontoDuplo); // Saída: 2.71
    printf("Caractere: %c\n\n", caractere); // Saída: A
    
    // Conversão de tipos
    float convertido = (float)inteiro; // Converte inteiro para float
    int truncado = (int)pontoFlutuante; // Converte float para inteiro
    printf("Convertido para float: %.2f\n", convertido); // Saída: 42.00
    printf("Truncado para inteiro: %d\n\n", truncado); // Saída: 3
    
    // Operações com ponto flutuante
    float x = 5.5; // Exemplo de variável float
    float y = 2.2; // Evitar divisão por zero
    float soma2 = x + y; // Adição de ponto flutuante
    float diferenca = x - y; // Subtração de ponto flutuante
    float produto = x * y; // Multiplicação de ponto flutuante
    float quociente = x / y; // Divisão de ponto flutuante
 
    printf("Soma: %.2f\n", soma2); // Saída: 7.70
    printf("Diferença: %.2f\n", diferenca); // Saída: 3.30
    printf("Produto: %.2f\n", produto); // Saída: 12.10
    printf("Quociente: %.2f\n", quociente); // Saída: 2.50

    // Conversão implícita corre automaticamente quando você mistura diferentes tipos de dados em uma expressão.
    int intParaFloat = 10; // Exemplo de variável inteira
    float resultado = intParaFloat + 2.5f; // int é convertido para float
    printf("Resultado da conversão implícita: %.2f\n", resultado); // Saída: 12.50 

    // Conversão explícita é feita pelo programador usando cast.
    float floatParaInt = 9.99f; // Exemplo de variável float
    int resultado2 = (int)floatParaInt; // float é convertido para int (truncamento)
    printf("Resultado da conversão explícita: %d\n", resultado2); // Saída: 9

return 0;
}