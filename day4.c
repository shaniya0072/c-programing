#include<stdio.h>
int main()
{
    int age,marks;
    printf("enter your age");
    scanf("%d",&age);
    printf("enter your marks");
    scanf("%d",&marks);
    printf("%d", age>=18 && marks>=40);
}