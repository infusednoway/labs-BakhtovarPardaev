#include <iostream>
#include "Krug.h"
using namespace std;

Krug::Krug()
{
}

Krug::~Krug()
{
}

Krug::Krug(double rad)
{
	this->getrandom();
	this->rad = rad;
}

Krug::Krug(double x, double y, double rad)
{
	this->x = x;
	this->y = y;
	this->rad = rad;
}

void Krug::out()
{
	std::cout << '\n' << x << ' ' << y << ' ' << rad << '\n';
}