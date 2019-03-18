#include "Reta.h"

linear_algebra::Reta::Reta(unsigned long long int parA, unsigned long long int parB, unsigned long long int parC)
    : A{parA}, B{parB}, C{parC}
{ 

}

linear_algebra::Reta::Reta(unsigned long long int parA, unsigned long long int parB)
    : A{parA}, B{parB}, C{0ULL}
{ 

}

unsigned long long int linear_algebra::Reta::getA()
{
    return A;
}

unsigned long long int linear_algebra::Reta::getB()
{
    return B;
}

unsigned long long int linear_algebra::Reta::getC()
{
    return C;
}


void linear_algebra::Reta::setA(unsigned long long int parA)
{
    A = parA;
}

void linear_algebra::Reta::setB(unsigned long long int parB)
{
    B = parB;
}

void linear_algebra::Reta::setC(unsigned long long int parC)
{
    C = parC;
}