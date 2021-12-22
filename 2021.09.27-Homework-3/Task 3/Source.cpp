#include<iostream>
#include<iomanip>

using namespace std;

int main(int argc, char* argv[])
{
	int n = 0;
	cin >> n;
	for (int i = 1, r = 1, c = 0; i <= n; ++i)
	{
		cout << setw(2) << i;
		++c;
		if (c == r)
		{
			cout << endl;
			c = 0;
			++r;
		}
		else
		{
			cout << " ";
		}
	}
	return EXIT_SUCCESS;
}