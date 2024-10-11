#include <iostream>
#include "Student.h"

using namespace std;

int main()
{
    Student student1;

    student1.setName("Popovich Alesha Viktorovich");
    student1.setBirthDate(1988, 06, 15);
    student1.setPhoneNumber("998885533");
    student1.setCity("s.Bogatirskoye");
    student1.setCountry("Poltava");
    student1.setEducation("Shkola Bogatirej", "s.Bogatirskoye", "Poltava");
    
    student1.showStudent();
}

