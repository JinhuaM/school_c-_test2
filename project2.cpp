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
	cout << "请输入圆的半径：";
	cin >> r;
	Circle cir(r);
	cout << "圆的面积为：" << cir.getArea() << endl;
}