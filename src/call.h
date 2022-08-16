#pragma once
#include <iostream>
class Call
{
public:
	Call();
	int getDuration(); //in mins
private:
	std::string customerId;
	std::string phoneNumber;
	std::string codeArea;
	int duration;
};

