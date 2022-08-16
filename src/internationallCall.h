#pragma once
#include "call.h"
class InternationallCall : public Call
{
public:
	InternationallCall();
private:
	int countryCode;
};

