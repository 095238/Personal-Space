#include<iostream>

using namespace std;

int main(int argc, char* argv[])
{
	int a = 0;
	int b = 0;
	cin >> a >> b;
	int c = a;
	a = b;
	b = c;
	cout << a << " " << b << endl;
	return EXIT_SUCCESS;
}