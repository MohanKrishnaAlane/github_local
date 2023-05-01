#include <iostream>
struct Student
{
    std::string name;
    int rollnum;
    int marks;
};
Student fillStudent(std::string name, int rollnum, int marks)
{
    Student s;
    s.name = name;
    s.rollnum = rollnum;
    s.marks = marks;
    return s;
}
void printStudent(Student s)
{
    std::cout << "Student information:" << std::endl;
    std::cout << s.name << std::endl;
    std::cout << s.rollnum << std::endl;
    std::cout << s.marks << std::endl;
}
int main()
{
    Student s[2];
    s[0] = fillStudent("ABC", 123, 100);
    s[1] = fillStudent("DEG", 234, 95);
    printStudent(s[0]);
    printStudent(s[1]);
}