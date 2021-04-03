#include <iostream>

using namespace std;

int main()
{
    cout << "Enter A and B: ";
    int a, b;
    cin >> a >> b;
    cout << "A + B = " << a + b << '\n';
    cout << "A - B = " << a - b << '\n';
    cout << "A * B = " << a * b << '\n';
    cout << "A / B = " << a / b << '\n';


    if (a >= b)
        cout << "Max " << a << '\n';
    else
        cout << "Max " << b << '\n';

    if (a <= b)
        cout << "Min " << a << '\n';
    else
        cout << "Min " << b << '\n';

}
