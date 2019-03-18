#include <iostream>
#include "reta/Reta.cpp"
#include "plano/Plano.cpp"
#include "linear_equation/LinearEquation.cpp"

using namespace std; // make names from std visible without std::

/*
 * Initial and principal function to be executed
 */
int main()
{
    cout << "teste Reta [1 2 4]\n";
    linear_algebra::Reta r = linear_algebra::Reta(1ULL, 2ULL, 4ULL);
    cout << "r.getA() = " << r.getA() << "\n";
    cout << "r.getB() = " << r.getB() << "\n";
    cout << "r.getC() = " << r.getC() << "\n";
    cout << "teste Reta [1 2 4 8]\n";
    linear_algebra::Plano p = linear_algebra::Plano(1ULL, 2ULL, 4ULL, 8ULL);
    cout << "p.getA() = " << p.getA() << "\n";
    cout << "p.getB() = " << p.getB() << "\n";
    cout << "p.getC() = " << p.getC() << "\n";
    cout << "p.getD() = " << p.getD() << "\n";
    cout << "teste LinearEquation [1 2 4 8]\n";
    linear_algebra::LinearEquation eq = linear_algebra::LinearEquation(1ULL, 2ULL, 4ULL, 8ULL);
    cout << "eq.getC1() = " << eq.getC1() << "\n";
    cout << "eq.getC2() = " << eq.getC2() << "\n";
    cout << "eq.getC3() = " << eq.getC3() << "\n";
    cout << "eq.getC4() = " << eq.getC4() << "\n";
    cout << "eq.getC5() = " << eq.getC5() << "\n";
    return 0;
}