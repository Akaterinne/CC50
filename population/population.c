#include <stdio.h>
#include <cs50.h>

int main(void)
{
    int start, end;
    int years = 0;

    do
    {
        //Solicitando o valor inicial ao usuário
        start = get_int("Start size: ");
    }
    while (start < 9);

    do
    {
        //Solicitando o valor final ao usuário
        end = get_int("End size: ");
    }
    while (end < start);

    if (start == end)
    {
        printf("Years: 0\n");
    }
    else
    {
        do
        {
            //Calcule o número de anos até o limite
            start = start  + (start / 3) - (start / 4);
            years++;
        }
        while (start < end);
        //Imprimindo o número de anos
        printf("Years: %i\n", years);
    }
}