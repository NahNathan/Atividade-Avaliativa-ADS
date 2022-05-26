 /*⠀⠀
    Feito por Nathan Rodrigues dos Santos
    Análise e Desenvolvimento de Sistemas - 1 Período
    nathanrodriguessantos3@gmail.com⠀
    02/05/22
    1610247169⠀
⠀   ⠀⠀
⠀⠀  Exercício * 15 *⠀⠀⠀⠀⠀⠀⠀
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
    char nome[40], sexo;
    float n1, n2, n3, n4, n5, med;
    n1=n2=n3=n4=n5=med=0.0;
    strcpy(nome,"");
    sexo = ' ';


    //Recebendo o nome
    printf("Bom dia, digite o seu nome\n");
    fflush(stdin);
    gets(nome);
    system("cls");

    //Verificando se é válido

    while(strlen(nome)==0 || strlen(nome) == 1 || strlen(nome)== 2){
        printf("O nome eh obrigatorio\n");
        fflush(stdin);
        gets(nome);
        system("cls");

    }


    //Recebendo o sexo
    printf("Digite o seu sexo \n>M para masculino \n>F para feminino\n");
    fflush(stdin);
    scanf("%c",& sexo);
    system("cls");

    //Verificando se é válido
    while(sexo!='m' && sexo!='M' && sexo!='f' && sexo!='F'){
        printf("Digite um sexo valido\n");
        fflush(stdin);
        gets(nome);
        system("cls");
    }


    //Recebendo a nota 1
    printf("Digite a nota da prova 1\n");
    fflush(stdin);
    scanf("%f",& n1);
    system("cls");

    //Verificando se é válido
    while(n1<0 || n1>10){
        printf("Valor invalido, digite novamente\n");
        fflush(stdin);
        scanf("%f",& n1);
        system("cls");
    }


    //Recebendo a nota 2
    printf("Digite a nota da prova 2\n");
    fflush(stdin);
    scanf("%f",& n2);
    system("cls");

    //Verificando se é válido
    while(n2<0 || n2>10){
        printf("Valor invalido, digite novamente\n");
        fflush(stdin);
        scanf("%f",& n2);
        system("cls");
    }


    //Recebendo a nota 3
    printf("Digite a nota da prova 3 \n");
    fflush(stdin);
    scanf("%f",& n3);
    system("cls");

    //Verificando se é válido
    while(n3<0 || n3>10){
        printf("Valor invalido, digite novamente\n");
        fflush(stdin);
        scanf("%f",& n3);
        system("cls");
    }


    //Recebendo a nota 4
    printf("Digite a nota da prova 4 \n");
    fflush(stdin);
    scanf("%f",& n4);
    system("cls");

    //Verificando se é válido
    while(n4<0 || n4>10){
        printf("Valor invalido, digite novamente\n");
        fflush(stdin);
        scanf("%f",& n4);
        system("cls");
    }


    //Calculando a media e mostrando
    med=(n1+n2+n3+n4)/4;
    if(med<4)
        printf("Sua media foi %.2f \n\nREPROVADO \n", med);
    else if(med>=6)
        printf("Sua media foi %.2f \n\nALUNO APROVADO \n", med);
    else{
        //Recebendo a nota 5
        printf("Sua media foi %.2f \n\nDigite a nota da prova 5\n",med);
        fflush(stdin);
        scanf("%f",& n5);
        system("cls");

        //Verificando se é válido
        while(n5<0 || n5>10){
            printf("Valor invalido, digite novamente\n");
            fflush(stdin);
            scanf("%f",& n5);
            system("cls");
        }

        //Calculando e mostrando nova média
        med = (med+n5)/2;
        if (med<4)
            printf("Sua media foi %.2f \n\nREPROVADO NA P5\n", med);
        else if(med>=6)
            printf("Sua media foi %.2f \n\nAPROVADO NA P5\n", med);
        else{
            //Recebendo a nota 1 da segunda época
            printf("Digite a nota da prova 1 da segunda epoca\n");
            fflush(stdin);
            scanf("%f",& n1);
            system("cls");

            //Verificando se é válido
            while(n1<0 || n1>10){
                printf("Valor invalido, digite novamente\n");
                fflush(stdin);
                scanf("%f",& n1);
                system("cls");
            }


            //Recebendo a nota 2 da segunda época
            printf("Digite a nota da prova 2 da segunda epoca\n");
            fflush(stdin);
            scanf("%f",& n2);
            system("cls");

            //Verificando se é válido
            while(n2<0 || n2>10){
                printf("Valor invalido, digite novamente\n");
                fflush(stdin);
                scanf("%f",& n2);
                system("cls");
            }


            //Recebendo a nota 3 da segunda época
            printf("Digite a nota da prova 3 da segunda epoca\n");
            fflush(stdin);
            scanf("%f",& n3);
            system("cls");

            //Verificando se é válido
            while(n3<0 || n3>10){
                printf("Valor invalido, digite novamente\n");
                fflush(stdin);
                scanf("%f",& n3);
                system("cls");
            }


            //Recebendo a nota 4 da segunda época
            printf("Digite a nota da prova 4 da segunda epoca\n");
            fflush(stdin);
            scanf("%f",& n4);
            system("cls");

            //Verificando se é válido
            while(n4<0 || n4>10){
                printf("Valor invalido, digite novamente\n");
                fflush(stdin);
                scanf("%f",& n4);
                system("cls");
            }


            //Calculando e mostrando a média da segunda época
            med=(n1+n2+n3+n4)/4;
            if(med<6)
                printf("Sua media foi %.2f \n\n REPROVADO NA SEGUNDA EPOCA\n", med);
            else
                printf("Sua media foi %.2f \n\n APROVADO NA SEGUNDA EPOCA\n", med);
        }
    }




    return 0;
}
