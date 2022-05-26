    /*⠀⠀
    Feito por Nathan Rodrigues dos Santos
    Análise e Desenvolvimento de Sistemas - 1 Período
    nathanrodriguessantos3@gmail.com⠀
    02/05/22
    1610247169⠀
⠀   ⠀⠀
⠀⠀  Exercício * 17 *⠀⠀⠀⠀⠀⠀⠀
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
    int mes=0;

    //Recebendo o numero do mes
    printf("Bom dia, digite um numero de mes qualquer\n");
    fflush(stdin);
    scanf("%d",& mes);
    system("cls");

    //Verificando se é válido
    while(mes<=0||mes>12){
        printf("Mes invalido, digite um numero entre 1 e 12\n");
        fflush(stdin);
        scanf("%d",& mes);
        system("cls");
    }


    //Mostrando o mes
    if(mes==1)
        printf("Janeiro");
    else if(mes==2)
        printf("Fevereiro");
    else if(mes==3)
        printf("Marco");
    else if(mes==4)
        printf("Abril");
    else if(mes==5)
        printf("Maio");
    else if(mes==6)
        printf("Junho");
    else if(mes==7)
        printf("Julho");
    else if(mes==8)
        printf("Agosto");
    else if(mes==9)
        printf("Setembro");
    else if(mes==10)
        printf("Outubro");
    else if(mes==11)
        printf("Novembro");
    else if(mes==12)
        printf("Dezembro");

    return 0;
}
