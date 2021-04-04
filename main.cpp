#include <iostream>

using namespace std;

int main()
{
    cout << "Enter A and B: ";
    int a, b;
    cin >> a >> b;
    cout << "sum = " << a + b << '\n'
    << "raznost` = " << a - b << '\n'
    << "proizv = " << a * b << '\n'
    << "chastnoe = " << a / b << '\n';
    int max;
    if (a > b)
        max = a;
    else
        max = b;
        cout << "max = " << max << '\n';
    int min;
    if (a < b)
        min = a;
    else
        min = b;
    cout << "min = " << min << '\n';

}
