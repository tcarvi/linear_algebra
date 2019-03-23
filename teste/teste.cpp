#include <iostream>
#include "line/Line.cpp"
#include "linear_equation/LinearEquation.cpp"
#include "plane/Plane.cpp"

using namespace std; // make names from std visible without std::

/*
 * Initial and principal function to be executed
 */
int main()
{
    cout << "teste Line [1 2 4]\n";
    linear_algebra::Line r = linear_algebra::Line(1ULL, 2ULL, 4ULL);
    cout << "r.getA() = " << r.getA() << "\n";
    cout << "r.getB() = " << r.getB() << "\n";
    cout << "r.getC() = " << r.getC() << "\n";
    cout << "teste Plane [1 2 4 8]\n";
    linear_algebra::Plane p = linear_algebra::Plane(1ULL, 2ULL, 4ULL, 8ULL);
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