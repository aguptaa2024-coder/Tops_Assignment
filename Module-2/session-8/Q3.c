#include <stdio.h>

void increaseFollowersByValue(int followers)
{
    followers = followers + 1000;
    printf("Inside Value Function: %d\n", followers);
}

void increaseFollowersByReference(int *followers)
{
    *followers = *followers + 1000;
}

int main()
{
    int followers = 5000;

    increaseFollowersByValue(followers);
    printf("After Pass by Value: %d\n" ,followers);

    increaseFollowersByReference(&followers);
    printf("After Pass by Reference: %d\n", followers);

    return 0;
}
