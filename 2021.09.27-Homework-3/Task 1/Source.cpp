#include<iostream>

using namespace std;

int main(int argc, char* argv[])
{
    int n = 0;
    int d = 1;
    int s = 0;

    cin >> n;

    if (n == 0)
    {
        d = 1;
    }
    else
    {
        for (int i = 0; i < n - 1; ++i)
        {
            ++s;
            d = d * (s + 1);
        }
    }
    cout << d << endl;

    return EXIT_SUCCESS;
}