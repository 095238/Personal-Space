#include <iostream>

using namespace std;

int main(int argc, char* argv[])
{
	double n = 0;
	unsigned long long v = 0;
	
	cin >> n;

	v = *((long long*)&n);
	cout << v << endl;

	for (int i = 0; i < sizeof(double) * 8; ++i)
	{
		unsigned long long b = v;

		b = b << i;
		b = b >> (sizeof(double) * 8 - 1);
		cout << b;

		if ((i + 1) % 8 == 0)
		{
			cout << " ";
		}
	}
	return EXIT_SUCCESS;
}