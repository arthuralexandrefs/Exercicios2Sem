    #include <stdio.h>

    /*Em um campeonato de futebol existem X(cinco) times e cada time possui X(onze) jogadores. Faça um programa que receba a idade, o peso e a altura de cada jogador.
    Calcule e mostre

    - A quantidade de jogadores com idade inferir a 18 anos
    - A média das idades de cada time
    - A média das alturas de todos  os jogares do campeonato
    - A porcentagem de jogadores com mais de 80 kg entre todos os jogadores do campeonato;
    */


    int main()
    {

    int idade = 0, menorIdade = 0, mediaIdade = 0, si = 0;
    float peso = 0, altura = 0, ma = 0, mAl = 0, sa = 0, maiskg = 0;

    for (int t = 0; t < 2; t++)
    {   
        printf("||||CAMPEONATO DE FUTEBOL||||\n\n");
        printf("Dados no %d time\n", t + 1);

        for (int j = 0; j < 5; j++)
        {

            // Informando os dados dos jogadores
            printf("Digite a idade do %d jogador \n", j + 1);
            scanf("%d", &idade);
            printf("Digite o peso \n");
            scanf("%f", &peso);
            printf("Digite a altura do %d jogador\n", j +1);
            scanf("%f", &altura);

            si = si + idade;
            if (idade < 18)
            {
                menorIdade + 1;
            }
            sa = sa + altura;

            if (peso > 80)
            {
                maiskg + 1;
            }
        }
        ma = si / 5;
        mAl = sa / 5;
        printf("A media das idades do time %d %.2f \n", t + 1, ma);

        printf("A media da altura do time %d %.2f\n", t + 1, mAl);
        printf("A media de idade do time somada eh de: %d\n", mediaIdade);

        sa = 0;
        si = 0;

        printf("A quantidade de jogadores menor de 18 eh de: %d\n", menorIdade);
        printf("A porcentagem de jogares com mais de 80 kg eh de: %.2f\n",( maiskg/10)*100 );
    }

    return 0;
}