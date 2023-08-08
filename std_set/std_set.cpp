/*
* A program used to store the odd and even numbers entered by 
* a user. Since I used, if the user inputs a previously existing 
* number, it will be ignored as std::set are only used to store 
*							UNIQUE elements. 
*/

#include <iostream>
#include <set>

int main() {
	std::set <int> oddSet; 
	std::set <int> evenSet; 
	int inputNum; 

	do {
		std::cout << "Please input number and hit 0 to quit:" << std::endl;
		std::cin >> inputNum;

		if (inputNum % 2 == 0)
			evenSet.insert(inputNum);

		else
			oddSet.insert(inputNum); 
	} while (inputNum != 0); 

	evenSet.erase(0);

	std::cout << "You have entered " << oddSet.size() << " unique odd elements." << std::endl; 
	std::cout << "Your odd numbers are: " << std::endl; 
	for (auto i : oddSet)
		std::cout << i << std::endl; 

	std::cout << "You have enbered " << evenSet.size() << " unique Even elements" << std::endl;
	std::cout << "Your even numbers are: " << std::endl;
	for (auto i : evenSet)
		std::cout << i << std::endl;

	return 0; 
}