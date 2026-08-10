#include <stdio.h>
#include <string.h>

void addToCart(char cart[][20], int *size, char product[])
{
    strcpy(cart[*size], product);
    *size = *size + 1;
}

int main()
{
    char cart[10][20] = {"Mobile"};
    int size = 1;
    int i;

    addToCart(cart, &size, "Headphones");

    printf("Updated Cart:\n");

    for(i = 0; i < size; i++)
    {
        printf("%s\n", cart[i]);
    }

    return 0;
}
