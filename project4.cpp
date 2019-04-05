#include<iostream>
using namespace std;

class Rectangle {
public:
	Rectangle(int top, int bottom, int left, int right) {
		this->top = top;
		this->bottom = bottom;
		this->left = left;
		this->right = right;
	}
	int getTop()const {
		return top;
	}
	int getBottom()const {
		return bottom;
	}
	int getLeft()const {
		return left;
	}
	int getRight()const {
		return right;
	}
	void setTop(int top) {
		top = top;
	}
	void setBottom(int bottom) {
		bottom = bottom;
	}
	void setLeft(int left) {
		left = left;
	}
	int getArea()const {
		int w = top - bottom;
		int l = left - right;
		return w * l;
	}
	~Rectangle(){}
private:
	int top, bottom, left, right;
};

int main() {
	Rectangle rec(10, 2, 8, 2);
	cout << "矩形面积为：" << rec.getArea() << endl;
}
