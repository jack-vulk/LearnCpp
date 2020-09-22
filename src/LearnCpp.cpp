#include <iostream>
#include "TwoSum.h"
#include "Solution.h"
#include "TwoSum.h"

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
}

