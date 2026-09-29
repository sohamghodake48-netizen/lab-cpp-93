#include <iostream>
using namespace std;

class Distance
{
public:
    int feet, inch;
    Distance(int f, int i)
    {
        feet = f;
        inch = i;
    }
    void operator-() {
        feet=feet-3;
        inch--;

        cout << "\nFeet & Inches (Decrement): "
             << feet << "'" << inch;
    }
    void operator+()
    {
        feet=feet+3;
        inch++;

        cout << "\nFeet & Inches (Decrement): "
             << feet << "'" << inch;
    }
};

int main()
{
    Distance d1(8, 9);
    -d1;
    Distance d2(10,11);
    +d2;

    return 0;
}