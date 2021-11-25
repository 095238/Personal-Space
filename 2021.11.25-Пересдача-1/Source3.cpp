#include<iostream>;

using namespace std;

int main(int argc, char* argv[])
{
    int x1 = 0;
    int x2 = 0;

    cin >> x1 >> x2;

    int max = 0;
    int min = 0;

    if (x1 > x2)
    {
        max = x1;
        min = x2;
    }
    else
    {
        max = x2;
        min = x1;
    }

    int NOK = 0;
    int p = 0;
    int i = 1;
    while (NOK == 0)
    {
        p = i * max;

        if (p % min == 0)
        {
            NOK = p;
            cout << NOK << endl;
        }

        ++i;
    }

    return EXIT_SUCCESS;
}