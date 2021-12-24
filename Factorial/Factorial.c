#include<stdio.h>
#include<math.h>
#include <emmintrin.h>
int main()
{
    while (1)
    {
        int input;
        printf("Please input your number: ");
        scanf("%d", &input);
        long double total = 1;
        for (int i = 1; i <= input ; i++)
        {
            total *= i;
        }
        printf("%.0Lf\n", total);
        
    }
    
    
    return 0;
}
