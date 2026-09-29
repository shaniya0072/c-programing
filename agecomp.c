#include<stdio.h>
int main()
{
    int age;
    printf("enter your age:");
    scanf("%d",& age);
    printf("age > 18 : %d\n" ,age > 18);
    printf("age < 18 : %d\n" ,age < 18);
    printf("age == 18 : %d\n", age == 18);
}