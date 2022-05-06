    /*⠀⠀
    Feito por Nathan Rodrigues dos Santos
    Análise e Desenvolvimento de Sistemas - 1 Período
    nathanrodriguessantos3@gmail.com⠀
    02/05/22
    1610247169⠀
⠀   ⠀⠀
⠀⠀  Exercício * 22 *⠀⠀⠀⠀⠀⠀⠀
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
    int alunos_tot, alunos_apr_d, alunos_rep_d, alunos_p5, alunos_apr_p5, alunos_rep_p5, alunos_2e, alunos_apr_2e, alunos_rep_2e, alunos_apr, alunos_rep, idade, masc, femi;
    float n1, n2, n3, n4, n5, med, porc1, porc2;
    alunos_tot=alunos_apr_d=alunos_rep_d=alunos_p5=alunos_apr_p5=alunos_rep_p5=alunos_2e=alunos_apr_2e=alunos_rep_2e=alunos_apr=alunos_rep=idade=masc=femi=0;
    n1=n2=n3=n4=n5=med=porc1=porc2=0.0;
    strcpy(nome,"");
    sexo=" ";


    printf("Bom dia\n");
    while(sexo!='x' && sexo!='X'){
        //Recebendo o sexo
        printf("Digite o seu sexo \n>M para masculino \n>F para feminino\nX para sair\n");
        fflush(stdin);
        scanf("%c",& sexo);
        system("cls");
        if(sexo=='x')
            break;

        //Verificando se eh valido
        while(sexo!='m' && sexo!='M' && sexo!='f' && sexo!='F'){
        printf("Digite um sexo valido\n");
        fflush(stdin);
        scanf("%c",& sexo);
        system("cls");
        }

        while(sexo!='x' && sexo!='X'){

            alunos_tot++;//Mais um aluno no total
            if(sexo=='m'||sexo=='M')
                masc++; //Mais um homem
            else if(sexo=='f'||sexo=='F')
                femi++; //Mais uma mulher


            //Recebendo o nome
            printf("Digite o seu nome\n");
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


            //Recebendo a idade
            printf("Digite a sua idade\n");
            fflush(stdin);
            scanf("%d",& idade);
            system("cls");

            //Verificando se é válido
            while(idade<=5 || idade>=140){
            printf("Digite uma idade valida\n");
            fflush(stdin);
            scanf("%d",& idade);
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
            if(med<4){
                printf("Sua media foi %.2f \n\nREPROVADO \n", med);
                alunos_rep_d++; //Mais um aluno reprovado diretamente
                alunos_rep++;   //Mais um aluno reprovado no total
                if(sexo=='m'|| sexo=='M'){
                    if(idade>24)
                        porc1++;
                }
            }
            else if(med>=6){
                printf("Sua media foi %.2f \n\nALUNO APROVADO\n", med);
                alunos_apr_d++; //Mais um aluno aprovado diretamente
                alunos_apr++;   //Mais um aluno aprovado no total
                if(sexo=='f'|| sexo=='F'){
                    if(idade<20)
                        porc2++;
                }
            }
            else{
                alunos_p5++; //Mais um aluno na p5
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
                if (med<4){
                    printf("Sua media foi %.2f \n\nREPROVADO NA P5\n", med);
                    alunos_rep_p5++; //Mais um aluno reprovado na p5
                    alunos_rep++;    //Mais um aluno reprovado no total
                    if(sexo=='m'|| sexo=='M'){
                        if(idade>24)
                            porc1++;
                    }
                }
                else if(med>=6){
                    printf("Sua media foi %.2f \n\nAPROVADO NA P5\n", med);

                    alunos_rep_p5++; //Mais um aluno aprovado na p5
                    alunos_apr++;   //Mais um aluno aprovado no total
                    if(sexo=='f'|| sexo=='F'){
                        if(idade<20)
                            porc2++;
                    }
                }
                else{
                    alunos_2e++; //Mais um aluno na segunda epoca
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
                    if(med<6){
                        printf("Sua media foi %.2f \n\n REPROVADO NA SEGUNDA EPOCA\n", med);
                        alunos_apr_2e++; //Mais um aluno aprovado na segunda epoca
                        alunos_apr++;    //Mais um aluno aprovado no total
                        if(sexo=='m'|| sexo=='M'){
                            if(idade>24)
                                porc1++;
                        }
                    }
                    else{
                        printf("Sua media foi %.2f \n\n APROVADO NA SEGUNDA EPOCA\n", med);
                        alunos_rep_2e++; //Mais um aluno reprovado na segunda epoca
                        alunos_rep++;    //Mais um aluno reprovado no total
                        if(sexo=='f'|| sexo=='F'){
                            if(idade<20)
                                porc2++;
                        }
                    }
                }
            }//Recebendo o sexo
            printf("Digite o seu sexo \n>M para masculino \n>F para feminino\nX para sair\n");
            fflush(stdin);
            scanf("%c",& sexo);
            system("cls");
            if(sexo=='x' || sexo=='X')
                break;

            //Verificando se eh valido
            while(sexo!='m' && sexo!='M' && sexo!='f' && sexo!='F'){
            printf("Digite um sexo valido\n");
            fflush(stdin);
            scanf("%c",& sexo);
            system("cls");
            }

        }
    }

    porc1=(porc1/alunos_rep)*100;
    porc2=(porc2/alunos_apr)*100;
    //Foise apertado o X
    printf("%d alunos processados no total\n", alunos_tot);
    printf("%d alunos aprovados diretamente\n", alunos_apr_d);
    printf("%d alunos reprovados diretamente\n", alunos_rep_d);
    printf("%d alunos fizeram a prova 5\n", alunos_p5);
    printf("%d alunos reprovados na prova 5\n", alunos_rep_p5);
    printf("%d alunos aprovados na prova 5\n", alunos_apr_p5);
    printf("%d alunos fizeram a segunda epoca\n", alunos_2e);
    printf("%d alunos reprovaram na segunda epoca\n", alunos_rep_2e);
    printf("%d alunos aprovados na segunda epoca\n", alunos_apr_2e);
    printf("%d alunos aprovados no total\n", alunos_apr);
    printf("%d alunos reprovados no total\n", alunos_rep);
    printf("Percentual de homens reprovados com mais de 24 anos de idade: %.1f \n", porc1);
    printf("Percentual de mulheres aprovadas com menos de 20 anos de idade: %.1f \n", porc2);


    return 0;
}
