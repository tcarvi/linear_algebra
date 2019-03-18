#include "Plano.h"

linear_algebra::Plano::Plano(unsigned long long int parA, unsigned long long int parB, unsigned long long int parC, unsigned long long int parD)
    : A{parA}, B{parB}, C{parC}, D{parD}
{ 

}

linear_algebra::Plano::Plano(unsigned long long int parA, unsigned long long int parB, unsigned long long int parC)
    : A{parA}, B{parB}, C{parC}, D{0ULL}
{ 

}

unsigned long long int linear_algebra::Plano::getA()
{
    return A;
}

unsigned long long int linear_algebra::Plano::getB()
{
    return B;
}

unsigned long long int linear_algebra::Plano::getC()
{
    return C;
}

unsigned long long int linear_algebra::Plano::getD()
{
    return D;
}


void linear_algebra::Plano::setA(unsigned long long int parA)
{
    A = parA;
}

void linear_algebra::Plano::setB(unsigned long long int parB)
{
    B = parB;
}

void linear_algebra::Plano::setC(unsigned long long int parC)
{
    C = parC;
}

void linear_algebra::Plano::setD(unsigned long long int parD)
{
    D = parD;
}