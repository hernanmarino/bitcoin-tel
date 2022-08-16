#pragma once
#include <iostream>
#include <vector>
class BillingEngine
{
public:
	BillingEngine();
	void startProcess();
private:
	std::vector<std::string> productCosts;
};