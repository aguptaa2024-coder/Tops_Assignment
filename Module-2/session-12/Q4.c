#include <stdio.h>

struct InstaProfile
{
    char username[30];
    int followers;

    struct Bio
    {
        char description[100];
        int age;
    } bio;
};

int main()
{
    struct InstaProfile profile =
    {
        "ashutosh",
        5000,
        {"Coding enthusiast and tech lover", 17}
    };

    printf("Instagram Profile:\n");
    printf("Username: %s\n", profile.username);
    printf("Followers: %d\n", profile.followers);
    printf("Bio: %s\n", profile.bio.description);
    printf("Age: %d\n", profile.bio.age);

    return 0;
}
