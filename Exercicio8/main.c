    /*⠀⠀
    Feito por Nathan Rodrigues dos Santos
    Análise e Desenvolvimento de Sistemas - 1 Período
    nathanrodriguessantos3@gmail.com⠀
    02/05/22
    1610247169⠀
⠀   ⠀⠀
⠀⠀  Exercício * 08 *⠀⠀⠀⠀⠀⠀⠀
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
    float v_capital, taxa_juros, v_juros;
    int dias=0;
    v_capital=taxa_juros=v_juros=0.0;

    //Recebendo o capital inicial
    printf("Bom dia, digite o valor do capital inicial\n");
    fflush(stdin);
    scanf("%f",& v_capital);
    system("cls");

    //Verificando se é válido
    while(v_capital<=0.0){
        printf("Valor invalido, digite novamente \n");
        fflush(stdin);
        scanf("%f",& v_capital);
        system("cls");
    }

    //Recebendo a taxa de juros
    printf("Digite a taxa de juros \n");
    fflush(stdin);
    scanf("%f",& taxa_juros);
    system("cls");

    //Verificando se é válido
    while(taxa_juros<0.0){
        printf("Valor invalido, digite novamente \n");
        fflush(stdin);
        scanf("%f",& taxa_juros);
        system("cls");
    }

    //Recebendo o valor dos juros
    printf("Digite o valor dos juros \n");
    fflush(stdin);
    scanf("%f",& v_juros);
    system("cls");

    //Verificando se é válido
    while(v_juros<=0.0){
        printf("Valor invalido, digite novamente \n");
        fflush(stdin);
        scanf("%f",& v_juros);
        system("cls");
    }

    //Calculando e mostrando o número de dias
    dias = ((v_juros-v_capital)/taxa_juros)*30;
    printf("A aplicacao foi feita a %d dias \n", dias);
    return 0;
}
