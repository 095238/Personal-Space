#include<iostream>

using namespace std;

int main(int argc, char* argv[])
{
	int x = 0;
	cin >> x;
	int a = x % 10;
	int b = (x % 100) / 10;
	int c = x / 100;
	cout << a+b+c << endl;
	return EXIT_SUCCESS;
}