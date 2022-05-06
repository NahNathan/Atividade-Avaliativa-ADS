    /*⠀⠀
    Feito por Nathan Rodrigues dos Santos
    Análise e Desenvolvimento de Sistemas - 1 Período
    nathanrodriguessantos3@gmail.com⠀
    02/05/22
    1610247169⠀
⠀   ⠀⠀
⠀⠀  Exercício * 18 *⠀⠀⠀⠀⠀⠀⠀
    */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <math.h>
#include <time.h>

#define tam 10

int main()
{
    //Declarando e inicializando as variáveis
    int cont;
    float num, maior, menor, soma, med;
    cont=0;
    soma=med=maior=0.0;
    num=1;
    menor=-1;


    printf("Bom dia\n");
    //Começando o laço

    while(num!=0){
        //Recebendo o numero
        printf("Digite um numero qualquer ou digite 0 para finalizar\n");
        fflush(stdin);
        scanf("%f",& num);
        system("cls");
        menor=num;
        maior=num;

        while(num!=0){
            //Calculando
            if(num>maior)
                maior=num;
            if(num<=menor)
                menor=num;
            soma=soma+num;
            if(num!=0)
                cont++;

            printf("Digite um numero qualquer ou digite 0 para finalizar\n");
            fflush(stdin);
            scanf("%f",& num);
            system("cls");
        }
    }
    //Final do laço
    //Calculando e mostrando os resultados
    med=soma/cont;
    printf("O maior numero da lista eh %.2f\n", maior);
    printf("O menor numero da lista eh %.2f\n", menor);
    printf("A soma de todos os numeros da lista eh %.2f\n", soma);
    printf("A media dos numeros eh de %.2f\n", med);
    printf("A quantidade de numeros da lista eh de %d numeros\n", cont);

    return 0;
}
