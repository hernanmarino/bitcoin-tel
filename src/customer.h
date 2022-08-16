#pragma once
#include <iostream>
#include <vector>

class Customer
{
public:
	Customer(int id, std::string name);
private:
	int id;
	std::string name;
	std::vector<std::string> preferredNumbers(5);
};

