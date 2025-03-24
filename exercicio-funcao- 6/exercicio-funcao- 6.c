#include <stdio.h>

float calcularINSS(float salario) {
    if (salario <= 1556.94) {
        return salario * 0.08;
    } else if (salario <= 2594.92) {
        return salario * 0.09;
    } else if (salario <= 5189.82) {
        return salario * 0.11;
    } else {
        return 570.88;
    }
}

float calcularIRPF(float salario, float inss, int dependentes) {
    float baseCalculo = salario - inss - (dependentes * 189.59);

    if (baseCalculo <= 1903.98) {
        return 0.0;
    } else if (baseCalculo <= 2826.65) {
        return baseCalculo * 0.075 - 142.80;
    } else if (baseCalculo <= 3751.05) {
        return baseCalculo * 0.15 - 354.80;
    } else if (baseCalculo <= 4664.68) {
        return baseCalculo * 0.225 - 636.13;
    } else {
        return baseCalculo * 0.275 - 869.36;
    }
}

int main() {
    float salarioBruto, inss, irpf, salarioLiquido;
    int dependentes;

    printf("Digite o salario bruto: ");
    scanf("%f", &salarioBruto);

    printf("Digite o numero de dependentes: ");
    scanf("%d", &dependentes);

    inss = calcularINSS(salarioBruto);
    irpf = calcularIRPF(salarioBruto, inss, dependentes);
    salarioLiquido = salarioBruto - inss - irpf;

    printf("Val.INSS....: %.2f\n", inss);
    printf("Val.IRPF....: %.2f\n", irpf);
    printf("Sal.Liquido.: %.2f\n", salarioLiquido);

    return 0;
}
