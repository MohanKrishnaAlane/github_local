#include<functional>
using namespace std;
#include<iostream>
std::function<int(int,int)> makeLambda(int a)
{
	return [a](int x,int y){return a + x + y;};
}
int main()
{
	auto add5 = makeLambda(5);
	auto add10 = makeLambda(10);
	std::cout<<add5(5,6)<<endl;
	//std::cout<<add10()<<endl;
	return 0;
}