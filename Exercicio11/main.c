    /*⠀⠀
    Feito por Nathan Rodrigues dos Santos
    Análise e Desenvolvimento de Sistemas - 1 Período
    nathanrodriguessantos3@gmail.com⠀
    02/05/22
    1610247169⠀
⠀   ⠀⠀
⠀⠀  Exercício * 11 *⠀⠀⠀⠀⠀⠀⠀
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
    float l_lqd, l_brt, v_ven, v_com;
    l_lqd=l_brt=v_ven=v_com=0.0;

    //Recebendo o valor das vendas
    printf("Bom dia, digite o valor de vendas \n");
    printf("(Valor minimo de R$2.000,00) \n");
    fflush(stdin);
    scanf("%f",& v_ven);
    system("cls");

    //Verificando se é válido
    while(v_ven<2000){
        printf("Valor invalido, digite novamente \n");
        fflush(stdin);
        scanf("%f",& v_ven);
        system("cls");
    }

    //Calculando e mostrando
    v_com=(v_ven/10)+100;
    l_brt= 4*((v_ven-v_com)/5);
    l_lqd= (19*(l_brt/20));
    printf("O valor da comissao eh de R$%.2f \n", v_com);
    printf("O valor do lucro bruto eh de R$%.2f \n", l_brt);
    printf("O valor do lucro liquido eh de R$%.2f \n", l_lqd);

    return 0;
}
