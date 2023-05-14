#include <iostream>
struct Account
{
    double balance;
    int number;
    std::string name;
};
void checkAccount(Account p[], int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        if (p[i].balance >= 500)
            arr[i] = -1;
        else
            arr[i] = p[i].number;
    }
}
int main()
{
    int size = 3;
    Account p[] = {{530.0, 123, "ABC"}, {450.0, 234, "BCD"}, {480.0, 345, "DEF"}};
    int arr[size];
    checkAccount(p, arr, size);
    for (int i = 0; i < size; i++)
    {
        std::cout << arr[i] << " ";
    }
}
