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
public:
	string name;
	char* fullname;
	birthDate birthdate;
	string phoneNumber;
	string city;
	string country;
	Education education;
public:
	void showStudent();

	Student();
	Student(string nme, string cty, string cntry);
	Student(char* fn, int byear, int bmonth, int bday, string phn, string cty, string cntry, string ename, string ecity, string ecountry);


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

