    /*⠀⠀
    Feito por Nathan Rodrigues dos Santos
    Análise e Desenvolvimento de Sistemas - 1 Período
    nathanrodriguessantos3@gmail.com⠀
    02/05/22
    1610247169⠀
⠀   ⠀⠀
⠀⠀  Exercício * 29 *⠀⠀⠀⠀⠀⠀⠀
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
    float num=1.0, som=0.0, maior=0.0, menor=0.0, maiorp=0.0, menorn=0.0;
    int total=0;

    //Recebendo
    printf("Bom dia, \n");
    while(num!=0){
        //Recebendo o numero
        printf("Digite um numero qualquer ou digite 0 para finalizar\n");
        fflush(stdin);
        scanf("%f",& num);
        system("cls");
        maior=num;
        menor=num;
        if(num>0)
        maiorp=num;
        else if(num<0)
        menorn=num;

        while(num!=0){
            if(num>maior)
                maior=num;
            if(num<menor)
                maior=num;
            if(num!=0){
                som=som+num;
                total++;
            }

            if(num>0)
            maiorp=num;
            else if(num<0)
            menorn=num;

            //Recebendo o numero
            printf("Digite um numero qualquer ou digite 0 para finalizar\n");
            fflush(stdin);
            scanf("%f",& num);
            system("cls");
        }
    }
    printf("TOTAL DE NUMEROS: %d \n", total);
    printf("SOMATORIA: %.2f \n", som);
    printf("MAIOR NUMERO: %.2f \n", maior);
    printf("MENOR NUMERO: %.2f \n", menor);
    printf("MAIOR NUMERO POSITIVO: %.2f \n", maiorp);
    printf("MENOR NUMERO NEGATIVO: %.2f \n", menorn);
    return 0;
}
