#pragma once


class Parameter {

public:
	virtual ~Parameter() {}
};


class Solution {

public:
	Solution(Parameter* params);
	virtual ~Solution() {}
	virtual void run() = 0;
protected:
	Parameter* params;
};
