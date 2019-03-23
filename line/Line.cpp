#include "Line.h"

linear_algebra::Line::Line(unsigned long long int parA, unsigned long long int parB, unsigned long long int parC)
    : A{parA}, B{parB}, C{parC}
{ 

}

linear_algebra::Line::Line(unsigned long long int parA, unsigned long long int parB)
    : A{parA}, B{parB}, C{0ULL}
{ 

}

unsigned long long int linear_algebra::Line::getA()
{
    return A;
}

unsigned long long int linear_algebra::Line::getB()
{
    return B;
}

unsigned long long int linear_algebra::Line::getC()
{
    return C;
}


void linear_algebra::Line::setA(unsigned long long int parA)
{
    A = parA;
}

void linear_algebra::Line::setB(unsigned long long int parB)
{
    B = parB;
}

void linear_algebra::Line::setC(unsigned long long int parC)
{
    C = parC;
}