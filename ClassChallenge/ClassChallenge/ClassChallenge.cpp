#include <iostream>

using namespace std;

class Shape {
public:
	string color = "black";
	int result{};
	int height{};
	int width{};
	void getArea() {
		height* width;
	}
};


class Rectangle : public Shape {
public:
	int height = 5;
	int width = 10;
};

class Triangle : public Shape {
public:
	int base = 10;
	int height = 12;
};

class Circle : public Shape {
public:
	int radius = 5;
};

int main()
{
	Shape myShape;
	Rectangle rect;
	Triangle tri;
	Circle cir;
	rect.getArea();
	tri.getArea();
	cir.getArea();
	myShape.getArea();
	return 0;
}

