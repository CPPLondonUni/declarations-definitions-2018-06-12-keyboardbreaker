#include <iostream>
#include <string>

#include "utility.h"

std::string ReadStringFromConsole() {
	std::string ret;
	std::cin >> ret;
	return ret;
}

std::string DescribePersonAsSomething(const std::string& person, const std::string& adjective) {
	return person + " is " + adjective;
}

//Leave main() alone! THAT MEANS DON'T TOUCH CODE BELOW THIS LINE!!!
int main() {
	std::cout << "Enter a name: ";
	auto name = ReadStringFromConsole();
	std::cout << "Enter an adjective: ";
	auto adjt = ReadStringFromConsole();

	std::cout << DescribePersonAsSomething(name, adjt) << '\n';
	return 0;
}

