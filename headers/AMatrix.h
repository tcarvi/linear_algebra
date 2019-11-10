#include <iostream>

namespace linear_algebra {
class AMatrixM1N2
{
    public:
        AMatrixM1N2(unsigned long long int, unsigned long long int);
        unsigned long long int getA(); // m1 n1
        unsigned long long int getB(); // m1 n2
    private:
        unsigned long long int A;
        unsigned long long int B;
        void setA(unsigned long long int par);
        void setB(unsigned long long int par);
}; // class AMatrixM1N2
}  // namespace algebra