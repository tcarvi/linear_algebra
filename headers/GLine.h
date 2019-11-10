#include <iostream>

namespace linear_algebra {
class GLine
{
    public:
        GLine(unsigned long long int, unsigned long long int, unsigned long long int, unsigned long long int, unsigned long long int, unsigned long long int);
        unsigned long long int getA();
        unsigned long long int getB();
        unsigned long long int getC();
        unsigned long long int getD();
        unsigned long long int getE();
        unsigned long long int getF();
    private:
        unsigned long long int A;
        unsigned long long int B;
        unsigned long long int C;
        unsigned long long int D;
        unsigned long long int E;
        unsigned long long int F;
        void setA(unsigned long long int parA);
        void setB(unsigned long long int parB);
        void setC(unsigned long long int parC);
        void setD(unsigned long long int parD);
        void setE(unsigned long long int parE);
        void setF(unsigned long long int parF);
}; // class GLine
}  // namespace algebra