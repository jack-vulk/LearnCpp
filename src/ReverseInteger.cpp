#include "ReverseInteger.h"
#include <iostream>
#include <string>



int reverseByString(int x) {

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

int reverseByMod(int x) {

	int dividedX = x;
	int reversedX = 0;
	int lastDigit;
	bool isNegative = (dividedX < 0);
	int bound = isNegative ? INT_MIN : INT_MAX;
	int checkBound;
	

	while (dividedX != 0) {
		lastDigit = dividedX % 10;
		dividedX = dividedX / 10;

		checkBound = (bound - lastDigit) / 10;

		if ((isNegative && reversedX < checkBound)
			|| (!isNegative && (reversedX > checkBound))) {
			reversedX = 0;
			break;
		}
		reversedX = reversedX * 10 + lastDigit;
	}

	return reversedX;
}


ReverseInteger::ReverseInteger(Parameter* params) : Solution(params) {

}

void ReverseInteger::run() {

	ReverseIntegerParams* params = (ReverseIntegerParams*)this->params;

	int reversedInt = reverse(params->getX());

	std::cout << reversedInt;
}

int ReverseInteger::reverse(int x) {

	// return reverseByString(x);
	return reverseByMod(x);
}

ReverseIntegerParams::ReverseIntegerParams(int x) {
	this->x = x;
}

int ReverseIntegerParams::getX() {
	return this->x;
}