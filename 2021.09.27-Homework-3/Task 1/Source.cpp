#include<iostream>

using namespace std;

int main(int argc, char* argv[])
{
    int n = 0;
    int d = 1;
    int i = 0;

    cin >> n;

    if (n == 0)
    {
        d = 1;
    }
    else
    {
        for (i = 1; i <= n-1; i++)
        {
            d = d * (i+1);
        }
    }
    cout << d << endl;

    return EXIT_SUCCESS;
}