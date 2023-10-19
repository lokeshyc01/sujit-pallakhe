/*Animal Hierarchy:
Problem Statement: Create a hierarchy of animal classes. 
Start with a base class Animal and then create derived classes like Mammal, Bird, and Fish. 
Each of these derived classes should have specific properties and methods related to their respective categories of animals.*/
#include<iostream>
using namespace std;
class Animal{
public:
	void eat(){
		cout<<"Animal can eat";
	}
	void breath(){
		cout<<"Animal can Breath";
	}
};
class Mammal:public Animal{
public:
	void rep(){
		cout<<"Mammals can reproduce";
	}
};
class Bird:public Animal{
Public:
	void fly(){
		cout<<"Birds can Fly";
	}
};
class Fish:public Animal{
public:	void swim(){
		cout<<"Fish can swim";
	}
};
int main(){
	Fish f;
	f.swim();
	
	
}

