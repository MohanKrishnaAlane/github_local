#include <iostream>
using namespace std;
int ticketPrice(int& iPerson)
{
	int aPrice;
	if(iPerson == 1)
	{
		aPrice = 100;
		return aPrice;
	}
	else
		iPerson--;
	return ticketPrice(iPerson);
}
int main()
{
	int a = 2;
	std::cout<<ticketPrice(a);
}
