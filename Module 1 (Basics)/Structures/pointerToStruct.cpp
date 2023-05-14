#include <iostream>
struct Student
{
    std::string name;
    int rollnum;
    int marks;
};
int main()
{
    Student s1;
    s1.name = "ABC";
    Student *ptr = &s1;
    (*ptr).rollnum = 123;
    ptr->marks = 100;
    std::cout << (*ptr).name << " " << s1.rollnum << " " << ptr->marks;
}