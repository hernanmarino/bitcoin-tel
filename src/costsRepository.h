#pragma once
#include <vector>
#include <iostream>
#include "productCost.h"
class CostsRepository
{
public:
	CostsRepository();
	ProductCost getCostForProduct(const int productId);
private:
	std::vector<std::string> productCosts;
};