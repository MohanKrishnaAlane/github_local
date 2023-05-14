#include<iostream>
using namespace std;
#include<vector>
#include<numeric>
using namespace std::string_literals;
int main()
{
	auto add5 = [](int a,int b){return a+b;};
	auto adds = [](auto a,auto b){return a + b;};
	std::vector<int> myVector{1,2,3,4,5};
	cout<<std::accumulate(myVector.begin(),myVector.end(),0,add5);
	cout<<std::accumulate(myVector.begin(),myVector.end(),0,adds);
    std::vector<string> myVec{"Hello"s,"world"s};
	cout<<std::accumulate(myVec.begin(),myVec.end(),""s,adds);
}