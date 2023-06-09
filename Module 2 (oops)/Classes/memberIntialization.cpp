
// we can initialize members of other data types like string as
// shown on line number 13. However, array members can’t be
// initialized in classes. Similarly, if we uncomment line 14,
// we get a compilation error. This is because if we declare an array
// without providing the size,it results in a one-size array, arr[0] in C++ classes.
#include <iostream>
#define PI 3.1416
using namespace std;

class Circle
{
private:
    string mod = "debug";
    // int arr[] = {1, 2, 3, 4, 5};
    int radius = 1;

public:
    void setRadius(int r)
    {
        if (r >= 0)
        {
            radius = r;
        }
    }

    int getRadius()
    {
        return radius;
    }

    double getArea()
    {
        return PI * radius * radius;
    }
};

int main()
{
    Circle c;
    cout << "The area of a circle of radius " << c.getRadius() << " is " << c.getArea() << endl;
    return 0;
}