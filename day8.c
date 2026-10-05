#include<stdio.h>
int main()
{
    int units;
    float bill;
    printf("enter electricity units consumed:" );
    scanf("%d",&units);
    if(units < 0)
    {
        printf("invalid units");
    }
    else if(units <= 100)
    {
        bill = 100 * 5;
        printf("electricity bill = %.2f",bill);

    }
    else if(units <= 200)
    {
        bill = 100 * 5 + (units - 100) * 7;
        printf("electricity bill = %.2f", bill);
    }
    else{
        bill = 100 * 5 + 100 * 7 + (units - 200) * 10;
        printf("electricity bill = %.2f",bill);
    }
    
}