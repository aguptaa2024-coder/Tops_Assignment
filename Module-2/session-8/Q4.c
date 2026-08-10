#include <stdio.h>

void formatPrice(int price)
{
    printf("?%d\n", price);
}

int main()
{
    int price1 = 1599;
    int price2 = 2499;
    int price3 = 999;

    formatPrice(price1);
    formatPrice(price2);
    formatPrice(price3);

    return 0;
}
