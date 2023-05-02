#include <iostream>
struct complex
{
    double real;
    double imaginary;
};
complex subract(complex c1, complex c2)
{
    complex res;
    res.real = c1.real - c2.real;
    res.imaginary = c1.imaginary - c2.imaginary;
    return res;
}
int main()
{
    complex c1 = {12.3, 67.4}, c2 = {54.2, 90.8};
    complex res = subract(c1, c2);
    std::cout << res.real << " " << res.imaginary;
}