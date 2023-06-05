#include <stdio.h>
#include <stdlib.h>

void main()
{
    float salario;
    float reajuste;
    float novoSalario;

    printf("Digite o valor do salario atual: ");
    scanf("%f", &salario);

    printf("Digite o percentual do reajuste do salario: ");
    scanf("%f", &reajuste);

    novoSalario = salario + (salario * (reajuste / 100));

    printf("O novo salario apos o reajuste é de: %0.2f", novoSalario);
    return 0;
}
