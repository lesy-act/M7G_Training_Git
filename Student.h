#ifndef STUDENT_H_
#define STUDENT_H_
#include <string>
class Student {
public:
  Student();
  Student(std::string &School, double &Gpa);
  void setSchool(const std::string &schoolName);
  void setGpa(const double &Gpa);
  std::string getSchool()const;
  double getGPA()const;
private:
  std::string m_School;
  double m_Gpa;
};
#endif