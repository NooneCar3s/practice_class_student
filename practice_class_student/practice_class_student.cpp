#include <iostream>
#include "Student.h"


using namespace std;



int main()
{
    birthDate a{ 1,2,3 };

    cout << a.day << endl;
    cout << a.month << endl;
    cout << a.year << endl;

    Student student1,student2("Name","City","Country"), student3((char*)"Name", 1999, 10, 10, "12345", "City", "Country", "Ename", "Ecity", "Ecountry");

    student1.showStudent();
    cout << endl;

    student1.setName("Popovich Alesha Viktorovich");
    student1.setBirthDate(1988, 06, 15);
    student1.setPhoneNumber("998885533");
    student1.setCity("s.Bogatirskoye");
    student1.setCountry("Poltava");
    student1.setEducation("Shkola Bogatirej", "s.Bogatirskoye", "Poltava");
    
    student1.showStudent();
    cout << endl;
    student2.showStudent();
    cout << endl;
    student3.showStudent();
    cout << endl;

}

