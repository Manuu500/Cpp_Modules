#include <iostream>
#include <string>

using namespace std;

int main(int argc, char **argv)
{
    if (argc < 2)
    {
        cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
    }

    for(int i = 1; i < argc; i++)
    {
        string c = argv[i];
        for(size_t j = 0; j < c.length(); j++)
        {
            cout << (char)std::toupper(c[j]);
        }
    }
    cout << endl;
    return (0);
}