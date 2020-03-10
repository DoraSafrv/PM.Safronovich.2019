#include <iostream>
#include "Header.h"

using namespace std;



void User::setName(char* name)
{
	if (strlen(name) > N)
	{
		throw std::invalid_argument("To long name.");
	}
	strcpy(this->name, name);
}

void User::setSkills(bool skill)
{
	skills = skill;

}

void User::setGender(Gender gender)
{
	this->gender = gender;
}

void User::display()
{
	cout << "Name: " << name << endl;

	cout << "Skills:";
	if (skills)
	{
		cout << "Yes" << endl;
	}
	else
		cout << "No" << endl;

	cout << "Gender:";
	switch (gender)
	{
	case male:
		cout << " male" << endl;
		break;
	case female:
		cout << " female" << endl;
		break;
	}
}

User User::enterUser()
{
	cout << "Hello, enter your name" << endl;
	cin.getline(this->name, N);

	cout << "Are you a programmer?" << endl;
	cout << "Yes enter 1,No enter 0" << endl;
	cin >> skills;

	cout << "Enter 0 if you are female, Enter 1 if you are male";
	short gender;
	cin >> gender;  //почему гендер не вводится, а скилс работает?
	switch (gender)
	{
	case 1:
		this->gender = male;
		break;
	case 0:
		this->gender = female;
		break;
	}

	return User(this->name, skills, this->gender);
}


int main()
{
	User user = user.enterUser();
	user.display();
	return 0;
}