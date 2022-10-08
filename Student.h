#ifndef STUDENT_H_
#define STUDENT_H_
#include <string>
class Student {
public:
  Student();
  Student(std::string School, double Gpa);
private:
  std::string m_School;
  double m_Gpa;
};
#endif