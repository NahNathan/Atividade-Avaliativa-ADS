    /*⠀⠀
    Feito por Nathan Rodrigues dos Santos
    Análise e Desenvolvimento de Sistemas - 1 Período
    nathanrodriguessantos3@gmail.com⠀
    02/05/22
    1610247169⠀
⠀   ⠀⠀
⠀⠀  Exercício * 24 *⠀⠀⠀⠀⠀⠀⠀
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
    int num, par_pos, par_neg, imp_pos, imp_neg;
    par_pos=par_neg=imp_pos=imp_neg=0;
    num=1;

    //Recebendo
    printf("Bom dia, \n");
    while(num!=0){
        //Recebendo o numero
        printf("Digite um numero qualquer ou digite 0 para finalizar\n");
        fflush(stdin);
        scanf("%f",& num);
        system("cls");
        if(num!=0){
            if(num%2==0){
                //É par
                if(num>0)
                    par_pos++; //É Positivo

                else if(num<0)
                    par_neg++; //É Negativo

            }
            else if(num%2==1){
                //É ímpar
                if(num>0)
                    imp_pos++; //É Positivo

                else if(num<0)
                    imp_neg++; //É Negativo
            }
        }
    }
    printf("TOTAL DE PARES POSITIVOS: %d \n", par_pos);
    printf("TOTAL DE PARES NEGATIVOS: %d \n", par_neg);
    printf("TOTAL DE IMPARES POSITIVOS: %d \n", imp_pos);
    printf("TOTAL DE IMPARES NEGATIVOS: %d \n", imp_neg);


    return 0;
}
