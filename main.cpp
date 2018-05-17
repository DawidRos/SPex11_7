// prosta implementacja podstawowych wlasnosci liczb sprzezonych
// 17.05.2018

#include <iostream>
#include "complex0.cpp"

using namespace std;

int main()
{
    Complex a(3.0, 4.0);
    Complex c;
    cout << a;
    cout << "Podaj liczbe zespolona (k, aby zakonczyc):\n";
    while (cin >> c)
    {
        cout << "c to " << c << '\n';
        cout << "a to " << a << '\n';
        cout << "sprzezona z c to " << -c << "\n";
        cout << "a to " << a << "\n";
        cout << "a + c wynosi " << a + c << "\n";
        cout << "a - c wynosi " << a - c << "\n";
        cout << "a * c wynosi " << a * c << "\n";
        cout << "2 * c wynosi " << 2 * c << "\n";
        cout << "Podaj liczbe zespolona (k, aby zakonczyc):\n";
    }
    cout << "Gotowe!\n";
    return 0;
}

