#include <iostream>
using namespace std;

class SocialMediaUser
{
public:
    string username;
    int followers;

    SocialMediaUser(string u, int f)
    {
        username = u;
        followers = f;
    }
};

class YouTuber : public SocialMediaUser
{
public:
    string channelName;

    YouTuber(string u, int f, string c) : SocialMediaUser(u, f)
    {
        channelName = c;
    }
};

class GamingYouTuber : public YouTuber
{
public:
    GamingYouTuber(string u, int f, string c)
        : YouTuber(u, f, c)
    {
    }

    void streamGame(string gameName)
    {
        cout << username << " is now streaming "
             << gameName << " on " << channelName << endl;
    }
};

int main()
{
    GamingYouTuber g1("Ashutosh", 10000, "Ashutosh Gaming");

    g1.streamGame("Free Fire");

    return 0;
}
