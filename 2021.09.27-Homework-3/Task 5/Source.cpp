#include<iostream>

using namespace std;

int main(int argc, char* argv[])
{
    int x = 0;
    int d = 0;

    cin >> x;

    for (int i = 0; i < x; ++i)
    {
        ++d;
        if (x % d == 0)
        {
            cout << d << " ";
        }
    }

    return EXIT_SUCCESS;
}