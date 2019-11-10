#include <iostream>
#include "geometry/GLine.cpp"
#include "linear_equation/LinearEquation.cpp"
#include "geometry/GPlane.cpp"

using namespace std; // make names from std visible without std::

/*
 * Initial and principal function to be executed
 */
int main()
{
    cout << "\nTeste GEOMETRIC LINE (GLine) [1 2 4 8 16 32]\n";
    linear_algebra::GLine r = linear_algebra::GLine(1ULL, 2ULL, 4ULL, 8ULL, 16ULL, 32ULL);
    cout << "r.getA() = " << r.getA() << "\n";
    cout << "r.getB() = " << r.getB() << "\n";
    cout << "r.getC() = " << r.getC() << "\n";
    cout << "r.getD() = " << r.getD() << "\n";
    cout << "r.getE() = " << r.getE() << "\n";
    cout << "r.getF() = " << r.getF() << "\n";

    cout << "\nTeste GEOMETRIC PLANE (GPlane) [1 2 4 8 16 32 64 128 256]\n";
    linear_algebra::GPlane p = linear_algebra::GPlane(1ULL, 2ULL, 4ULL, 8ULL, 16ULL, 32ULL, 64ULL, 128ULL, 256ULL);
    cout << "p.getA() = " << p.getA() << "\n";
    cout << "p.getB() = " << p.getB() << "\n";
    cout << "p.getC() = " << p.getC() << "\n";
    cout << "p.getD() = " << p.getD() << "\n";
    cout << "p.getE() = " << p.getE() << "\n";
    cout << "p.getF() = " << p.getF() << "\n";
    cout << "p.getG() = " << p.getG() << "\n";
    cout << "p.getH() = " << p.getH() << "\n";
    cout << "p.getI() = " << p.getI() << "\n";
    cout << "\nTeste LinearEquation [1 2 4 8]\n";
    linear_algebra::LinearEquation eq = linear_algebra::LinearEquation(1ULL, 2ULL, 4ULL, 8ULL);
    cout << "eq.getC1() = " << eq.getC1() << "\n";
    cout << "eq.getC2() = " << eq.getC2() << "\n";
    cout << "eq.getC3() = " << eq.getC3() << "\n";
    cout << "eq.getC4() = " << eq.getC4() << "\n";
    cout << "eq.getC5() = " << eq.getC5() << "\n";
    return 0;
}