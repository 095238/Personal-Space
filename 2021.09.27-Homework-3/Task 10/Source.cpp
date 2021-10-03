#include<iostream>

using namespace std;

int main(int argc, char* argv[])
{
    int a = 0; 
    int b = 0;
    int i = 0;
    
    cin >> a >> b;
    
    for (i = a; i <= b; i++)
    {
        int root = sqrt((double)i);
        if (root * root == i)
            cout << i << " ";
    }

    return EXIT_SUCCESS;
}