#include <stdio.h>

int main(void)
{
    long long int num,i,j;
    int sum=0;
    printf("Enter a number\t");
    scanf("%lld",&num);
    for(j=1;j<=num;j++)
    {
        for(i=1;i<j;i++)
        {
            if(j%i == 0)
            {
                sum+=i;
            }
        }
        if(sum == j)
            printf("%lld\n",j);
            sum = 0;
    }
}