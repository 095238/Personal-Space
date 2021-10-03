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
        cout << endl;
    }
    else
    {
        for (i = 1; i <= n; i++)
        {
            int v = i;
            int c = 0;
            while (c < d)
            {
                cout << v << " ";
                c++;
                v++;
            }
            cout << endl;
            d++;
          
        }
    }
    cout << d << endl;

    return EXIT_SUCCESS;
}