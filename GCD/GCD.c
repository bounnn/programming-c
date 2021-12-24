#include<stdio.h>

int gcd(int a,int b){
  int gcdValue[100] = {0};
  int n = 0;
  for (int i = 1; i <= a || i <= b; i++)
  {
    if ((a%i) == 0 && (b%i) == 0)
    {
      gcdValue[n] = i;
      n++;
    }
  }
  //find the max number of array
  int max = gcdValue[0];
  for (int j = 0; j < sizeof(gcdValue)/sizeof(gcdValue[0]); j++)
  {
    if (gcdValue[j]>max)
    {
      max = gcdValue[j];
    }
  }
  printf("GCD = %d\n",max);
}
int main()
{
  while (1)
  {
    int value1,value2;
    printf("Please enter value 1:");
    scanf("%d",&value1);
    printf("Please enter value 2:");
    scanf("%d",&value2);

    gcd(value1,value2);
  }
  
  return 0;
}
