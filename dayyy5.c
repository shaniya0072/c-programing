#include<stdio.h>
int main()
{
    int a,b,c;
    printf("enter three numbers");
    scanf("%d %d %d",&a,&b,&c);
    if(a<b && a<c)
    {
        printf("first one is the smallest");
    }
    if(b<a && b<c )
    {
        printf("second one is the smallest");
    }
    else
    {
        printf("third one is the smallest");
    }
}