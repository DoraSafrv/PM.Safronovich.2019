#include <iostream>
#include <cstring>
#include "Student.h"

using namespace std;

Serviceman::Serviceman(char* firstName, char* lastName, char* patronymic,
char* nationality, char* country, char* position, char* rank, char* region,
char* area, char* city, char* street, int house, int flat, int day, int month, int year, int postindex)
{
	this->SetServiceman(firstName, lastName, patronymic, nationality, country, position,
rank, region, area, city, street, house, flat, day, month, year, postindex);
}

void Serviceman::SetFirstName(char* firstName)
{
	strcpy(this->firstName, firstName);
}

void Serviceman::SetLastName(char* lastName)
{
	strcpy(this->lastName, lastName);
}

void Serviceman::SetPatronymic(char* patronymic)
{
	strcpy(this->patronymic, patronymic);
}

void Serviceman::SetAddress(int postindex, char* country, char* region, char* area, char* city, char* street, int house, int flat)
{
	this->postindex = postindex;
	strcpy(this->country, country);
	strcpy(this->region, region);
	strcpy(this->area, area);
	strcpy(this->city, city);
	strcpy(this->street, street);
	this->house = house;
	this->flat = flat;
}

void Serviceman::SetDate(int day, int month, int year)
{
	this->day = day;
	this->month = month;
	this->year = year;
}

void Serviceman::SetNationality(char* nationality)
{
	strcpy(this->nationality, nationality);
}

void Serviceman::SetPosition(char* position)
{
	strcpy(this->position, position);
}

void Serviceman::SetRank(char* rank)
{
	strcpy(this->rank, rank);
}

char* Serviceman::GetFirstName()
{
	return this->firstName;
}

char* Serviceman::GetLastName()
{
	return this->lastName;
}

char* Serviceman::GetPatronymic()
{
	return this->patronymic;
}

int Serviceman::GetPostindex()
{
	return this->postindex;
}

char* Serviceman::GetCountry()
{
	return this->country;
}

char* Serviceman::GetRegion()
{
	return this->region;
}

char* Serviceman::GetArea()
{
	return this->area;
}

char* Serviceman::GetCity()
{
	return this->city;
}

char* Serviceman::GetStreet()
{
	return this->street;
}

int Serviceman::GetHouse()
{
	return this->house;
}

int Serviceman::GetFlat()
{
	return this->flat;
}

int Serviceman::GetDay()
{
	return this->day;
}

int Serviceman::GetMonth()
{
	return this->month;
}

int Serviceman::GetYear()
{
	return this->year;
}

char* Serviceman::GetNationality()
{
	return this->nationality;
}

char* Serviceman::GetPosition()
{
	return this->position;
}

char* Serviceman::GetRank()
{
	return this->rank;
}

void Serviceman::SetServiceman(char* firstName, char* lastName, char* patronymic, 
char* nationality, char* country, char* position, char* rank, char* region, 
char* area, char* city, char* street, int house, int flat, int day, int month, int year, int postindex)
{
	this->SetFirstName(firstName);
	this->SetLastName(lastName);
	this->SetPatronymic(patronymic);
	this->SetAddress(postindex, country, region, area, city, street, house, flat);
	this->SetDate(day, month, year);
	this->SetNationality(nationality);
	this->SetPosition(position);
	this->SetRank(rank);
}

void Serviceman::DisplayServiceman()
{
	cout << "Serviceman:"<< endl;
	cout << "\nFirstName: " << this->firstName << "\tLastName: " << this->lastName << "\tPatronymic: " << this->patronymic << endl;
	cout << "\nBirth date of Serviceman: " << this->day << " . " << this->month << " . " << this->year << ";"<< endl;
	cout << "\nAddress of the Serviceman:" << endl;
	cout << "\tPostindex: " << this->postindex << ";" 
	<< "\tCountry: " << this->country << ";"
	<< "\tRegion: " << this->region << ";" 
	<< "\tArea: " << this->area << ";" 
	<< "\tCity: " << this->city << ";"
	<< "\tStreet: " << this->street << ";"
	<< "\tNumber of house: " << this->house << ";"
	<< "\tNumber of flat: " << this->flat << ";" << endl;
	cout << "\nOther information: " << this->nationality <<";"
	<< "\t" << this->position << ";" 
	<< "\t" << this->rank << ".";

}

void Serviceman::EnterServiceman()
{
	const int N = 256;
	char firstName[N] = "", lastName[N] = "", patronymic[N] = "", nationality[N] = "",
country[N] = "", region[N] = "", area[N] = "", city[N] = "", street[N] = "", position[N] = "", rank[N] = "";
	cout << "Enter the first name of Serviceman:";
	cin.ignore();
	cin.getline(firstName, N, '\n');
	cout << "Enter the last name:";
	cin.getline(lastName, N, '\n');
	cout << "Enter the patronymic:";
	cin.getline(patronymic, N, '\n');
	cout << "Enter the nationality:";
	cin.getline(nationality, N, '\n');
	cout << "Enter the position:";
	cin.getline(position, N, '\n');
	cout << "Enter the rank:";
	cin.getline(rank, N, '\n');

	int day = 0, month = 0, year = 0;
	cout << "Enter the date of birth:" << endl;
	cout << "\tday:";
	cin >> day;
	cout << "\tmonth:";
	cin >> month;
	cout << "\tyear:";
	cin >> year;

	cout << "Enter the address.";
	int postindex = 0;
	cout << "Enter the postindex:";
	cin >> postindex;
	cout << "Enter the country:";
	cin.ignore();
	cin.getline(country, N, '\n');
	cout << "Enter the region:";
	cin.getline(region, N, '\n');
	cout << "Enter the area:";
	cin.getline(area, N, '\n');
	cout << "Enter the city:";
	cin.getline(city, N, '\n');
	cout << "Enter the street:";
	cin.getline(street, N, '\n');
	int house = 0, flat = 0;
	cout << "Enter the number of house:";
	cin >> house;
	cout << "Enter the number of flat:";
	cin >> flat;

	this->SetServiceman(firstName, lastName, patronymic, nationality, country, position,
 rank, region, area, city, street, house, flat, day, month, year, postindex);
}