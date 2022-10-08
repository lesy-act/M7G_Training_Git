#ifndef STUDENT_H_
#define STUDENT_H_
#include <string>
class Student {
public:
  Student();
  Student(std::string &School, int &Gpa);
  void setSchool(const std::string &schoolName);
  void setGpa(const int &Gpa);
  std::string getSchool()const;
  int getGPA()const;
private:
  std::string m_School;
  int m_Gpa;
};
#endif