#include <iostream>

using namespace std;

int main()
{
    string word;
    cin >> word;

    bool change = true;
    for (size_t i = 1; i < word.length(); ++i)
    {
        if (word[i] >= 'a')
        {
            change = false;
            break;
        }
    }

    if (change)
    {
        for (size_t i = 0; i < word.length(); ++i)
        {
            if (word[i] >= 'a')
            {
                word[i] -= ('a' - 'A');
            }
            else
            {
                word[i] += ('a' - 'A');
            }
        }
    }

    cout << word << endl;
    return 0;
}