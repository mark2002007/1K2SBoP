#include <iostream>
#include <fstream>
#include <cstring>
using namespace std;

#ifndef HEADER_H
#define HEADER_H
struct Circle {
	const float pi = 3.14159265359;
	float x;
	float y;
	float R;
	Circle(float x, float y, float R) : x(x), y(y), R(R) {}
	float S = pi*R*R;
	float getS() { return S; }
};
#endif
