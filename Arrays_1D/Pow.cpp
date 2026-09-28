#include <iostream>
#include <cmath>
using namespace std;

class Solution {
public:
    double myPow(double x, int n) {
        return pow(x, n);
    }
};

int main() {
    Solution s;

    cout << s.myPow(2.1, 4) << endl;

    return 0;
}