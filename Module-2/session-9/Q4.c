#include <stdio.h>

int main()
{
    int cricketScores[4][2] = {
        {180, 175},
        {160, 190},
        {210, 205},
        {175, 180}
    };

    int i, highest;

    for(i = 0; i < 4; i++)
    {
        if(cricketScores[i][0] > cricketScores[i][1])
        {
            highest = cricketScores[i][0];
        }
        else
        {
            highest = cricketScores[i][1];
        }

        printf("Match %d highest score: %d\n", i + 1, highest);
    }

    return 0;
}
