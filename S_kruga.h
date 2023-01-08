#pragma once
#include "S.h"
#include "Krug.h"

class S_kruga :
    public Krug, public S
{
public:
    S_kruga();
    S_kruga(double x, double y, double rad);
    S_kruga(double seide);
    ~S_kruga();
};
