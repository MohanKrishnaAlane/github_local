#include <iostream>
struct student
{
    int num = 100;
};
int main()
{
    student s;
    std::cout << s.num;
}