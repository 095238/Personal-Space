#include<iostream>

using namespace std;

int main(int argc, char* argv[])
{
    int n = 0;
    int d = 2;

    cin >> n;

    if (n == 0)
    {
        d = 1;
    }
    else
    {
        for (int i = 0; i < n - 1; ++i)
        {
            d = d * 2;
        }
    }
    cout << d << endl;

    return EXIT_SUCCESS;
}