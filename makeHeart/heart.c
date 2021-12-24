#include <stdio.h>

int main()
{
    while (1)
    {
        int size;
        printf("Please enter the size of heart: ");
        scanf("%d",&size);
        printf("\n");
        for (int a = size / 2; a <= size; a = a + 2)
        {
            for (int b = 1; b <= size - a; b = b + 2)
            {
                printf(" ");
            }
            for (int b = 1; b <= a; b++)
            {
                printf("*");
            }
            for (int b = 1; b <= size - a; b++)
            {
                printf(" ");
            }
            for (int b = 1; b <= a; b++)
            {
                printf("*");
            }

            printf("\n");
        }
        for (int a = size; a >= 0; a--)
        {
            for (int b = a; b <= size; b++)
            {
                printf(" ");
            }
            for (int b = 1; b <= ((a * 2)-1); b++)
            {
                printf("*");
            }
            printf("\n");
        }
    }

    return 0;
}
