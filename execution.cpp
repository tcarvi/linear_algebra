#include <iostream>
#include "reta/Reta.cpp"
#include "plano/Plano.cpp"

using namespace std; // make names from std visible without std::

/*
 * Initial and principal function to be executed
 */
int main()
{
    cout << "teste\n";
    linear_algebra::Reta r = linear_algebra::Reta(1ULL, 2ULL, 4ULL);
    cout << "r.getA() = " << r.getA() << "\n";
    cout << "r.getB() = " << r.getB() << "\n";
    cout << "r.getC() = " << r.getC() << "\n";
    linear_algebra::Plano p = linear_algebra::Plano(1ULL, 2ULL, 4ULL, 8ULL);
    cout << "p.getA() = " << p.getA() << "\n";
    cout << "p.getB() = " << p.getB() << "\n";
    cout << "p.getC() = " << p.getC() << "\n";
    cout << "p.getC() = " << p.getD() << "\n";
    return 0;
}