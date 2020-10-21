#define _CRT_SECURE_NO_WARNINGS
#include "time.h"
#include "triangle.h"
int Triangle::count;
int main() {
	Time T;
	T.Set(16, 25, 36);
	T.PrintMilitary();
	T.Print();
	T.Set(666, 69, -13);
	T.PrintMilitary();
	T.Print();
	Point p1, p2(2.72, -3.14), p3(0, 1.62), p4(1.62, 0);
	Triangle t1(p1, p2, p3, "t1"), t2(p1, p2, p4, "t2"), t3("t3");
	std::cout << "t1.v2: ";
	t1.Get_v2().Show();
	std::cout << std::endl;
	t1.Show();
	t1.ShowSideAndArea();
	t2.ShowSideAndArea();
	t3.ShowSideAndArea();
}