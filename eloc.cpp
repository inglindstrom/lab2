#include "eloc.h"

eloC::eloC()
{

}

int eloC::get_k()
{
    return k;
}

int eloC::get_rA()
{
    return rA;
}

int eloC::get_rB()
{
    return rB;
}

void eloC::set_k(int _k)
{
    k = _k;
}

void eloC::set_rA(int val)
{
    rA = val;
}

void eloC::set_rB(int val)
{
    rB = val;
}

void eloC::set_scores(double s1, double s2)
{
    sA = s1;
    sB = s2;
}

void eloC::expect()
{
    eA = 1 / (1 + pow(10, (rB - rA) / 400));
    eB = 1 / (1 + pow(10, (rA - rB) / 400));
}

void eloC::updateR()
{
    rA = round(rA + k * (sA - eA));
    rB = round(rB + k * (sB - eB));
}