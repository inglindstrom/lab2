#ifndef ELOC_H
#define ELOC_H
#include <math.h>

class eloC
{
public:
    eloC();

    int get_k();
    int get_rA();
    int get_rB();

    void set_k(int _k);
    void set_rA(int val);
    void set_rB(int val);
    void set_scores(double s1, double s2);

    void expect();
    void updateR();

private:
    int k;
    double rA;
    double rB;
    double sA;
    double sB;
    double eA;
    double eB;
};

#endif // ELOC_H