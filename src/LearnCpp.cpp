#include <iostream>
#include "TwoSum.h"
#include "Solution.h"
#include "TwoSum.h"
#include "ReverseInteger.h"

using namespace std;


int main()
{
    cout << "Hello World!\n";
    Solution* solution;
    Parameter* params;

    // TwoSum
    params = new TwoSumParameter(vector<int>{1, 2, 5, 7}, 6);
    solution = new TwoSum(params);

    solution->run();

    // ReverseInteger
    params = new ReverseIntegerParams(-10);
    solution = new ReverseInteger(params);

    solution->run();
}

