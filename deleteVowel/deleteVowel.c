#include<stdio.h>
#include<string.h>
#include<stdbool.h>
int main()
{
    char text[200];
    bool run = true;
    // char vowel[10] = {'a','e','i','o','u','A','E','I','O','U'};
    while(run)
    {
        printf("\nPlease enter your text: ");
        gets(text);
        int lenght=  strlen(text);
        for (int i = 0; i < lenght ; i++){
            if (text[i] == 'a' ||
                text[i] == 'e' ||
                text[i] == 'i' ||
                text[i] == 'o' ||
                text[i] == 'u' ||
                text[i] == 'A' ||
                text[i] == 'E' ||
                text[i] == 'I' ||
                text[i] == 'O' ||
                text[i] == 'U'){continue;}

            else {printf("%c",text[i]);} 
        }
    }
    
    return 0;
}
