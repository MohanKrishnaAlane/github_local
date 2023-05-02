#include <iostream>
void area(double *length, double *width, double *result)
{
    *result = *length * *width;
}
int main()
{

    double len = 4.6, width = 6.7;
    double *result;
    area(&len, &width, result);
    std::cout << *result;
}