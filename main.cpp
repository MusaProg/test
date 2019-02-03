#include <iostream>
#include <stdlib.h>

int generate_number(int start, int finish)
{
    int length = finish - start;
    int a = rand() % length;
    return start + a;
}

int main()
{
    /*  Тест!
    int start, finish;
    std::cin >> start >> finish;
    std::cout << generate_number(start, finish);
    */
    return 0;
}
