#include <stdio.h>

struct FoodItem
{
    char itemName[50];
    float price;
    float rating;
};

int main()
{
    struct FoodItem menu[3] =
    {
        {"Paneer Pizza", 249.00, 4.5},
        {"Veg Burger", 149.00, 4.2},
        {"Masala Dosa", 120.00, 4.6}
    };

    int i;

    printf("Zomato Menu:\n\n");

    for(i = 0; i < 3; i++)
    {
        printf("Item: %s\n", menu[i].itemName);
        printf("Price: Rs. %.2f\n", menu[i].price);
        printf("Rating: %.1f\n", menu[i].rating);
        printf("--------------------\n");
    }

    return 0;
}
