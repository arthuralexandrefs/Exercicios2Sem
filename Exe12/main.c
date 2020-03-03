#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/*
faça um programa que receba a idade, a altura e o peso de 4 pessoas. 
Calcule e mostre:

A quantidade de pessoas com idade superior a 50 anos;
A média as alturas das pessoas com idade 10 e 20 anos;
a pOrcentagem de pessoas com peso menor a 40 quilos 
entre todas as pessoas analisadas.
*/

int main()
{
    int qtdPessoasMais50anos = 0, qtdPessoasEntre10e20Anos = 0, qtdPessoasPesoMenor40 = 0;
    float somaAlturaPessoasEntre10e20 = 0.0;
    int totalPessoasAvaliadas;

    printf("Quantas pessoas serao avaliadas?\n");
    scanf("%d", &totalPessoasAvaliadas);

    for (int i = 0; i < totalPessoasAvaliadas; i++)
    {
        int idade = 0;
        float altura, peso;

        printf("Digite a idade da %d pessoa\n", i + 1);
        scanf("%d", &idade);
        if (idade > 50)
        {
            qtdPessoasMais50anos++;
        }
        printf("Digite a altura\n");
        scanf("%f", &altura);
        if (idade >= 10 && idade <= 20)
        {
            qtdPessoasEntre10e20Anos++;
            somaAlturaPessoasEntre10e20 = somaAlturaPessoasEntre10e20 + altura;
        }
        printf("Digite agora o peso\n");
        scanf("%f", &peso);
        if (peso < 40)
        {
            qtdPessoasPesoMenor40++;
        }

    }

    printf("\nTemos %d pessoas com idade superior a 50 anos!\n", qtdPessoasMais50anos);
    printf("A Media da altura das pessoa com idade entre 10 e 20 eh de: %.2f \n", somaAlturaPessoasEntre10e20 / qtdPessoasEntre10e20Anos);
    printf("A pOrcentagem de pessoas com peso menor a 40 KG eh de: %.2f", (qtdPessoasPesoMenor40 * 100) / totalPessoasAvaliadas);
}