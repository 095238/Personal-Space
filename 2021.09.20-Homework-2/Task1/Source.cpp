#include<iostream>
#include<clocale>

using namespace std;

int main(int argc, char* argv[])
{
    setlocale(LC_ALL, "Russian");

    int x = 0;

    cin >> x;

    switch (x / 100)
    {
    case 1:
        cout << "��� ";
        break;
    case 2:
        cout << "������ ";
        break;
    case 3:
        cout << "������ ";
        break;
    case 4:
        cout << "��������� ";
        break;
    case 5:
        cout << "������� ";
        break;
    case 6:
        cout << "�������� ";
        break;
    case 7:
        cout << "������� ";
        break;
    case 8:
        cout << "��������� ";
        break;
    case 9:
        cout << "��������� ";
        break;
    }

    switch ((x % 100) / 10)
    {
    case 2:
        cout << "�������� ";
        break;
    case 3:
        cout << "�������� ";
        break;
    case 4:
        cout << "����� ";
        break;
    case 5:
        cout << "��������� ";
        break;
    case 6:
        cout << "���������� ";
        break;
    case 7:
        cout << "��������� ";
        break;
    case 8:
        cout << "����������� ";
        break;
    case 9: cout << "��������� ";
        break;
    }

    if ((x % 100 >= 10) && (x % 100 < 20))
    {
        switch (x % 100)
        {
        case 10:
            cout << "������ �������";
            break;
        case 11:
            cout << "���������� �������";
            break;
        case 12:
            cout << "���������� �������";
            break;
        case 13:
            cout << "���������� �������";
            break;
        case 14:
            cout << "������������ �������";
            break;
        case 15:
            cout << "���������� �������";
            break;
        case 16:
            cout << "����������� �������";
            break;
        case 17:
            cout << "���������� �������";
            break;
        case 18:
            cout << "������������ �������";
            break;
        case 19:
            cout << "������������ �������";
            break;
        }
    }
    else {
        switch (x % 10)
        {
        case 0:
            cout << "�������";
            break;
        case 1:
            cout << "���� �����";
            break;
        case 2:
            cout << "��� ������";
            break;
        case 3:
            cout << "��� ������";
            break;
        case 4:
            cout << "������ ������";
            break;
        case 5:
            cout << "���� �������";
            break;
        case 6:
            cout << "����� �������";
            break;
        case 7:
            cout << "���� �������";
            break;
        case 8:
            cout << "������ �������";
            break;
        case 9:
            cout << "������ �������";
            break;
        }
    }
    return EXIT_SUCCESS;
}