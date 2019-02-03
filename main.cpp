#include <iostream>
#include <stdlib.h>
#include <time.h>

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
        cout << "Введите число: ";
        cin >> a;
        if (a < number) cout << "Вы ввели число, меньшее загаданного. Попробуйте еще раз\n";
        else if (a > number) cout << "Вы ввели число, большее загаданного. Попробуйте еще раз\n";
        else {cout << "Вы угадали!\n"; break;}
    } while(true);

    return 0;
}

int generate_number(int start, int finish)
{
    int length = finish - start;
    srand(time(NULL));
    int a = rand() % length;
    return start + a;
}

