#include <iostream>
using namespace std;

class Circle {
public:
	int radius;
	double getArea();
};

double Circle::getArea() {
	return 3.14*radius*radius;
}

int main() {
	Circle donut;
	donut.radius;
	double area = donut.getArea();
	cout << "donut ������" << area << endl;

	Circle pizza;
	pizza.radius;
	area = pizza.getArea();
	cout << "pizza ������" << area << endl;
	system("pause");
}