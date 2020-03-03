#include <stdio.h>

/**
 * perguntar ao usuario a quantidade de alunos
 * perguntar matricula e nota de cada aluno,
 * armazenar sempre a maior e menor nota e a matricula sua respectiva matricula
 * 
 * 1. Faça um programa em C que leia o número de matrícula e a nota de N alunos. Em
seguida, verifique e escreva qual o  número de matrícula do aluno que teve a maior
nota e do aluno teve a menor nota. N deve ser lido e validado dentro do valor máximo
estabelecido no programa. 
**/

int main ()
{
    int qtdAlunos;
    
    int maiorNota = -1;
    int matriculaDaMaiorNota;

    int menorNota = 11;
    int matriculaDaMenorNota;

    printf("Digite a quantidade de alunos");
    scanf("%d", &qtdAlunos);

    for (int i = 0; i < qtdAlunos ; i++) 
    {
        int matricula, nota;
        printf("\nDigite a matricula do aluno %d", (i + 1));
        scanf("%d", &matricula);

        printf("\nDigite a nota do aluno de matricula %d", matricula);
        scanf("%d", &nota);


        if (nota > maiorNota) {
            maiorNota = nota;
            matriculaDaMaiorNota = matricula;
        }

        if (nota < menorNota) {
            menorNota = nota;
            matriculaDaMenorNota = matricula;
        }
    }


    printf("\n\n\n *** A MENOR NOTA FOI %d DO ALUNO DE MATRICULA %d", menorNota, matriculaDaMenorNota);

    printf("\n\n\n *** A MAIOR NOTA FOI %d DO ALUNO DE MATRICULA %d", maiorNota, matriculaDaMaiorNota);

    return 0;
}