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

	/*	
	std:: vector<unsigned> scores(11, 0); // 11 buckets, all initially 0
	unsigned grade;
	while (std::cin >> grade) { // read the grades
	if (grade <= 100) // handle only valid grades
		++scores[grade/10]; // increment the counter for the current cluster
	}
	std::cout <<" ---------printing scores-------------" <<std::endl;
	for (int i = 0; i < 10; ++i) {
		std::cout << scores[i] << " ";

	std::cout <<std::endl
	*/

	/*
	std::string test_string = "This is a test for string iteration";
	for (std::string::iterator sitr = test_string.begin(); sitr != test_string.end(); ++sitr)
		std::cout << *sitr;
	std::cout << std::endl;
	*/
	
	std::string test_string = "This is another test for string iteration";
	for (auto sitr2 = test_string.begin(); sitr2 != test_string.end(); ++sitr2)
		std::cout << *sitr2;
	std::cout << std::endl;
	std::cout << "-----------------------------------------------" <<std::endl;

	int integer(3);

	std::cout << "Integer is:" << integer << "\n";


}	
