#include <iostream>

using namespace std;

int main()
{
    cout << "Enter A and B: ";
    int a, b;
    cin >> a >> b;
    cout << "A + B = " << a + b << '\n'
         << "A - B = " << a - b << '\n'
         << "A * B = " << a * b << '\n'
         << "A / B = " << a / b << '\n';
    cout << " Max = ";
    if ( a > b )
        cout << a;
    if (a < b)
        cout << b;
         cout << " Min = " ;
         if ( a < b )
            cout << a ;
         if ( a > b )
            cout << b ;
}
