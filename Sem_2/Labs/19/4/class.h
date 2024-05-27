#pragma once
#include <string>
#include <iostream>

using namespace std;

class Person {
protected:
	string name;
	int age;
public:
	Person() { name = ""; age = 0; };
	Person(string n, int a) { name = n; age = a; };
	Person(const Person& p) { name = p.name; age = p.age; };
	virtual ~Person() {};
	string getData() { return name + " | " + to_string(age); };
	void setData(string n, int a) { name = n; age = a; };
	Person& operator = (const Person&);
	friend istream& operator >> (istream& in, Person& p);
	friend ostream& operator << (ostream& out, Person& p);
};
