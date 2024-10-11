#pragma once
#include <string>

using namespace std;

struct birthDate
{
	int year;
	int month;
	int day;
};

struct Education
{
	string name;
	string city;
	string country;

};

class Student
{
	string name;
	birthDate birthdate;
	string phoneNumber;
	string city;
	string country;
	Education education;
public:
	void showStudent();

	string getName();
	birthDate getBirthDate();
	string getPhoneNumber();
	string getCity();
	string getCountry();
	Education getEducation();

	void setName(string n);
	void setBirthDate(int y,int m, int d);
	void setPhoneNumber(string n);
	void setCity(string c);
	void setCountry(string c);
	void setEducation(string n, string c,string coun);
};

