#pragma once

#include <iostream>

using namespace std;

int const N = 20;

enum Gender { male = 1, female = 0 };

class User
{
public:
	void display();
	void setName(char* name);
	void setSkills(bool skill);
	void setGender(Gender gender);
	User enterUser();

private:
	char name[N];
	bool skills;
	Gender gender;
	static void strcpy(char* name, const char* source); // зачем?
	Gender gender;
};
