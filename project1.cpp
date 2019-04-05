#include<iostream>
using namespace std;

class Dog {
public :
	Dog(int initialAge = 0, int initialWeight = 0);
	int getAge(){
		return age;
	}
	int getWeight() {
		return weight;
	}
	~Dog();
private:
	int age, weight;
};

Dog::Dog(int initialAge, int initialWeight) {
	age = initialAge;
	weight = initialWeight;
}

Dog::~Dog(){}

int main() {
	Dog Rose(3,12);
	Rose.getAge();
	Rose.getWeight();
	cout << "Rose is " << Rose.getAge() << " years old and " << Rose.getWeight() << " pounds weight" << endl;

}