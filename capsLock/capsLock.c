#include<stdio.h>
#include <ctype.h>
#include<string.h>
#include<stdbool.h>
int main()
{
    char text[200];
    bool run = true;
    
    while (run)
    {
        printf("\nPlease enter your text: ");
        gets(text);

        for (int i = 0; i < strlen(text); i++)
        {
            if (islower(text[i]))
            {
                printf("%c",toupper(text[i]));
            }
            else
            {
                printf("%c",tolower(text[i]));
            }
        }
    }
     
    return 0;
}
