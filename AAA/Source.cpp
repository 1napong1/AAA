#include <stdio.h>
#include <iostream>

struct st{
	int point[100];
	std::string name[100];
};

void ds(int manud)
{
	st p1;
	int sumpoint = 0;

	for (int i = 0;i < manud;i++)
	{
		std::cin >> p1.name[i] >> p1.point[i];
		sumpoint += p1.point[i];
	}
	float x = sumpoint / manud;



	for (int i = 0;i < manud;i++)
	{
		if (p1.point[i] >= x)
		{
			std::cout << p1.name[i];
			if (i + 1 < manud)
			{
				std::cout << ",";
			}
			if (i + 1 == manud)
			{
				std::cout << " are passed the exam";
			}
		}
	}
}
 int main()
{
	int d;
	std::cin >>d;
	ds(d);
	return 0;
}