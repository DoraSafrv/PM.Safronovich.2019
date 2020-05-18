#pragma once
#include<iostream>

using namespace std;

class Schedule
{
public:
	Schedule() 
	{
		this->number = 0;
		this->monthnum = 0;
		this->subject = "default";
	}
	Schedule(int number, int monthnum, const char* subject) 
	{
		this->number = number;
		this->monthnum = monthnum;
		this->subject = subject;
	}
	void ShowInfo() 
	{
		cout << " >> " <<this -> number << "." <<this -> monthnum << " " << this -> subject << endl;
	}
	void Set(int number, int monthnum, const char* subject) 
	{
		this->number = number;
		this->monthnum = monthnum;
		this->subject = subject;
	}
private:
	int number;
	int monthnum;
	const char* subject;
};
