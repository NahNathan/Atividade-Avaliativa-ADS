    /*⠀⠀
    Feito por Nathan Rodrigues dos Santos
    Análise e Desenvolvimento de Sistemas - 1 Período
    nathanrodriguessantos3@gmail.com⠀
    02/05/22
    1610247169⠀
⠀   ⠀⠀
⠀⠀  Exercício * 02 *⠀⠀⠀⠀⠀⠀⠀
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
    float l1, l2, l3, perim, area, s;
    l1=l2=l3=perim=area=s= 0.0;

    //Recebendo o primeiro valor
    printf("Bom dia, digite o valor do primeiro lado\n");
    fflush(stdin);
    scanf("%f",& l1);
    system("cls");

    //Verificando se é válido
    while(l1<=0){
        printf("Valor invalido, digite novamente\n");
        fflush(stdin);
        scanf("%f",& l1);
        system("cls");
    }

    //Recebendo o segundo valor
    printf("Digite o valor do segundo lado\n");
    fflush(stdin);
    scanf("%f",& l2);
    system("cls");

    //Verificando se é válido
    while(l2<=0){
        printf("Valor invalido, digite novamente\n");
        fflush(stdin);
        scanf("%f",& l2);
        system("cls");
    }

    //Recebendo o terceiro valor
    printf("Digite o valor do terceiro lado\n");
    fflush(stdin);
    scanf("%f",& l3);
    system("cls");

    //Verificando se é válido
    while(l3<=0){
        printf("Valor invalido, digite novamente\n");
        fflush(stdin);
        scanf("%f",& l3);
        system("cls");
    }

    //Calculando e mostrando os resultados
    perim = l1+l2+l3;
    s=(l1+l2+l3);
    area= sqrt(s*(s-l1)*(s-l2)*(s-l3));
    printf("O perimetro do triangulo eh de %.2f e a sua area eh de %.2f \n", perim, area);
    return 0;
}
