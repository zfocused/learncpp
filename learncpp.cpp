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
	
	/*
	std::string test_string = "This is another test for string iteration";
	for (auto sitr2 = test_string.begin(); sitr2 != test_string.end(); ++sitr2)
		std::cout << *sitr2;
	std::cout << std::endl;
	std::cout << "-----------------------------------------------" <<std::endl;

	int integer(3);

	std::cout << "Integer is:" << integer << "\n";

	std::cout <<"-------------------------------------------------" << std::endl;
	*/ 
	
	/*
	const char ca[] = {'h', 'e', 'l', 'l', 'o'};
	const char *cp = ca;
	while (*cp) {
		std::cout << *cp << ":";
		++cp;
	}
	std::cout << std::endl;
	*/
	
	/*	
	std::string test_string = "This is a test string";
	
	std::string *string_ptr = &test_string;
	
	std::cout << "The address of the string pointer is: " << string_ptr << std::endl;
	std::cout << "The content of the string pointer is: " << *string_ptr << std::endl;	
	*/

	/*

	std::string test = "This is yet anotehr test string";

	std::cout << test.size() << "\n";
	*/

	/*
	std::string string_array[] = {"Hello", "wonderful", "world!"};

	for  (auto itr: string_array) {
		std::cout << itr << " ";
	}

	std::cout << std::endl;

	std::cout << "=====================================================\n";
	*/
	
	/*
	std::vector<std::string> vec;  vec = {"Hello", "wonderful", "world!"};
	for  (std::vector<std::string>::iterator itr = vec.begin(); itr != vec.end(); ++itr) {
		std::cout << *itr << " ";
	}

	std::cout << std::endl;
	*/

	/*

	
	std::vector<std::string> vec;  vec = {"Hello", "wonderful", "world!"};

	for  (auto itr = vec.begin(); itr != vec.end(); ++itr) {
		std::cout << *itr << " ";
	}

	std::cout << std::endl;
	
	*/

	/* 
	std::vector<std::string> vec;
	
	vec = {"Hello", "wonderful", "world!"};

	for (auto &itr: vec) {
	
	std::cout << itr << " ";
	}

	std::cout << std::endl;
	
	std::cout << "++++++++++++++++++++++++++++++++++++++" <<std::endl;

	*/

	/*
	std::vector<std::string> vec = {"Hello", "wonderful", "world!"}	;

	for (auto &itr: vec) {
	
	std::cout << itr << " ";
	}

	std::cout << std::endl;
	*/
/*
	std::cerr << "This is a test" << std::endl;
*/

	struct Person {
		Person (std::string name, std::string id_no, std::string occupation):
		name(name),
		id_no(id_no),
		occupation(occupation) {};

		std::string name;
		std::string id_no;
		std::string occupation;

		void show(){
			std::cout << "The person's name is: " << name << ", " << "ID is: " << id_no << ", " << "Occupation is: " << occupation << std::endl;
		}
	};

	Person male1("John", "22020502", "Painter");

	/*
	std::cout << "The person's name is: " << male1.name << ", " << " ID is: " << male1.id_no << ", " << "Occupation is: " << male1.occupation << std::endl;
	*/

	std::cout << "The class size is: " << sizeof(male1) << std::endl;
	male1.show();

	struct X {
		X(int i, int j) : base(i), rem(base % j) {}
		int rem, base;
		//int base, rem;
	};

	X x1(10, 5);

	std::cout << x1.base << " " << x1.rem << std::endl;


}
