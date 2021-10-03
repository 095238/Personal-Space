#include<iostream>

using namespace std;

int main(int argc, char* argv[])
{
    int N = 0;
    int i = 0;
    int x = 0;
    int n = 0;
    int p = 0;
    int o = 0;

    cin >> N;

    for (i = 1; i <= N; i++)
    {
        cin >> x;
        if (x == 0)
        {
            n++;
        }
        else if (x > 0)
        {
            p++;
        }
        else
        {
            o++;
        }
    }

    cout << n << " " << p << " " << o << endl;

    return EXIT_SUCCESS;
}
