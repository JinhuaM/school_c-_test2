#include<iostream>
using namespace std;

class Circle {
public:
	Circle(float r);
	float getArea();
	~Circle(){}
private:
	float radius;
};

Circle::Circle(float r) {
	radius = r;
}
float Circle::getArea() {
	return radius * radius*3.14;
}

int main() {
	float r;
	cout << "������Բ�İ뾶��";
	cin >> r;
	Circle cir(r);
	cout << "Բ�����Ϊ��" << cir.getArea() << endl;
}