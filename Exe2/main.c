#include<stdio.h>
int main ()
{
    int i;
    printf ("Digite um numero\n");
    scanf ("%d", &i);

    if (i == 0) {
        printf ("Numero zero\n");
    }else if ( i < 0) {
        printf ("Numero negativo\n");
    }else {
        printf ("Numero positivo\n");
    } 

    if ( i % 2 == 0) {
        printf ("Par");
    }else{ 
        printf ("Impar");
    }


    return 0;
}
/**
 * Faça um programa que leia um numero e diga se ele é positivo ou negativo e se ele é par ou impar.
 * **/

