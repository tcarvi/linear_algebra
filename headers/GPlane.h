#include <iostream>

namespace linear_algebra {
class GPlane
{
    public:
        GPlane(unsigned long long int, unsigned long long int, unsigned long long int, unsigned long long int, unsigned long long int, unsigned long long int, unsigned long long int, unsigned long long int, unsigned long long int);
        unsigned long long int getA();
        unsigned long long int getB();
        unsigned long long int getC();
        unsigned long long int getD();
        unsigned long long int getE();
        unsigned long long int getF();
        unsigned long long int getG();
        unsigned long long int getH();
        unsigned long long int getI();
    private:
        unsigned long long int A;
        unsigned long long int B;
        unsigned long long int C;
        unsigned long long int D;
        unsigned long long int E;
        unsigned long long int F;
        unsigned long long int G;
        unsigned long long int H;
        unsigned long long int I;
        void setA(unsigned long long int parA);
        void setB(unsigned long long int parB);
        void setC(unsigned long long int parC);
        void setD(unsigned long long int parD);
        void setE(unsigned long long int parE);
        void setF(unsigned long long int parF);
        void setG(unsigned long long int parG);
        void setH(unsigned long long int parH);
        void setI(unsigned long long int parI);
}; // class GPlane
}  // namespace algebra