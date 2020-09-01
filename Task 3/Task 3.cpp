#include <iostream>

int Age;

int main()
{

	//Get Age.
	std::cout << "How old are you? \n";
	std::cin >> Age;

	//<20
	if (Age < 20) {
		std::cout << "You are young. \n";
	}
	//20-40
	if (Age >= 20 && Age <= 40) {
		std::cout << "You are grown up. \n";
	}
	//41-59
	if (Age > 40 && Age < 60) {
		std::cout << "You are old. \n";
	}
	//>=60
	if (Age >= 60) {
		std::cout << "You ARE really old \n";
	}

}
