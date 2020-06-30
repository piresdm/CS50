#include <stdio.h>
#include <cs50.h>
#include <string.h>
#include <ctype.h>
#include <math.h>

int main(void)
{

    //Receiving the text
    string text = get_string("Type the text here: ");

    //Initializing the variables
    int letters, words, sentences;
    letters = 0;
    words = 0;
    sentences = 0;

    //Loop to count letters,words and sentences.
    for (int i = 0, len = strlen(text); i < len ; i++)
    {
        //counting letters
        if (isalpha(text[i]))
        {
            letters++;
        }

        //counting words
        if ((i == 0 && text[i] != ' ') || (i != len - 1 && text[i] == ' ' && text[i + 1] != ' '))
        {
            words++;
        }

        //counting sentences
        if (text[i] == '.' || text[i] == '!' || text[i] == '?')
        {
            sentences++;
        }
    }

    //Calculating l and s to find result of index formula
    float l = (letters / (float) words) * 100;
    float s = (sentences / (float) words) * 100;
    int index = round(0.0588 * l - 0.296 * s - 15.8);

    //Showing the results to the users
    if (index < 1)
    {
        printf("Before Grade 1\n");
    }
    else if (index >= 16)
    {

        printf("Grade 16+\n");
    }
    else
    {
        printf("Grade %i\n", index);
    }
}