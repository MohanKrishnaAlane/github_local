#include <iostream>
#include <vector>

int main()
{
	std::vector<int> v1{1, 2, 3, 4, 5};
	for(auto i:v1)
	{
		std::cout<<i<<"_ "<<std::endl;
	}
	auto lambda = [vec = std::move(v1)](){
		for(auto i:vec)
		{
			std::cout<<i<<" ";
		}
	};
	for(auto i:v1)
	{
		std::cout<<i<<": "<<std::endl;
	}
	lambda();
	return 0;
}
