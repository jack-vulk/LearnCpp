#pragma once

#include "Solution.h"
#include <vector>

class TwoSum : public Solution {

public:
	TwoSum(Parameter* params);
	void run();
private:
	std::vector<int> twoSum(std::vector<int>& nums, int target);
};

class TwoSumParameter : public Parameter {
protected:
	std::vector<int> nums;
	int target;

public:
	TwoSumParameter(std::vector<int> nums, int target);
	~TwoSumParameter();

	std::vector<int> getNums();
	int getTarget();
};