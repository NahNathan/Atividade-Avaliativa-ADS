    /*⠀⠀
    Feito por Nathan Rodrigues dos Santos
    Análise e Desenvolvimento de Sistemas - 1 Período
    nathanrodriguessantos3@gmail.com⠀
    02/05/22
    1610247169⠀
⠀   ⠀⠀
⠀⠀  Exercício * 13 *⠀⠀⠀⠀⠀⠀⠀
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
    float cel=0.0, fah=0.0;

    //Recebendo a temperatura
    printf("Bom dia, digite o um valor em graus celcius \n");
    fflush(stdin);
    scanf("%f",& cel);
    system("cls");

    //Verificando se é válido
    while(cel< -273.15){
        printf("Valor invalido, digite novamente \n");
        fflush(stdin);
        scanf("%f",& cel);
        system("cls");
    }

    //Calculando e mostrando
    fah=(9/5)*(cel+32);
    printf("%.2f graus celsius correspondem a %.2f graus fahrenheit", cel, fah);

    return 0;
}
