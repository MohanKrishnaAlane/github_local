#include <iostream>
struct Student
{
    int marks;
    std::string name;
    int rollnum;
} s1, s2;
int main()
{
    Student s3;
    s1.marks = 95;
    s1.name = "ABC";
    s1.rollnum = 123;

    s2.marks = 86;
    s2.name = "DEF";
    s2.rollnum = 234;

    s3.marks = 99;
    s3.name = "GHI";
    s3.rollnum = 345;

    std::cout << s1.name << " " << s1.marks << " " << s1.rollnum << std::endl;
    std::cout << s2.name << " " << s2.marks << " " << s2.rollnum << std::endl;
    std::cout << s3.name << " " << s3.marks << " " << s3.rollnum << std::endl;
}