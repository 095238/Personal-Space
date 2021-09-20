#include<iostream>

using namespace std;

int main(int argc, char* argv[])
{
	int a = 0;
	int b = 0;
	cin >> a >> b;
	int c = a / b;
	c = ((c + 2) / (c + 1)) % 2;
	int d = (c + 1) % 2;
	cout << a * c + b * d<< endl;
	return EXIT_SUCCESS;
}