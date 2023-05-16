#pragma once
#include "Libs.h"
#include "Figure.h"

class Triangle : public Figure
{
public:
	Triangle();
	Triangle(int a, int b, int c, int A, int B, int C);
protected:
	std::string get_sides();
	std::string get_corners();
	void print_info() override;


	int a = 0, b = 0, c = 0;
	int A = 0, B = 0, C = 0;


};
