#include <stdio.h>

float calculateAverage(int orders[])
{
    int sum = 0;
    int i;

    for(i = 0; i < 7; i++)
    {
        sum = sum + orders[i];
    }

    return sum / 7.0;
}

int main()
{
    int orders[7] = {200, 150, 300, 250, 180, 220, 350};
    float average;

    average = calculateAverage(orders);

    printf("Average weekly spend: %.2f", average);

    return 0;
}
