#include<stdio.h>
int main()
{
    float percentage;
    printf("enter percentage");
    scanf("%f",&percentage);
    if(percentage>100 || percentage < 0)
    {
        printf("invalid percentage");
    
    }
    else if (percentage>=90)
    {
      printf("grade A") ; /* code */
    }
    else if(percentage>=80)
    {
        printf("grade B");
    }
    else if(percentage>=70)
    {
        printf("grade C");
    }
    else if(percentage>60)
    {
        printf("grade D");
    }
    else
    {
        printf("fail");
    }
    
    
}