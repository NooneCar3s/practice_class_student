#pragma once
#include <string>


using namespace std;

struct birthDate
{
	int day;
	int month;
	int year;
};

struct Education
{
	string city;
	string country;
	string name;

};

class Student
{
public:

	static int count;

	string name;
	char* fullname;
	birthDate birthdate;
	string phoneNumber;
	string city;
	string country;
	Education education;
public:
	void showStudent();

	Student() :Student{ nullptr,1,1,1,"1","1","1","1","1","1" } {
		count++;
	}
	Student(string nme, string cty, string cntry);
	Student(char* fn, int byear, int bmonth, int bday, string phn, string cty, string cntry, string ename, string ecity, string ecountry):
		fullname{ fn ? new char[strlen(fn) + 1] : nullptr }, birthdate{ bday, bmonth, byear },
		phoneNumber{phn},city{cty},country{cntry},education{ecity,ecountry,ename}{
		count++;
		if (fullname) {
			strcpy_s(fullname, strlen(fn) + 1, fn);
		}
	}


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

	~Student();
};

int Student::count{ 0 };

