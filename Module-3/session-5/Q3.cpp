#include <iostream>
using namespace std;

class ProductSearch
{
public:
    void searchProduct(string productName)
    {
        cout << "Searching Product: " << productName << endl;
    }

    void searchProduct(string productName, string category)
    {
        cout << "Searching Product: " << productName << endl;
        cout << "Category: " << category << endl;
    }
};

int main()
{
    ProductSearch search;

    search.searchProduct("Mobile");

    cout << endl;

    search.searchProduct("Laptop", "Electronics");

    return 0;
}
