#include<stdio.h>

int main()
{
    char s1[30],s2[30];
    int i=0,j=0;
    printf("Enter the string: ");
    gets(s1);

    while (s1[i]!='\0')
    {
        i++;
    }
    while (i>0)
    {
        s2[j] = s1[--i];
        ++j;
    }

    for (i = 0; s2[i]!='\0'; i++)
    {
        if (s2[i+1] == ' ' || s2[i+1] == '\0')
        {
            for (j=i ; j >= 0 && s2[j] != ' '; j--)
            {
                printf("%c", s2[j]);
            }
            printf(" ");
        }
        
    }
    
    
    return 0;
}
