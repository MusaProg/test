#include <iostream>
#include <stdlib.h>

using namespace std;

int generate_number(int start, int finish);

int main()
{
    int Max_Attempts = 5, q = 0;
    int start = 1;
    int finish = 100;
    setlocale(LC_CTYPE, "Russian");
    int number = generate_number(start, finish);

    cout << "� ��� " << Max_Attempts << " �������, ����� ������� �����\n";
    int a;
    do
    {
        cout << q + 1 << " �������. ������� �����: ";
        cin >> a;
        if (a < number) cout << "�� ����� �����, ������� �����������. ���������� ��� ���\n";
        else if (a > number) cout << "�� ����� �����, ������� �����������. ���������� ��� ���\n";
        else {cout << "�� �������!\n"; break;}
        q++;
    } while(q < Max_Attempts);
    if (q == Max_Attempts)
        cout << "�� ��������� ��� �������. �� ��������� :( ���������� ����� ��� " << number << "\n";
    return 0;
}

int generate_number(int start, int finish)
{
    int length = finish - start;
    int a = rand() % length;
    return start + a;
}

