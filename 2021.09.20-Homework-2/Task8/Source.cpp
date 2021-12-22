#include<iostream>

using namespace std;

int main(int argc, char* argv[])
{
    int a = 0;
    int b = 0;
    int c = 0;
    int d = 0;

    cin >> a >> b >> c;

    if (a > b)
    {
        d = a;
        a = b;
        b = d;
   }

    if (b > c)
    {
        d = b;
        b = c;
        c = d;
    }

    if ((a + b > c) && (a + c > b) && (b + c > a) && (a != 0) && (b != 0) && (c != 0))
    {
        if (c * c == a * a + b * b)
        {
            cout << "right";
        }
        else if (c * c < a * a + b * b)
        {
            cout << "acute";
        }
        else
        {
            cout << "obtuse";
        }   
    }
    else
        cout << "impossible";

    return EXIT_SUCCESS;
}