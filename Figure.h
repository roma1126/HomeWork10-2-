#pragma once
#include "Libs.h"

class Figure
{
public:

	Figure();



	virtual void print_info();


protected:
	std::string get_sides();
	std::string get_corners();
	int get_sides_count();
	std::string get_name();

	int sides_count;
	std::string name;
	std::string sides;
	std::string corners;
};