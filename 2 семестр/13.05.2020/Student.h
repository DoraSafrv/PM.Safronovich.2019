#pragma once

const int N = 50;
const int M = 200;

class Serviceman
{
public:
	Serviceman(){}
	~Serviceman() {}

	Serviceman(char*, char*, char*, char*, char*, char*, char*, char*, char*, char*, char*, int, int, int, int, int, int);
	void SetServiceman(char*, char*, char*, char*, char*, char*, char*, char*, char*, char*, char*, int, int, int, int, int, int);
	void DisplayServiceman();

	void SetFirstName(char*);
	char* GetFirstName();
	void SetLastName(char*);
	char* GetLastName();
	void SetPatronymic(char*);
	char* GetPatronymic();
	void SetAddress(int, char*, char*, char*, char*, char*, int, int);
	int GetPostindex();
	char* GetCountry();
	char* GetRegion();
	char* GetArea();
	char* GetCity();
	char* GetStreet();
	int GetHouse();
	int GetFlat();
	void SetDate(int, int, int);
	int GetDay();
	int GetMonth();
	int GetYear();
	void SetNationality(char*);
	char* GetNationality();
	void SetPosition(char*);
	char* GetPosition();
	void SetRank(char*);
	char* GetRank();
	
	void EnterServiceman();

private:
	char firstName[N], lastName[N], patronymic[N], country[N], 
region[N], area[N], city[N], street[N], nationality[N], position[N], rank[N];
	int day, month, year, postindex, house, flat;
};

