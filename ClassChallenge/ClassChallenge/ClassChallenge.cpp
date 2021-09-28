#include <iostream>

using namespace std;

#define PI 3.141;

class Shape {
public:
	string color = "black";
	int result{};
	int height{};
	int width{};
	void getArea() {
	}
};

class Rectangle : public Shape {
public:
	int height = 5;
	int width = 10;
	void getArea() {
		cout << (height * width);\
			cout << "\n";
	}
};

class Triangle : public Shape {
public:
	int base = 10;
	int height = 12;
	void getArea() {
		cout << (base * height) / 2;
		cout << "\n";
	}
};

class Circle : public Shape {
public:
	float radius = 5.0;
	float area;
	void getArea() {
		area = PI & radius;
		cout << area * radius;
		cout << "\n";
	}
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
