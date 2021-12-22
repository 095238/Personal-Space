#include<iostream>

using namespace std;

int main(int argc, char* argv[])
{
    int k = 0;

    int m = 0;

    int n = 0;

    int d = 0;

    cin >> k >> m >> n;
    
    if (n <= k)
    {
        d = m * 2;
    }
    else if (n * 2 % k == 0)
    {
        d = m * (n * 2 / k);
    }
    else
    {
        d = m * (1 + (n * 2 / k));
    }

    cout << d << endl;

    return EXIT_SUCCESS;
}