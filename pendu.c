#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>
#include <string.h>

char readChar();

int main()
{

    char secretWord[] = "HELLO";
    int maxCount = 0;
    int count = 10;

    while(count > maxCount)
    {
        char userInput;
        userInput = readChar();
        char *suiteChaine = NULL;
        suiteChaine = strchr(secretWord, userInput);
            
        if (suiteChaine != NULL) 
        {
            printf("Bravo !!");
            printf("Il te reste %d coups !!", count);
        }
        else
        {
            printf("Pas bravo !!");
            count--;
            printf("Il te reste %d coups !!", count);
        }
    }
    
    printf("PERDU !!!!!!");
}


/*
*function readChar
*read an user input (only one character) 
*return character --> char
*/
char readChar()
{
    char character = 0;
    character = getchar();
    character = toupper(character);
    while(getchar() != '\n');

    return character;
}