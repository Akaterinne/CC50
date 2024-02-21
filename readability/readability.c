#include <stdio.h>
#include <cs50.h>
#include <math.h>

int main(void)
{
    int cont_letters = 0;
    int cont_words = 1; // 1
    int cont_phrases = 0;

    char *text = get_string("Text: ");

    for(int i = 0; text[i] != '\0'; i++)
    {
        // count letters
        if ((text[i] >= 'a' && text[i] <= 'z') || (text[i] >= 'A' && text[i] <= 'Z'))
        {
            cont_letters++;
        }
        // count words
        if (text[i] == ' ')
        {
            cont_words++;
        }
        //count phrases
        if (text[i] == '.' || text[i] == '!' || text[i] == '?')
        {
            cont_phrases++;
        }
    }
    float L = (cont_letters * 100) / (float) cont_words; // average number of letters per 100 words
    float S = (cont_phrases *100) / (float) cont_words; // average number of pharases per 100 words

    int col_index = round(0.0588 * L - 0.296 * S - 15.8);
    if (col_index < 1)
        printf("Before Grade 1\n");
    else if (col_index <= 15)
        printf("Grade %i\n", col_index);
    else
        printf("Grade 16+\n");
}
