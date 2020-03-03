#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/** 
 *Uma loja utiliza o codigo V para transacao a vista e P para transacao a prazo, 
 faca um programa que receba o codigo e o valor de 5 transacoes. calcule e mostre:
 O Valor total das compras a vista
 O valor total das compras a prazo
 O valor total das compras efetuadas
 O valor da primeira prestacao paga, sabendo que essas serao efetuadas em 3 vezes. 
 **/

int main()
{
    printf("\n*****************************************");
    printf("\n*********** Loja do Toni ***********\n");
    printf("Aqui, na Loja do Toni voce tem duas opcoes de pagamento\n\n ");
    printf("A vista OU a prazo\n");

    float totalVista = 0.0, totalPrazo = 0.0;

    for (int i = 0; i < 5; i++)
    {
        printf("\n***** INICIO DA %d TRANSACAO *****", i + 1);
        char opcao = 'D';
        float valorTrans = 0.0;

        printf("\nDigite o valor da sua compra: R$");
        scanf("%f", &valorTrans);

        do
        {
            printf("\nDigite V para pagamento a vista ou P para parcelar a compra:\n");
            scanf(" %c", &opcao);
            opcao = toupper(opcao);
        } while (opcao != 'V' && opcao != 'P');

        if (opcao == 'P')
        {
            totalPrazo = totalPrazo + valorTrans;
            printf("Voce escolheu a opcao a prazo.\n");
            printf("A primeira parcela sera do valor de R$ %.2f\n", valorTrans / 3);
        }
        if (opcao == 'V')
        {
            totalVista = totalVista + valorTrans;
            printf("Voce escolheu a opcao a vista.\n");
        }
        printf("***** FIM DA %d TRANSACAO *****\n", i + 1);
    }
    printf("O Total a vista e de: R$%.2f\n", totalVista);
    printf("O Total a prazo e de: R$%.2f\n", totalPrazo);
    printf("Totalizando...: R$%.2f\n", totalPrazo + totalVista);

    return 0;
}