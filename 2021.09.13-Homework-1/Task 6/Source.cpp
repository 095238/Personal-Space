#include<iostream>

using namespace std;

int main(int argc, char* argv[])
{
	int x = 0;
	cin >> x;
	x = x + 1;
	int y = x % 2;
	cout << x + y << endl;
	return EXIT_SUCCESS;
}