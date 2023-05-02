#include <iostream>
struct student
{
    std::string name;
    double marks[4];
};
double calculatePercentage(student s)
{
    double total;
    for (int i = 0; i < 4; i++)
    {
        total += s.marks[i];
    }
    return (total / 400) * 100;
}
int main()
{
    student s = {"ABC", {79.500000, 63.700000, 72.300000, 52.900000}};
    std::cout << calculatePercentage(s);
}