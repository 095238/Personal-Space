#include<iostream>

using namespace std;

int main(int argc, char* argv[])
{
    int a = 0;
    int b = 0;
    int c = 0;
    int d = 0;

    cin >> a >> b >> c >> d;

    if ((c == 0) && (d == 0))
    {
         cout << "NO" << endl;
    }
    else if ((a == 0) && (b == 0))
    {
         cout << "INF" << endl;;
    }
    else if (a == 0)
    {
         cout << "NO" << endl;
    }
    else if (c*b == d*a) 
    {
         cout << "NO" << endl;
     }
    else if ((-b/a<0) || not (-b % a ==0))
    {
        cout << "NO" << endl;
    }
    else
    {
        cout << -b/a << endl;
    }
   
     return EXIT_SUCCESS;
}