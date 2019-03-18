#include "LinearEquation.h"

linear_algebra::LinearEquation::LinearEquation(unsigned long long int parC1, unsigned long long int parC2, unsigned long long int parC3, unsigned long long int parC4, unsigned long long int parC5)
    : C1{parC1}, C2{parC2}, C3{parC3}, C4{parC4}, C5{parC5}
{}

linear_algebra::LinearEquation::LinearEquation(unsigned long long int parC1, unsigned long long int parC2, unsigned long long int parC3, unsigned long long int parC4)
    : C1{parC1}, C2{parC2}, C3{parC3}, C4{parC4}, C5{0ULL}
{}

linear_algebra::LinearEquation::LinearEquation(unsigned long long int parC1, unsigned long long int parC2, unsigned long long int parC3)
    : C1{parC1}, C2{parC2}, C3{parC3}, C4{0ULL}, C5{0ULL}
{}

linear_algebra::LinearEquation::LinearEquation(unsigned long long int parC1, unsigned long long int parC2)
    : C1{parC1}, C2{parC2}, C3{0ULL}, C4{0ULL}, C5{0ULL}
{}

linear_algebra::LinearEquation::LinearEquation(unsigned long long int parC1)
    : C1{parC1}, C2{0ULL}, C3{0ULL}, C4{0ULL}, C5{0ULL}
{}

/**
 *  Getters
 */ 

unsigned long long int linear_algebra::LinearEquation::getC1()
{
    return C1;
}

unsigned long long int linear_algebra::LinearEquation::getC2()
{
    return C2;
}

unsigned long long int linear_algebra::LinearEquation::getC3()
{
    return C3;
}

unsigned long long int linear_algebra::LinearEquation::getC4()
{
    return C4;
}

unsigned long long int linear_algebra::LinearEquation::getC5()
{
    return C5;
}

/**
 *  Setters
 */ 

void linear_algebra::LinearEquation::setC1(unsigned long long int parC1)
{
    C1 = parC1;
}

void linear_algebra::LinearEquation::setC2(unsigned long long int parC2)
{
    C2 = parC2;
}

void linear_algebra::LinearEquation::setC3(unsigned long long int parC3)
{
    C3 = parC3;
}

void linear_algebra::LinearEquation::setC4(unsigned long long int parC4)
{
    C4 = parC4;
}

void linear_algebra::LinearEquation::setC5(unsigned long long int parC5)
{
    C5 = parC5;
}
