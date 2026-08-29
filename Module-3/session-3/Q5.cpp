#include <iostream>
#include <fstream>
using namespace std;

class Playlist
{
public:
    string name;

    Playlist(string n)
    {
        name = n;
        cout << "Playlist Created: " << name << endl;
    }

    ~Playlist()
    {
        ofstream file("autosave.txt");

        file << name;

        file.close();

        cout << "Playlist saved automatically!" << endl;
    }
};

int main()
{
    Playlist p1("My Favourite Songs");

    return 0;
}
