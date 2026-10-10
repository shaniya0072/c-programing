#include<stdio.h>
int main()
{
    int secret = 7;
    int guess;

    printf("======NUMBER GUESSING GAME======\n");
    printf("guess a number berween 1 and 10:");
    scanf("%d",&guess);
    if(guess == secret)
    {
        printf("correct! you won!\n");
    }
    else if(guess<secret)
    {
        printf("too low! try a bigger number\n");
    }
    else
    {
        printf("too high! try a smaller number\n");
    }
}