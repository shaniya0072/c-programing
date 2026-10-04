#include<stdio.h>
int main()
{
    int age;
    printf("enter your age");
    scanf("%d",&age);
    if(age>=18)
    {
   if(age<=60)
   {
    printf("eligible for open general bank account");
   }
else
{
    printf("not eligible to open general back account due to age 60+");
}
    }
    else
    {
        if(age>=12)
        {
            printf("eligible to open student bank account");
        }
            else
        {
            printf("not eligible to open student bank account ");
        }
    }
}