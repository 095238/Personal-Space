#include<iostream>

using namespace std;

int main(int argc, char* argv[])
{
    int n = 0;
    int k = 0;
    int K = 1;
    int D = 1;
    int c = 0;
    int N = 1;

    cin >> n >> k;

    int d = n - k;

    if (n == 0)
    {
        N = 1;
    }
    else
    {
        for (int i = 1; i <= n - 1; ++i)
        {
            N = N * (i + 1);
        }
    }

    if (k == 0)
    {
        K = 1;
    }
    else
    {
        for (int i = 1; i <= k - 1; ++i)
        {
            K = K * (i + 1);
        }
    }

    if (d == 0)
    {
        D = 1;
    }
    else
    {
        for (int i = 1; i <= d - 1; ++i)
        {
            D = D * (i + 1);
        }
    }

    c = N / (K * D);

    cout << c << endl;

    return EXIT_SUCCESS;
}