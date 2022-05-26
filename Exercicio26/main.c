    /*⠀⠀
    Feito por Nathan Rodrigues dos Santos
    Análise e Desenvolvimento de Sistemas - 1 Período
    nathanrodriguessantos3@gmail.com⠀
    02/05/22
    1610247169⠀
⠀   ⠀⠀
⠀⠀  Exercício * 26 *⠀⠀⠀⠀⠀⠀⠀
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
    int num=1;
    float total=0.0, som=0.0, maior=0.0, maior=0.0;

    //Recebendo
    printf("Bom dia, \n");
    while(num!=0){
        //Recebendo o numero
        printf("Digite um numero qualquer ou digite 0 para finalizar\n");
        fflush(stdin);
        scanf("%f",& num);
        system("cls");

        if(num!=0){
            som=som+num;
            total++;
            if(num>maior){
                maior=num;}
        }
    }
    printf("TOTAL DE NUMEROS: %d \n", total);
    printf("SOMATORIA: %.1f \n", som);

    return 0;
}
