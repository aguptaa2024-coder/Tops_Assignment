#include <stdio.h>

struct MovieShow
{
    char movie[50];
    int screen;

    struct Time
    {
        int hours;
        int minutes;
    } time;
};

int main()
{
    struct MovieShow show =
    {
        "Chhaava",
        3,
        {18, 30}
    };

    printf("Movie: %s, Screen: %d, Time: %02d:%02d",
           show.movie,
           show.screen,
           show.time.hours,
           show.time.minutes);

    return 0;
}
