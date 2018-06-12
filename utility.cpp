#include <string>
#include <iostream>
#include "utility.h"

std::string ReadStringFromConsole() {
    std::string ret;
    std::cin >> ret;
    return ret;
}

std::string DescribePersonAsSomething(const std::string& person, const std::string& adjective) {
    return person + " is " + adjective;
}