#include <iostream>
#include <vector>
#include <string>

int main()
{
	/*
	std::vector<std::string> vec = {"Hello", "World"};

	std::cout << vec[0] << " " << vec[1] << std::endl;

	std::cout << "The size of vec is : " << vec.size() << "." <<std::endl;

	std::string str = "This is a test";

	std::cout << str <<std::endl;

	std::cout << "-----------------------------------------" << std::endl;
	*/

	std:: vector<unsigned> scores(11, 0); // 11 buckets, all initially 0
	unsigned grade;
	while (std::cin >> grade) { // read the grades
	if (grade <= 100) // handle only valid grades
		++scores[grade/10]; // increment the counter for the current cluster
	}
	std::cout <<" ---------printing scores-------------" <<std::endl;
	for (int i = 0; i < 10; ++i) {
		std::cout << scores[i] << " ";
	}

	std::cout <<std::endl;
}
