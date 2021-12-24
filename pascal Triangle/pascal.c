#include<stdio.h>
int factorial(int x){
    int total = 1;
    if (x <= 0)
    {
        return total = 1;
    }
    else
    {
        for (int i = 1; i <= x; i++)
        {
            total *= i;
        }
    }
    return total;
}
int main()
{
    int result;
    int n;
    printf("Please enter number: ");
    scanf("%d",&n);
    printf("result: \n\n");
    for (int i = 0; i <= n; i++)
    {
        for (int space = 1; space <= n - i; space++)
        {
            printf("  ");
        }
        
        for (int k = 0; k <= i; k++)
        {
            result = factorial(i) / (factorial(k) * factorial(i-k));
            printf("%4d",result);

        }
        printf("\n");

    }
    
    
    
    return 0;
}
