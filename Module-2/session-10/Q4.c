#include <stdio.h>
#include <string.h>

int main()
{
    char name[50];
    char username[6];
    int length;
    int i;

    printf("Enter your full name: ");
    fgets(name, 50, stdin);

    name[strcspn(name, "\n")] = '\0';

    length = strlen(name);

    if(length <= 5)
    {
        strcpy(username, name);
    }
    else
    {
        for(i = 0; i < 5; i++)
        {
            username[i] = name[i];
        }

        username[5] = '\0';
    }

    printf("Generated Username: %s", username);

    return 0;
}

