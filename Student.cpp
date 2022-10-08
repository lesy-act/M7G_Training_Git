#include"Student.h"
Student::Student()
{
    cnt++;
}
Student::Student(std::string &School, int &Gpa):m_School(School),m_Gpa(Gpa)
{

}
void Student::setSchool(const std::string &nameSchool)
{
    m_School = nameSchool;
}
void Student::setGpa(const int &Gpa)
{
    m_Gpa = Gpa;
}
std::string Student::getSchool()const
{
    return m_School;
}
int Student::getGPA()const
{
    return m_Gpa;
}
int Student::cnt = 0;