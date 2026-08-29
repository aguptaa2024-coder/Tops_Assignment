#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    ofstream file("wishlist.txt");

    string product;
    float price;

    for (int i = 1; i <= 3; i++)
    {
        cout << "Enter product name: ";
        cin >> product;

        cout << "Enter price: ";
        cin >> price;

        file << product << " " << price << endl;
    }

    file.close();

    ifstream readFile("wishlist.txt");

    cout << endl;
    cout << "Wishlist Products:" << endl;

    while (readFile >> product >> price)
    {
        cout << "Product: " << product << endl;
        cout << "Price: " << price << endl;
        cout << endl;
    }

    readFile.close();

    return 0;
}
