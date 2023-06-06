#include <stdio.h>
#include <stdlib.h>

int main()
{
    char operador;
    int num1, num2;
    printf("Programa: Calculadora:\n");
    printf("Digite a operacao que deseja realizar: +(soma) -(subtracao) *(multiplicacao) /(divisao)\n")
    scanf("%c", &operador);
    printf("Digite o primeiro numero:\n");
    scanf("%d", &num1);
    printf("Digite o segundo numero:\n");
    scanf("%d", &num2);

    printf("A operacao escolhida foi: %c", operador);
    printf("Numero um selecionado:%d  Numero dois selecionado:%d\n", num1, num2);
    return 0;
}
