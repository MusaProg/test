#include <iostream>


int main()
{
    for (int i = 0, j = 10; i < 10 && j <= 100; i++, j += 3)
        std::cout << "Hello, Albina\n";
    return 0;
}
