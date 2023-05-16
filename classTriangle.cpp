#include "Triangle.h"


	Triangle::Triangle() { sides_count = 3; }
	Triangle::Triangle(int a, int b, int c, int A, int B, int C)
	{
		this->a = a; this->b = b; this->c = c;
		this->A = A; this->B = B; this->C = C;
		this->name = "Треугольник:";
		this->sides_count = 3;
	}

	std::string Triangle::get_sides()
	{
		std::string str = { "Стороны: a=" + std::to_string(a) + " b=" + std::to_string(b) + " c=" + std::to_string(c) + "\n" };
		return str;
	}
	std::string Triangle::get_corners()
	{
		std::string str = { "Углы: A=" + std::to_string(A) + " B=" + std::to_string(B) + " C=" + std::to_string(C) + "\n" };
		return str;
	}

	void Triangle::print_info() 
	{
		std::cout << Triangle::get_name() << "\n" << Triangle::get_sides() << Triangle::get_corners() << "" << " " << " " << "\n"; // 
	}

	int a = 0, b = 0, c = 0;
	int A = 0, B = 0, C = 0;

