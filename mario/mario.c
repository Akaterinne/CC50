#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int line, alt, col, space;
    do
    {
        alt = get_int("Altura: ");
    }
    while (alt < 1 || alt > 8);

    for (line = 0; line < alt; line++)
    {
        for (space = 0; space < (alt - line - 1); space++)
        {
            printf(" ");
        }
        for (col = 0; col <= line; col++)
        {
            printf("#");
        }
        printf("\n");
    }
}