#include<iostream>

using namespace std;

int main(int argc, char* argv[])
{
    int M = 0;
    int N = 0;
    int x = 0;
    int y = 0;
    
    cin >> M >> N >> x >> y;

    if (not(x == 1))
    {
        cout << x - 1 << " " << y << endl;
    }
    
    if (not(x == M))
    {
        cout << x + 1 << " " << y << endl;
    }
    
    if (not(y == 1))
    {
        cout << x << " " << y - 1 << endl;
    }
   
    if (not(y == N))
    {
        cout << x << " " << y + 1;
    }
    
    return EXIT_SUCCESS;
}