#pragma once
#include "Solution.h"
class ReverseInteger :
    public Solution
{
public :
    ReverseInteger(Parameter* params);
    ~ReverseInteger() {}
    void run();
private:
    int reverse(int x);
};

class ReverseIntegerParams : public Parameter {
protected:
    int x;
public:
    ReverseIntegerParams(int x);
    ~ReverseIntegerParams() {};
    int getX();
};