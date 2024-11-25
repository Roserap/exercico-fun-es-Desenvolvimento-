#include <stdio.h>
#include <stdlib.h>

int somar(int a, int b)
{
    return a + b;
}

int subtrair(int a, int b)
{
    return a - b;
}

int multiplicar(int a, int b)
{
    return a * b;
}

float dividir(int a, int b)
{
    if (b != 0)
    {
        return (float)a / b;
    }
    else
    {
        printf("Erro: Divisão por zero não é permitida.\n");
        return 0;
    }
}

int main()
{
    int num1, num2, opcao;

    printf("Digite o primeiro número: ");
    scanf("%d", &num1);
    printf("Digite o segundo número: ");
    scanf("%d", &num2);

    printf("Escolha uma operação:\n");
    printf("1 - Somar\n");
    printf("2 - Subtrair\n");
    printf("3 - Multiplicar\n");
    printf("4 - Dividir\n");
    printf("Digite sua opção (1-4): ");
    scanf("%d", &opcao);

    switch (opcao)
    {
    case 1:
        printf("Resultado da soma: %d\n", somar(num1, num2));
        break;
    case 2:
        printf("Resultado da subtração: %d\n", subtrair(num1, num2));
        break;
    case 3:
        printf("Resultado da multiplicação: %d\n", multiplicar(num1, num2));
        break;
    case 4:
        printf("Resultado da divisão: %.2f\n", dividir(num1, num2));
        break;
    default:
        printf("Opção inválida! Por favor, escolha uma opção entre 1 e 4.\n");
        break;
    }

    return 0;
}
