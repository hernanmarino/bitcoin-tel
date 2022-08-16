#pragma once
#include <iostream>
#include <vector>
#include "call.h"
class BillingRequest
{
public:
	BillingRequest();
private:
	startDate;
	endDate;
	std::vector<std::string> customers;
	Call productType;
	std::vector<std::string> productCosts; //we could set a diff product costs source (eg last year)
};