#include <stdio.h>
/*
) Num frigorífico existem 10 bois. Fazer o programa em C que leia o peso de cada boi e
escreva o peso do boi mais gordo.
*/
int main()
{
    int maior = 0;

    for (int i = 0; i < 10; i++)
    {
        int peso;
        printf("Digite o peso do %d boi", i + 1);
        scanf("%d", &peso);
        
        if (peso > maior)
        {
            maior = peso;
        }
    }

    printf("O boi mais pesado tem: %d", maior);
}
