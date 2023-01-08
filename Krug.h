#pragma once
#include "Position.h"
class Krug :
    virtual public Position
{
public:
    double rad;
public:
    Krug();
    Krug(double rad);
    Krug(double x, double y, double rad);
    void out(); 
    ~Krug();
};
