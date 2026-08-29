#include <iostream>
using namespace std;

class Movie
{
public:
    string name;
    int price;

    Movie(string n, int p)
    {
        name = n;
        price = p;
    }

    // Copy Constructor
    Movie(const Movie &m)
    {
        name = m.name;
        price = m.price;
    }

    void display()
    {
        cout << "Movie Name: " << name << endl;
        cout << "Ticket Price: " << price << endl;
    }
};

int main()
{
    Movie movie1("Avengers", 300);

    Movie movie2 = movie1;

    cout << "Original Movie:" << endl;
    movie1.display();

    cout << endl;

    cout << "Copied Movie:" << endl;
    movie2.display();

    return 0;
}
