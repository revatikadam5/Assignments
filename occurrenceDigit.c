#include <stdio.h>

void occurrence(int num)
{
    int d,zero=0,one=0,two=0,three=0,four=0,five=0,six=0,seven=0,eight=0,nine=0;
    while(num>0)
    {
        d = num%10;
        if(d==0)
            zero++;
        if(d==1)
            one++;
        if(d==2)
            two++;
        if(d==3)
            three++;
        if(d==4)
            four++;
        if(d==5)
            five++;
        if(d==6)
            six++;
        if(d==7)
            seven++;
        if(d==8)
            eight++;
        if(d==9)
            nine++;
        num = num/10;
    }
    printf("Zero : %d \nOne : %d \nTwo : %d \nThree : %d \nFour : %d \nFive : %d \nSix : %d \nSeven : %d \nEight : %d \nNine : %d",zero,one,two,three,four,five,six,seven,eight,nine);
}

int main(void)
{
    int num;
    printf("Enter a number\t");
    scanf("%d",&num);
    occurrence(num);
}