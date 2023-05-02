#include <iostream>
struct Student
{
    std::string name;
    int rollnum;
    int marks;
};
int main()
{
    Student s[3];
    s[0].name = "ABC";
    s[0].rollnum = 123;
    s[0].marks = 100;

    s[1].name = "DEF";
    s[1].rollnum = 234;
    s[1].marks = 95;

    s[2] = {"GHI",345,98};

    for (int i = 0; i < 3; i++)
    {
        std::cout << s[i].name << " " << s[i].rollnum << " " << s[i].marks << std::endl;
    }
}