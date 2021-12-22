#include<iostream>

using namespace std;

int main(int argc, int argv[])
{
	bool exit = 0;
	int cap = 1;
	int* a = new int[cap] {0};
	int actcap = 0;
	int choice = 0;

	cout << " 0 - Shut down program " << endl;
	cout << " 1 - Print array " << endl;
	cout << " 2 - Add element in the end of array " << endl;
	cout << " 3 - Add element in the beginning of array " << endl;
	cout << " 4 - Delete last element of array " << endl;
	cout << " 5 - Delete first element of array " << endl;
	cout << " 6 - Invert array " << endl;
	cout << " 7 - Print MENU" << endl;

	while (!exit)
	{
		cout << "Choose option" << endl;
		cin >> choice;
		switch (choice)
		{
		case 0:
			exit = 1;
			cout << "Successful exit!";
			break;
		case 1:
			cout << "Actual array: ";
			if (actcap == 0)
			{
				cout << "empty";
			}
			else
			{
				for (int i = 0; i < actcap; i++)
				{
					cout << a[i] << " ";
				}
			}
			cout << endl;
			break;
		case 2: case 3:
			if (actcap == cap)
			{
				int* newarr = new int[cap * 2]{ 0 };
				for (int i = 0; i < cap; i++)
				{
					newarr[i] = a[i];
				}
				delete[] a;
				a = newarr;
				cap *= 2;
			}
			switch (choice)
			{
			case 2:
				cout << "New element in the end: ";
				cin >> a[actcap];
				break;
			case 3:
				cout << "New element in the beggining: ";
				for (int i = actcap; i > 0; i--)
				{
					a[i] = a[i - 1];
				}
				cin >> a[0];
				break;
			}
			actcap++;
			break;

		case 4:
			if (actcap > 0)
			{
				a[actcap] = 0;
				actcap--;
				cout << "Last element successfully deleted!" << endl;
			}
			else
			{
				cout << "Can't delete. Array is empty!" << endl;
			}
			break;
		case 5:
			if (actcap > 0)
			{
				for (int i = 0; i < actcap; i++)
				{
					a[i] = a[i + 1];
				}
				actcap--;
				cout << "First element successfuly deleted!" << endl;
			}
			else
			{
				cout << "Can't delete. Array is empty!" << endl;
			}
			break;
		case 6:
			for (int i = 0; i <= (actcap - 1) / 2; i++)
			{
				int t = a[i];
				a[i] = a[actcap - i - 1];
				a[actcap - i - 1] = t;
			}
			cout << "Array successfully inverted!" << endl;
			break;
		case 7:
			cout << " 0 - Shut down program " << endl;
			cout << " 1 - Print array " << endl;
			cout << " 2 - Add element in the end of array " << endl;
			cout << " 3 - Add element in the beginning of array " << endl;
			cout << " 4 - Delete last element of array " << endl;
			cout << " 5 - Delete first element of array " << endl;
			cout << " 6 - Invert array " << endl;
			cout << " 7 - Print MENU" << endl;
			break;
		default:
			cout << "Error 404" << endl << "Wrong option. Try again" << endl;
			break;
		}
		cout << endl;
	}

	delete[] a;
	
	return EXIT_SUCCESS;
}