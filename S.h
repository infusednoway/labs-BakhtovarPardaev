#pragma once
#include "Position.h"
class S :
    virtual public Position
{
public:
    double c1[2];
    double c2[2];
    double c3[2];
    double c4[2];
    S();
    S(double x, double y, double side);
    S(double side);
    void out();
    ~S();
}; 
