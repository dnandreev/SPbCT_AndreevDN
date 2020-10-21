#pragma once
#include "point.h"
#include <iomanip>
class Triangle {
private:
	Point v1, v2, v3;
	char* objID;
	char* name;
	double a, b, c;
public:
	static int count;
	Triangle(Point _v1, Point _v2, Point _v3, const char* id) : v1(_v1), v2(_v2), v3(_v3) {
		objID = new char[strlen(id) + 1];
		strcpy(objID, id);
		count++;
		std::cout << "Triangle " << count << ", ";
		a = sqrt(pow((v1.x - v2.x), 2) + pow((v1.y - v2.y), 2));
		b = sqrt(pow((v2.x - v3.x), 2) + pow((v2.y - v3.y), 2));
		c = sqrt(pow((v3.x - v1.x), 2) + pow((v3.y - v1.y), 2));
		std::cout << "constructor_1 for: " << objID << std::endl;
	}
	Triangle(const char* id) {
		objID = new char[strlen(id) + 1];
		strcpy(objID, id);
		count++;
		std::cout << "Triangle " << count << ", ";
		a = b = c = 0;
		std::cout << "constructor_2 for: " << objID << std::endl;
	}
	~Triangle() {
		std::cout << "Destructor for: " << objID << std::endl;
		count--;
		delete[] objID;
		delete[] name;
	}
	Point Get_v1() {
		return v1;
	}
	Point Get_v2() {
		return v2;
	}
	Point Get_v3() {
		return v3;
	}
	void Show() {
		std::cout << objID << ": ";
		v1.Show();
		std::cout << ", ";
		v2.Show();
		std::cout << ", ";
		v3.Show();
		std::cout << std::endl;
	}
	void ShowSideAndArea() {
		double p = (a + b + c) / 2, s = sqrt(p * (p - a) * (p - b) * (p - c));
		std::cout << objID << ": " << std::setprecision(4) << "a = " << a << ", b = " << b << ", c = " << c << ", s = " << s << std::endl;
	}
};