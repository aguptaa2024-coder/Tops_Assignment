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

class Podcaster : public SocialMediaUser
{
public:
    string podcastName;

    Podcaster(string u, int f, string p) : SocialMediaUser(u, f)
    {
        podcastName = p;
    }

    void publishEpisode(string episodeTitle)
    {
        cout << "Episode " << episodeTitle
             << " published on " << podcastName << endl;
    }
};

int main()
{
    Podcaster p1("Aman", 2000, "Tech Talk");

    p1.publishEpisode("Future of AI");

    return 0;
}
