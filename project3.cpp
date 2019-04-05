#include<iostream>
using namespace std;

class Rectangle {
public:
	Rectangle(float l,float w) {
		length = l;
		width = w;
	}
	float getLength() {
		return length;
	}
	float getWidth() {
		return width;
	}
	float getArea() {
		return length * width;
	}
	~Rectangle() {}
private:
	float length, width;
};

int main() {
	float l, w;
	cout << "请输入长和宽：";
	cin >> l >> w;
	Rectangle rec(l, w);
	cout << "矩形的面积为：" << rec.getArea() << endl;
}