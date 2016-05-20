#include "Person1.h"

Person::Person()
{
	cout<<"Person()"<<endl;	
}
Person::~Person()
{
	cout<<"~Person()"<<endl;
}
void Person::setAge( const int age)
{
	this->age = age;	
}
void Person::setName(const string& name)
{
	this->name =  name;
}
int Person::getAge() const
{
	return this->age;
}
string Person::getName() const
{
	return this->name;
}

