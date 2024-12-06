// Accessspecifier.cpp : main project file.

#include "stdafx.h"
#include<iostream>

using namespace std;

class emp
{
private:
	int id;
	char dept;
	float sal;
public:
	void assign()
	{
		id=123;
		dept='A';
		sal=34234.5f;
	}
	void display()
	{
		cout<<id<<" "<<dept<<" "<<sal<<" "<<endl;
	}
};

int main()
{
	emp e1;
	e1.assign();
	e1.display();
    
    return 0;
}
