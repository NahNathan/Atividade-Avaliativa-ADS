    /*⠀⠀
    Feito por Nathan Rodrigues dos Santos
    Análise e Desenvolvimento de Sistemas - 1 Período
    nathanrodriguessantos3@gmail.com⠀
    02/05/22
    1610247169⠀
⠀   ⠀⠀
⠀⠀  Exercício * 03 *⠀⠀⠀⠀⠀⠀⠀
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
    float bas, alt, area;
    bas=alt=area=0.0;

    //Recebendo a base
    printf("Bom dia, digite o valor da base do triangulo \n");
    fflush(stdin);
    scanf("%f", & bas);
    system("cls");

    //Verificando se eh valido
    while(bas<=0.0){
        printf("Valor invalido, digite novamente\n");
        fflush(stdin);
        scanf("%f", & bas);
        system("cls");
    }

    //Recebendo a altura
    printf("Digite o valor da altura do triangulo \n");
    fflush(stdin);
    scanf("%f", & alt);
    system("cls");

    //Verificando se eh valido
    while(alt<=0.0){
        printf("Valor invalido, digite novamente\n");
        fflush(stdin);
        scanf("%f", & alt);
        system("cls");
    }

    //Calculando e mostrando a area
    area=alt*bas*0.5;
    printf("A area do triangulo eh de %.2f \n", area);
    return 0;
}
