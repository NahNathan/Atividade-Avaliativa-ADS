    /*⠀⠀
    Feito por Nathan Rodrigues dos Santos
    Análise e Desenvolvimento de Sistemas - 1 Período
    nathanrodriguessantos3@gmail.com⠀
    02/05/22
    1610247169⠀
⠀   ⠀⠀
⠀⠀  Exercício * 12 *⠀⠀⠀⠀⠀⠀⠀
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
    float raio=0.0, area=0.0;

    //Recebendo o raio
    printf("Bom dia, digite o valor do raio \n");
    fflush(stdin);
    scanf("%f",& raio);
    system("cls");

    //Verificando se é válido
    while(raio<=0){
        printf("Valor invalido, digite novamente \n");
        fflush(stdin);
        scanf("%f",& raio);
        system("cls");
    }

    //Calculando e mostrando a area
    area=3.14159*(raio*raio);
    printf("A area do circulo eh (aproximadamente) %.2f \n", area);

    return 0;
}
