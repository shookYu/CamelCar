#ifndef __PERSON__
#define __PERSON__
#include <iostream>
#include <string>

using namespace std;

struct Person
{
public:
	Person();
	~Person();
	void setAge(const int);
	void setName(const string&);
	int getAge() const;
	string getName() const;
private:
	int age;
	string name;
};

#endif
