#include <stdio.h>
#include <math.h>
int main()
{
    while (1)
    {
        int input, lastNumber, pos, total = 0;
        printf("Please enter number 5 digits: ");
        scanf("%d", &input);
        for (int i = 0; i < 5; i++)
        {
            pos = pow(10, i);
            lastNumber = input / pos % 10;
            total += lastNumber;
        }
        printf("%d\n", total);
    }

    return 0;
}
