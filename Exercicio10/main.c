    /*⠀⠀
    Feito por Nathan Rodrigues dos Santos
    Análise e Desenvolvimento de Sistemas - 1 Período
    nathanrodriguessantos3@gmail.com⠀
    02/05/22
    1610247169⠀
⠀   ⠀⠀
⠀⠀  Exercício * 10 *⠀⠀⠀⠀⠀⠀⠀
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
    int dias, selec =0;
    float v_capital, taxa_juros, v_juros;

    //Menu
    while (selec!=5){
        v_capital=taxa_juros=v_juros=0.0;
        dias=0;
        printf("====================================================================\n");
        printf("Bom dia, digite o numero correspondente para selecionar uma opcao \n");
        printf("1->Calcular o valor dos juros \n");
        printf("2->Calcular o valor do capital aplicado \n");
        printf("3->Calcular o tempo de aplicacao \n");
        printf("4->Calcular o indice da taxa de juros \n");
        printf("5->Finalizar programa \n");
        printf("====================================================================\n");
        fflush(stdin);
        scanf("%d",& selec);
        system("cls");


        //Opção 1
        while(selec==1){
            //Recebendo o capital inicial
        printf("Digite o valor do capital inicial\n");
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

        //Recebendo os dias
        printf("Digite a quantidade de dias desde a aplicacao \n");
        fflush(stdin);
        scanf("%d",& dias);
        system("cls");

        //Verificando se é válido
        while(dias<0){
            printf("Valor invalido, digite novamente \n");
            fflush(stdin);
            scanf("%d",& dias);
            system("cls");
        }

        //Calculando e mostrando o valor dos juros
        v_juros = v_capital+((dias/30)*taxa_juros);
        printf("O valor dos juros simples eh de R$%.2f \n", v_juros);
        printf("\n\nEnter para continuar\n\n");
        getch();
        system("cls");
        selec=0;
        }


        //Opção 2
        while(selec==2){
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

        //Recebendo os dias
        printf("Digite a quantidade de dias desde a aplicacao \n");
        fflush(stdin);
        scanf("%d",& dias);
        system("cls");

        //Verificando se é válido
        while(dias<0){
            printf("Valor invalido, digite novamente \n");
            fflush(stdin);
            scanf("%d",& dias);
            system("cls");
        }

        //Calculando e mostrando o valor inicial
        v_capital = v_juros-((dias/30)*taxa_juros);
        printf("O valor do capital aplicado eh de R$%.2f \n", v_capital);
        printf("\n\nEnter para continuar\n\n");
        getch();
        system("cls");
        selec=0;
        }


        //Opção 3
        while(selec==3){
        //Recebendo o capital inicial
        printf("Digite o valor do capital inicial\n");
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
        printf("\n\nEnter para continuar\n\n");
        getch();
        system("cls");
        selec=0;
        }


        //Opção 4
        while(selec==4){
        printf("Digite o valor do capital inicial\n");
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

        //Recebendo os dias
        printf("Digite a quantidade de dias desde a aplicacao \n");
        fflush(stdin);
        scanf("%d",& dias);
        system("cls");

        //Verificando se é válido
        while(dias<0){
            printf("Valor invalido, digite novamente \n");
            fflush(stdin);
            scanf("%d",& dias);
            system("cls");
        }

        //Calculando e mostrando a taxa de juros
        taxa_juros = (v_juros-v_capital)/(dias/30);
        printf("A taxa de juros eh de %.2f porcento \n", taxa_juros);
        printf("\n\nEnter para continuar\n\n");
        getch();
        system("cls");
        selec=0;
        }
    }

    printf("Obrigado por usar esse programa ");
    return 0;
}
