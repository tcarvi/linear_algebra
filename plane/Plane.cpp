#include "Plane.h"

linear_algebra::Plane::Plane(unsigned long long int parA, unsigned long long int parB, unsigned long long int parC, unsigned long long int parD)
    : A{parA}, B{parB}, C{parC}, D{parD}
{ 

}

linear_algebra::Plane::Plane(unsigned long long int parA, unsigned long long int parB, unsigned long long int parC)
    : A{parA}, B{parB}, C{parC}, D{0ULL}
{ 

}

unsigned long long int linear_algebra::Plane::getA()
{
    return A;
}

unsigned long long int linear_algebra::Plane::getB()
{
    return B;
}

unsigned long long int linear_algebra::Plane::getC()
{
    return C;
}

unsigned long long int linear_algebra::Plane::getD()
{
    return D;
}


void linear_algebra::Plane::setA(unsigned long long int parA)
{
    A = parA;
}

void linear_algebra::Plane::setB(unsigned long long int parB)
{
    B = parB;
}

void linear_algebra::Plane::setC(unsigned long long int parC)
{
    C = parC;
}

void linear_algebra::Plane::setD(unsigned long long int parD)
{
    D = parD;
}