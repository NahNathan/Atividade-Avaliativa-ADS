    /*⠀⠀
    Feito por Nathan Rodrigues dos Santos
    Análise e Desenvolvimento de Sistemas - 1 Período
    nathanrodriguessantos3@gmail.com⠀
    02/05/22
    1610247169⠀
⠀   ⠀⠀
⠀⠀  Exercício * 16 *⠀⠀⠀⠀⠀⠀⠀
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
    int dia_atu, mes_atu, ano_atu, dia_ani, mes_ani, ano_ani, idade;
    dia_atu=mes_atu=ano_atu=dia_ani=mes_ani=ano_ani=idade=0;

    //Recebendo o dia atual
    printf("Bom dia, digite o dia atual\n");
    fflush(stdin);
    scanf("%d",& dia_atu);
    system("cls");

    //Verificando se eh valido
    while(dia_atu<0 || dia_atu>31){
        printf("Numero invalido, digite o dia atual\n");
        fflush(stdin);
        scanf("%d",& dia_atu);
        system("cls");
    }


    //Recebendo o mes atual
    printf("Digite o mes atual\n");
    fflush(stdin);
    scanf("%d",& mes_atu);
    system("cls");

    //Verificando se eh valido
    while(mes_atu<0 || mes_atu>31){
        printf("Numero invalido, digite o mes atual\n");
        fflush(stdin);
        scanf("%d",& mes_atu);
        system("cls");
    }


    //Recebendo o ano atual
    printf("Digite o ano atual\n");
    fflush(stdin);
    scanf("%d",& ano_atu);
    system("cls");

    //Verificando se eh valido
    while(ano_atu<0){
        printf("Numero invalido, digite o ano atual\n");
        fflush(stdin);
        scanf("%d",& ano_atu);
        system("cls");
    }


    //Recebendo o dia do aniversario
    printf("Bom dia, digite o dia de aniversario\n");
    fflush(stdin);
    scanf("%d",& dia_ani);
    system("cls");

    //Verificando se eh valido
    while(dia_ani<0 || dia_ani>31){
        printf("Numero invalido, digite o dia de aniversario\n");
        fflush(stdin);
        scanf("%d",& dia_ani);
        system("cls");
    }


    //Recebendo o mes de aniversario
    printf("Digite o mes de aniversario\n");
    fflush(stdin);
    scanf("%d",& mes_ani);
    system("cls");

    //Verificando se eh valido
    while(mes_ani<0 || mes_ani>31){
        printf("Numero invalido, digite o mes de aniversario\n");
        fflush(stdin);
        scanf("%d",& mes_ani);
        system("cls");
    }


    //Recebendo o ano de aniversario
    printf("Digite o ano de aniversario\n");
    fflush(stdin);
    scanf("%d",& ano_ani);
    system("cls");

    //Verificando se eh valido
    while(ano_ani<0){
        printf("Numero invalido, digite o ano atual\n");
        fflush(stdin);
        scanf("%d",& ano_ani);
        system("cls");
    }


    //Calculando
    if(mes_ani<mes_atu || (mes_ani==mes_atu && dia_ani<=dia_atu))
        idade=ano_atu-ano_ani;
    else
        idade=(ano_atu-ano_ani)-1;

    //Mostrando
    printf("\nA IDADE EH DE %d \n", idade);
    return 0;
}
