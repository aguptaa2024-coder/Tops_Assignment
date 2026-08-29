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

class InstagramInfluencer : public SocialMediaUser
{
public:
    InstagramInfluencer(string u, int f)
        : SocialMediaUser(u, f)
    {
    }

    void postStory(string storyTitle)
    {
        cout << username << " posted a new story: "
             << storyTitle << endl;
    }
};

int main()
{
    InstagramInfluencer i1("Priya", 8000);

    i1.postStory("My Vacation");

    return 0;
}
