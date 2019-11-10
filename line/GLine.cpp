#include "GLine.h"

linear_algebra::GLine::GLine(unsigned long long int parA, unsigned long long int parB, unsigned long long int parC, unsigned long long int parD, unsigned long long int parE, unsigned long long int parF)
    : A{parA}, B{parB}, C{parC}, D{parD}, E{parE}, F{parF}
{ 

}

unsigned long long int linear_algebra::GLine::getA()
{
    return A;
}

unsigned long long int linear_algebra::GLine::getB()
{
    return B;
}

unsigned long long int linear_algebra::GLine::getC()
{
    return C;
}

unsigned long long int linear_algebra::GLine::getD()
{
    return D;
}

unsigned long long int linear_algebra::GLine::getE()
{
    return E;
}

unsigned long long int linear_algebra::GLine::getF()
{
    return F;
}


void linear_algebra::GLine::setA(unsigned long long int par)
{
    A = par;
}

void linear_algebra::GLine::setB(unsigned long long int par)
{
    B = par;
}

void linear_algebra::GLine::setC(unsigned long long int par)
{
    C = par;
}

void linear_algebra::GLine::setD(unsigned long long int par)
{
    D = par;
}

void linear_algebra::GLine::setE(unsigned long long int par)
{
    E = par;
}

void linear_algebra::GLine::setF(unsigned long long int par)
{
    F = par;
}