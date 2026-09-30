#include<stdio.h>
int main()
{
    int a,b;
    printf("enter two numbers");
    scanf("%d %d",&a,&b);
    printf("%d", a>10 || b>10 );
}