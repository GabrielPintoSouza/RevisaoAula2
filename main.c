#include <stdio.h>
#include <stdlib.h>
double Calcula(int num1, int num2, char operador){
    switch(operador){
        case '+': return num1 + num2;
        case '-': return num1 - num2;
        case '*': return num1 * num2;
        case '/': return num1 / num2;
        default: return 0;
    }
}
int main()
{
    char operador;
    int num1, num2;
    printf("Programa: Calculadora:\n");
    printf("Digite a operacao que deseja realizar: +(soma) -(subtracao) *(multiplicacao) /(divisao)\n");
    scanf("%c", &operador);
    printf("Digite o primeiro numero:\n");
    scanf("%d", &num1);
    printf("Digite o segundo numero:\n");
    scanf("%d", &num2);

    printf("A operacao escolhida foi: %c ", operador);
    printf("Numero um selecionado:%d  Numero dois selecionado:%d\n", num1, num2);
    printf("O resultado da operacao foi: %f", Calcula(num1, num2, operador));
    return 0;
}
