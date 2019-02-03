#include <iostream>
#include <stdlib.h>
#include <time.h>

using namespace std;

int generate_number(int start, int finish);

int main()
{
    int Max_Attempts = 5, q = 0;
    int start = 1;
    int finish = 100;
    setlocale(LC_CTYPE, "Russian");
    int number = generate_number(start, finish);

    cout << "У вас " << Max_Attempts << " попыток, чтобы угадать число\n";
    int a;
    do
    {
        cout << q + 1 << " попытка. Введите число: ";
        cin >> a;
        if (a < number) cout << "Вы ввели число, меньшее загаданного. Попробуйте еще раз\n";
        else if (a > number) cout << "Вы ввели число, большее загаданного. Попробуйте еще раз\n";
        else {cout << "Вы угадали!\n"; break;}
        q++;
    } while(q < Max_Attempts);
    if (q == Max_Attempts)
        cout << "Вы исчерпали все попытки. Вы проиграли :( Правильный ответ был " << number << "\n";
    return 0;
}

int generate_number(int start, int finish)
{
    int length = finish - start;
    srand(time(NULL));
    int a = rand() % length;
    return start + a;
}

