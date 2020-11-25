//4. Визначити усі «щасливі» шестизначні числа. Число вважається «щасливим», якщо
//сума перших його трьох цифр дорівнює сумі останніх трьох цифр.
#include <iostream>
using namespace std;
int main()
{
    int S = 0;
    for (int i = 100; i <= 999; i++) {
        for (int k = 0; k <= 999; k++) {
            int x1 = i / 100;
            int x2 = (i / 10) % 10;
            int x3 = i % 10;
            int y1 = k / 100;
            int y2 = (k / 10) % 10;
            int y3 = k % 10;
            if (x1 + x2 + x3 == y1 + y2 + y3) {
                S = i * 1000 + k;
                cout << S << endl;
            }
        }
    
    }
            
}

