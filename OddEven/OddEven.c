#include<stdio.h>
int main()
{
    int value1,value2;
    printf("Please enter value :\n");
    scanf("%d %d",&value1,&value2);
    int arr[2] = {value1, value2};

    printf("result:\n");
    for (int j = 0; j < 2; j++)
        {
            switch (arr[j])
            {
                case 1: printf("one\n");
                break;
                case 2: printf("two\n");
                break;
                case 3: printf("three\n");
                break;
                case 4: printf("four\n");
                break;
                case 5: printf("five\n");
                break;
                case 6: printf("six\n");
                break;
                case 7: printf("seven\n");
                break;
                case 8: printf("eight\n");
                break;
                case 9: printf("nine\n");
                break;
                case 10: printf("ten\n");
                break;
    
                default: printf("No result\n");
                break;
            }
        }

        for (int k = 0; k < 2; k++)
        {
            if (arr[k] % 2 == 0)
            {
                printf("even\n");
            }
            else
            {
                printf("odd\n");
            }
        }

    return 0;
}
