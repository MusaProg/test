#include <iostream>
#include <stdlib.h>

using namespace std;

int generate_number(int start, int finish);

int main()
{
    int start = 1;
    int finish = 100;
    setlocale(LC_CTYPE, "Russian");
    int number = generate_number(start, finish);

    int a;
    do
    {
        cout << "������� �����: ";
        cin >> a;
        if (a < number) cout << "�� ����� �����, ������� �����������. ���������� ��� ���\n";
        else if (a > number) cout << "�� ����� �����, ������� �����������. ���������� ��� ���\n";
        else {cout << "�� �������!\n"; break;}
    } while(true);

    return 0;
}
