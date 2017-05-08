#include <iostream>
#include <vector>

using namespace std;

int main() {
    int base = 10;
    int digits = 500;
    int n = 100;
    vector<int> val(digits, 0);
    val[0] = 1;

    int quotient = 0;
    for (int counter = 2; counter <= n; ++counter) {
        for (int i = 0; i < digits; ++i) {
            int x = val[i] * counter + quotient;

            val[i] = x % base;
            quotient = x / base;
        }
    }

    int res = 0;
    for (int i = 0; i < digits; i++)
        res += val[i];

    cout << res << endl;

    return 0;
}