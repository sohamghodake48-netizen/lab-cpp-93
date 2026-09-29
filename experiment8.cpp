#include <iostream>
using namespace std;

class Distance
{
public:
    int feet, inch;

    // Constructor
    Distance(int f, int i)
    {
        feet = f;
        inch = i;
    }

    // Overloading unary (-) operator
    void operator-()
    {
        feet--;
        inch--;

        cout << "\nFeet & Inches (Decrement): "
             << feet << "'" << inch;
    }
};

// Main function
int main()
{
    Distance d1(8, 9);

    // Use overloaded unary operator
    -d1;

    return 0;
}