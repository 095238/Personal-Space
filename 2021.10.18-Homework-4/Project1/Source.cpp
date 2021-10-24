#include<iostream>

using namespace std;

int main(int argc, char* argv[])
{
	const int N = 5;   //здесь может быть другое число
	
	cout << N << endl;
	
// #1 и #2
  
	int a[N] = { 0 };

    for (int i = 0; i < N; ++i)
    {
	    cin >> a[i];
    }

// #3
{
	cout << "ARRAY: ";
	for (int i = 0; i < N; ++i)
	{
		cout << a[i] << " ";
	}
	cout << endl;
}

// #4
{
	cout << "EVEN: ";
	for (int i = 0; i < N; ++i)
	{
		if (a[i] % 2 == 0)
		{
			cout << a[i] << " ";
		}
	}
	cout << endl;
}
// #5
{
	int sum = 0;
	for (int i = 0; i < N; ++i)
	{
		sum += a[i];
	}
	cout << "SUM: " << sum << endl;
}
// #6
{
	int pr = 1;
	for (int i = 0; i < N; ++i)
	{
		if (a[i] < 0)
		{
			pr *= a[i];
		}
		
	}
	cout << "PRODUCT OF NEGATIVE: " << pr << endl;
}
//#7
{
	int Imin = 0;
	int Emin = a[0];
	for (int i = 1; i < N; ++i)
	{
		if (a[i] < Emin)
		{
			Imin = i;
			Emin = a[i];
		}
	}
	cout << "FIRST MIN INDEX: " << Imin << endl;
}
// #8
{
	int Emax1 = a[0]; 
	for (int i = 1; i < N; ++i)
	{
		if (a[i] > Emax1)
		{
			Emax1 = a[i];
		}
	}

	int Emax2 = a[0];
	for (int i = 0; i < N; ++i)
	{
		if ((a[i] > Emax2) && (a[i] < Emax1))
		{
			Emax2 = a[i];
		}
	}
	cout << "SECOND MAX: " << Emax2 << endl;
}
// #9
{
	cout << "REVERSE: ";
	for (int i = N - 1; i >= 0; --i)
	{
		cout << a[i] << " ";
	}
	cout << endl;
}
// #10
{
	cout << "ODD INDEXES: ";
	for (int i = 0; i < N; ++i)
	{
		if (i % 2 != 0)
		{
			cout << a[i] << " ";
		}
	}
	cout << endl;
}

return EXIT_SUCCESS;
}