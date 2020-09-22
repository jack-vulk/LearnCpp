#include "ReverseInteger.h"
#include <iostream>
#include <string>

ReverseInteger::ReverseInteger(Parameter* params) : Solution(params) {

}

void ReverseInteger::run() {

	ReverseIntegerParams* params = (ReverseIntegerParams*)this->params;

	int reversedInt = reverse(params->getX());

	std::cout << reversedInt;
}

int ReverseInteger::reverse(int x) {

	std::string strX = std::to_string(x);
	std::string reversedString = strX;
	std::string result;

	for (int i = 0; i < strX.size(); i++) {
		reversedString[i] = strX[strX.size() - 1 - i];
	}

	if (reversedString.back() == '-') {
		result = '-' + reversedString.substr(0, reversedString.size() - 1);
	}
	else {
		result = reversedString;
	}

	int reversedInt;

	try {
		reversedInt = stoi(result);
	}
	catch (std::out_of_range& e) {
		reversedInt = 0;
	}

	return reversedInt;
}

ReverseIntegerParams::ReverseIntegerParams(int x) {
	this->x = x;
}

int ReverseIntegerParams::getX() {
	return this->x;
}