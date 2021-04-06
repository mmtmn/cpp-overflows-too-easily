#include <iostream>
#include <cmath>
using namespace std;

int main() {
    unsigned long long variable = pow(10,80), variable2 = pow(25,57),variable3=pow(25,56);
    cout << variable << "\n" << variable2 << "\n" << variable3;
    /** c++ doesn't use python's way of serving long numbers using c
     *
     *  using c++ 20, this code overflows
     *
     *
     *  python's solution:
     *
     *  >>> print(10**80)
     *  100000000000000000000000000000000000000000000000000000000000000000000000000000000
     */

    return 0;
}