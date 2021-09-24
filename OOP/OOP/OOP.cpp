#include <iostream>

using namespace std;


class myClass {
public:
	string breed;
	string color;
	int height{};
	int weight{};
	void Shake();
	void Sit();
	void LayDown();
};

void myClass::Shake() {
	cout << "This dog can shake hands.\n";
}

void myClass::Sit() {
	cout << "This dog can sit down.\n";
}

void myClass::LayDown() {
	cout << "This down can lay down.\n";
}

int main()
{
	myClass classobj;
	classobj.breed = "Hound";
	classobj.color = "Brown";
	classobj.height = 2;
	classobj.weight = 60;
	classobj.Shake();
	classobj.Sit();
	classobj.LayDown();
	cout << "This dog's breed is : "; cout << classobj.breed << endl;
	cout << "This dog's color is : "; cout << classobj.color << endl;
	cout << "This dog's height is : "; cout << classobj.height; cout << " feet.\n";
	cout << "This dog's weight is : "; cout << classobj.weight; cout << " pounds.\n";
}
