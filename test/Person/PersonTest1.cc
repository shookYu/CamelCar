#include "Person1.h"

int main(int argc,char *argv[])
{
	Person person;
	person.setAge(18);
	person.setName("Lili");

	int age = person.getAge();
	string name = person.getName();
	cout<<"my name is:"<<name<<" I am "<<age<<" years old"<<endl;
	
	return 0;
}
