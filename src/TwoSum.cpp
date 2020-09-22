#include "Solution.h"
#include <vector>
#include "TwoSum.h"
#include <iostream>
#include <map>

using namespace std;


TwoSum::TwoSum(Parameter* params) : Solution(params) {

}

void TwoSum::run() {

	TwoSumParameter* myParams = dynamic_cast<TwoSumParameter*>(this->params);

	vector<int> paramsNum = myParams->getNums();

	vector<int> twoSumResult = twoSum(paramsNum, myParams->getTarget());

	for (int iResult = 0; iResult < twoSumResult.size(); iResult++) {
		cout << twoSumResult[iResult] << endl;
	}
}


vector<int> TwoSum::twoSum(vector<int>& nums, int target) {

	vector<int> foundResult;
	int diff;
	map<int, int> diffMap;

	for (int index = 0; index < nums.size(); index++) {

		diff = target - nums[index];
		if (diffMap.count(nums[index]) > 0) {
			foundResult.push_back(diffMap[nums[index]]);
			foundResult.push_back(index);
			return foundResult;
		}

		diffMap[diff] = index;

	}

	return foundResult;
}




TwoSumParameter::TwoSumParameter(vector<int> nums, int target) {
	this->nums = nums;
	this->target = target;
}

TwoSumParameter::~TwoSumParameter() {

}

std::vector<int> TwoSumParameter::getNums() {
	return this->nums;
}

int TwoSumParameter::getTarget() {
	return this->target;
}