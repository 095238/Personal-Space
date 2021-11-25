#include<iostream>;

using namespace std;

int main(int argc, char* argv[])
{
	int N = 0;

	cin >> N;

	int a[N] = { 0 };

	int max = 0;
	int min = 1001;
	for (int i = 0; i < N; ++i)
	{
		cin >> a[i];

		if (a[i] > max)
		{
			max = a[i];
		}

		if (a[i] < min)
		{
			min = a[i];
		}
	}

	for (int i = 0; i < N; ++i)
	{
		if (a[i] == max)
		{
			a[i] = min;
		}

		cout << a[i] << " ";
	}

	cout << endl;

	return EXIT_SUCCESS;
}