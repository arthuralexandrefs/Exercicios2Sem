#include <stdio.h>

/*Elabore um programa em C para encontrar e escrever o valor do quadrado de um número N
inteiro positivo (N deve ser fornecido pelo usuário), através do seguinte algoritmo: “O
quadrado de um número positivo N é igual à soma dos N primeiros números ímpares”

Exemplo
 9
Resultado: 1 3 5 7 9 = 25

*/

int main()
{
    int num;
    printf("Digite um numero: ");
    scanf("%d", &num);

    int soma = 0;
    for (int i = 0; i <= num; i++)
    {
        if (i % 2 != 0)
        {
            soma = soma + i;
        }
    }
    printf("A Soma dos numeros impares ate %d foi = %d", num, soma);

    return 0;
}
