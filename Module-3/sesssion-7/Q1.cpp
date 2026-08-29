#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    ofstream file("my_fav_songs.txt");

    file << "Believer" << endl;
    file << "Perfect" << endl;
    file << "Shape of You" << endl;
    file << "Let Me Love You" << endl;
    file << "On My Way" << endl;

    file.close();

    cout << "Songs saved successfully!" << endl;

    return 0;
}
