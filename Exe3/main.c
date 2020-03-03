#include <stdio.h>
/*Uma empresa contratou 15 funcionários temporários. De acordo com o valor das vendas mensais,
os funcionários adquirem pontos que determinarão seus salários ao final de cada mês. Sabe-se
que seus funcionários trabalharão nos meses de Janeiro, Fevereiro e Março.

Faça um programa que calcule:

a) Ler as pontuações nos três meses de cada funcionário;

b) Calcule e mostre a pontuação geral de cada funcionário nos três meses;

c) Calcule e mostre a média das pontuações de cada funcionário nos três meses;

d) Determine e mostre a maior pontuação atingida entre todos os funcionários nos três meses.*/

int main()
{
    int maior = -1;

    for (int i = 0; i < 15; i++)
    {
        int total = 0;
        for (int j = 0; j < 3; j++)
        {
            int totalMes;
            printf("\n Digite o total de vendas do funcionario %d no mes %s\n", i + 1, j + 1);
            scanf("%d", &totalMes);
            total = total + totalMes;
        }

        printf("O funcionario %d vendeu %d\n", i + 1, total);
        printf("O funcionario %d teve como media %d", i + 1, (total / 3));

        if (total > maior)
        {
            maior = total;
        }
    } 
   
    printf("\nA maior pontuacao foi %d", maior);

    return 0;
}