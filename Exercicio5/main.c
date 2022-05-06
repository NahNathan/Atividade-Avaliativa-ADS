    /*⠀⠀
    Feito por Nathan Rodrigues dos Santos
    Análise e Desenvolvimento de Sistemas - 1 Período
    nathanrodriguessantos3@gmail.com⠀
    02/05/22
    1610247169⠀
⠀   ⠀⠀
⠀⠀  Exercício * 05 *⠀⠀⠀⠀⠀⠀⠀
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
    int selec=0;
    float l1, l2, l3, perim, area, s, bas, alt, face;

    //Menu
    while(selec!=5){
        l1=l2=l3=perim=area=s=bas=alt=face=0.0;
        printf("====================================================================\n");
        printf("Bom dia, digite o numero correspondente para selecionar uma opcao \n");
        printf("1->Perimetro de um triangulo \n");
        printf("2->Perimetro e area de um triangulo \n");
        printf("3->Area de um triangulo \n");
        printf("4->Perimetro e area de um quadrado \n");
        printf("5->Finalizar programa \n");
        printf("====================================================================\n");
        fflush(stdin);
        scanf("%d",& selec);
        system("cls");


        //Opção 1
        while(selec==1){
            printf("Digite o valor do primeiro lado\n");
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
            printf("O perimetro do triangulo eh de %.2f \n", perim);
            printf("\n\nEnter para continuar \n\n");
            getch();
            system("cls");
            selec=0;
        }


        //Opção 2
        while(selec==2){
            //Recebendo o primeiro valor
            printf("Digite o valor do primeiro lado\n");
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
            printf("\n\nEnter para continuar \n\n");
            getch();
            system("cls");
            selec=0;
        }


        //Opção 3
        while(selec==3){
            //Recebendo a base
            printf("Digite o valor da base do triangulo \n");
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
            printf("\n\nEnter para continuar \n\n");
            getch();
            system("cls");
            selec=0;
        }


        //Opção 4
        while(selec==4){
            printf("Digite o valor da face do quadrado\n");
            fflush(stdin);
            scanf("%f",& face);
            system("cls");

            //Verificando se eh valido
            while(face<=0.0){
                printf("Valor invalido, digite novamente \n");
                fflush(stdin);
                scanf("%f",& face);
                system("cls");
            }

            //Calculando e mostrando area e perímetro
            perim = face*4;
            area=face*face;
            printf("O quadrado tem um perimetro de %.2f e uma area de %.2f \n", perim, area);
            printf("\n\nEnter para continuar \n\n");
            getch();
            system("cls");
            selec=0;
        }
    }

    printf("Obrigado por usar esse programa ");
    return 0;
}
