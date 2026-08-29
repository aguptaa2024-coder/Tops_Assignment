#include <iostream>
using namespace std;

class Song
{
private:
    string title;
    string artist;

public:
    void setTitle(string t)
    {
        title = t;
    }

    string getTitle()
    {
        return title;
    }

    void setArtist(string a)
    {
        artist = a;
    }

    string getArtist()
    {
        return artist;
    }
};

int main()
{
    Song s1;

    s1.setTitle("Believer");
    s1.setArtist("Imagine Dragons");

    cout << "Title: " << s1.getTitle() << endl;
    cout << "Artist: " << s1.getArtist() << endl;

    s1.setTitle("Perfect");

    cout << "Updated Title: " << s1.getTitle() << endl;

    return 0;
}


