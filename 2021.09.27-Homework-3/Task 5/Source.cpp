#include<iostream>

using namespace std;

int main(int argc, char* argv[])
{
    int x = 0;
    int i = 0;

    cin >> x;

        for (i = 1; i <= x; i++)
        {
            if (x % i == 0)
            {
                cout << i << " ";
            }
        }

    return EXIT_SUCCESS;
}