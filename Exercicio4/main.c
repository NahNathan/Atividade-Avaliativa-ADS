    /*⠀⠀
    Feito por Nathan Rodrigues dos Santos
    Análise e Desenvolvimento de Sistemas - 1 Período
    nathanrodriguessantos3@gmail.com⠀
    02/05/22
    1610247169⠀
⠀   ⠀⠀
⠀⠀  Exercício * 04 *⠀⠀⠀⠀⠀⠀⠀
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
    float face, area, perim;
    face=area=perim=0.0;

    //Recebendo o valor da face
    printf("Bom dia, digite o valor da face do quadrado\n");
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

    return 0;
}
