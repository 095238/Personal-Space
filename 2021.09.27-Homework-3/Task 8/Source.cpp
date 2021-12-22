#include<iostream>

using namespace std;

int main(int argc, char* argv[])
{
    int N = 0;
    int S = 0;
    int x = 0;

    cin >> N;

    for (int i = 0; i < N; ++i)
    {
        cin >> x;
        S += x;
    }

    cout << S << endl;

    return EXIT_SUCCESS;
}