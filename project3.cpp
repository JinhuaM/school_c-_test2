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
	cout << "�����볤�Ϳ�";
	cin >> l >> w;
	Rectangle rec(l, w);
	cout << "���ε����Ϊ��" << rec.getArea() << endl;
}