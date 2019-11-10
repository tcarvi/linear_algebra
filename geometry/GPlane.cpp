#include "GPlane.h"

linear_algebra::GPlane::GPlane(unsigned long long int parA, unsigned long long int parB, unsigned long long int parC, unsigned long long int parD, unsigned long long int parE, unsigned long long int parF, unsigned long long int parG, unsigned long long int parH, unsigned long long int parI)
    : A{parA}, B{parB}, C{parC}, D{parD}, E{parE}, F{parF}, G{parG}, H{parH}, I{parI}
{ 

}

unsigned long long int linear_algebra::GPlane::getA()
{
    return A;
}

unsigned long long int linear_algebra::GPlane::getB()
{
    return B;
}

unsigned long long int linear_algebra::GPlane::getC()
{
    return C;
}

unsigned long long int linear_algebra::GPlane::getD()
{
    return D;
}

unsigned long long int linear_algebra::GPlane::getE()
{
    return E;
}

unsigned long long int linear_algebra::GPlane::getF()
{
    return F;
}

unsigned long long int linear_algebra::GPlane::getG()
{
    return G;
}

unsigned long long int linear_algebra::GPlane::getH()
{
    return H;
}

unsigned long long int linear_algebra::GPlane::getI()
{
    return I;
}

void linear_algebra::GPlane::setA(unsigned long long int par)
{
    A = par;
}

void linear_algebra::GPlane::setB(unsigned long long int par)
{
    B = par;
}

void linear_algebra::GPlane::setC(unsigned long long int par)
{
    C = par;
}

void linear_algebra::GPlane::setD(unsigned long long int par)
{
    D = par;
}

void linear_algebra::GPlane::setE(unsigned long long int par)
{
    E = par;
}

void linear_algebra::GPlane::setF(unsigned long long int par)
{
    F = par;
}

void linear_algebra::GPlane::setG(unsigned long long int par)
{
    G = par;
}

void linear_algebra::GPlane::setH(unsigned long long int par)
{
    H = par;
}

void linear_algebra::GPlane::setI(unsigned long long int par)
{
    I = par;
}