#include <iostream>
#include "ScheduleClass.h"
#include <fstream>
#include <iostream>

using namespace std;

Schedule AddExam();
void MySchedule();
void DeveloperSchedule();

int main()
{
	bool s = true;
	while (s)
	{
		cout << "Do you want to create your schedule of exams or mine? :)" << endl;
		cout << "1 >> I want to create my schedule.\n2 >> I want to see your schedule.\n3 >> Exit." << endl;
		char choose = 'y';

		cin >> choose;
		system("cls");
		switch (choose)
		{
		case '1':
			MySchedule();
			break;
		case '2':
			DeveloperSchedule();
			break;
		case '3':
			s = false;
		default:
			continue;
		}
	}
}

Schedule AddExam()
{  
	int number = 0;
	int monthnumber = 0;
	char* subject = new char[30];

	cout << "Please enter the number of month when is your exam(number 1...12): ";
	cin >> monthnumber;
	cout << endl << "Please enter the number of day in your month when is your exam(number from 1...31): ";
	cin >> number;

	char symbol = 'y';
	int i = 0;
	cout << endl << "Please enter the name of your your exam(NECESSARILY with point in the end!!!)";
	cout << endl << "Example: Math.";
	cout << endl << "Name of exam: ";

	while (i < 30)
	{
		cin >> symbol;
		if ((int(symbol) > 64 && int(symbol) < 91) || (int(symbol) > 96 && int(symbol) < 123))
		{
			subject[i++] = symbol;
		}
		else
		{
			subject[i] = '\0';
			break;
		}
	}

	Schedule a(number, monthnumber, subject);
	a.ShowInfo();
	system("cls");

	return a;
}

void MySchedule()
{
	cout << "Please enter count of your exams: ";
	int count = 0;
	cin >> count;

	Schedule* schedule = new Schedule[count];
	cout << endl << "Enter all exams in shedule :)" << endl;
	system("pause");
	system("cls");

	for (int i = 0; i < count; i++)
	{
		schedule[i] = AddExam();
	}

	cout << "Now you can see your schedule: " << endl;
	for (int i = 0; i < count; i++)
	{
		cout << i + 1;
		schedule[i].ShowInfo();
	}

	system("pause");
	system("cls");
}

void DeveloperSchedule()
{
	Schedule schedule[5];
	Schedule a;

	a.Set(16, 5, "Algebra.");
	schedule[0] = a;
	a.Set(20, 5, "Geometry.");
	schedule[1] = a;
	a.Set(23, 5, "MathematicalAnalysis.");
	schedule[2] = a;
	a.Set(25, 5, "DiscreteMath.");
	schedule[3] = a;
	a.Set(27, 5, "Programming.");
	schedule[4] = a;

	cout << "Now you can see schedule of developer: " << endl;
	for (int i = 0; i < 5; i++)
	{
		cout << i + 1;
		schedule[i].ShowInfo();
	}

	system("pause");
	system("cls");
}