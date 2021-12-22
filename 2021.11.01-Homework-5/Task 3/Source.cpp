#include <iostream>

using namespace std;

int main(int argc, char* aargv[])
{
	int n = 0;
	int r = 0;
	unsigned int ab = 1; 
	
	cin >> n;

	r = n;
	if (n < 0)
	{
		r = ~n;
		int i = 0;
		while ((ab != 0) && (i < sizeof(int) * 8))
		{
			unsigned int cb = 0;
			cb = r << (sizeof(int) * 8 - (i + 1));
			cb = cb >> (sizeof(int) * 8 - 1);
			cb = cb << i;
			r = r >> i + 1;
			ab = cb & ab;
			if (ab != 0)
			{
				r = r >> i + 1;
				r = r << i + 1;
			}
			ab = ab << 1;
			++i;
		}
	}
	cout << r << endl;
	
	return EXIT_SUCCESS;
}