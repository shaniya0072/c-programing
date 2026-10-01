#include<stdio.h>
int main()
{
    int num;
    printf("enter a number");
    scanf("%d",&num);
    if(num % 7 == 0)
    {
        printf("the number is divisible by 7");
    }
    else
    {
        printf("the number is not divisible by 7");
    }
}