#include <iostream>

using namespace std;

unsigned int all()
{
   unsigned int q = 0;

    for (int i1 = 0; i1 < 8; i1++)
        for (int i2 = 0; i2 < 8; i2++)
            for (int i3 = 0; i3 < 8; i3++)
                for (int i4 = 0; i4 < 8; i4++)
                    for (int i5 = 0; i5 < 8; i5++)
                        for (int i6 = 0; i6 < 8; i6++)
                            for (int i7 = 0; i7 < 8; i7++)
                                if (i1 + i2 + i3 + i4 + i5 + i6 + i7 == 7)
                                    q++;
        return q;
}

unsigned int right()
{
    unsigned int q = 0;
    for (int i1 = 0; i1 < 8; i1++)
        for (int i2 = 0; i2 < 8; i2++)
            for (int i3 = 0; i3 < 8; i3++)
                if (i1 + i2 + i3 == 7)
                    q++;
    return q;
}

int main()
{
    cout << 35.0 * right()/(1.0 *all());
    return 0;
}
