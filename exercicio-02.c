#include <stdio.h>
#include <stdlib.h>

int main() {
    float valor_real;
    float valor_dolar, valor_euro, valor_libra;

    const float taxa_dolar = 5.636;
    const float taxa_euro = 6.054;
    const float taxa_libra = 7.215;

    printf("Digite o valor do produto em Reais (R$): ");
    scanf("%f", &valor_real);

    valor_dolar = valor_real / taxa_dolar;
    valor_euro = valor_real / taxa_euro;
    valor_libra = valor_real / taxa_libra;

    printf("Valor em Dólar: $%.2f\n", valor_dolar);
    printf("Valor em Euro: €%.2f\n", valor_euro);
    printf("Valor em Libra Esterlina: £%.2f\n", valor_libra);

    return 0;
}
