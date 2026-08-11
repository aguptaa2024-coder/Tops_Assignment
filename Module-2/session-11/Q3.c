#include <stdio.h>

int main()
{
    int orders[5] = {200, 350, 150, 500, 250};
    int *ptr;
    int i;

    ptr = orders;

    for(i = 0; i < 5; i++)
    {
        printf("Order Amount: %d\n", *(ptr + i));
        printf("Memory Address: %p\n\n", (void *)(ptr + i));
    }

    return 0;
}
