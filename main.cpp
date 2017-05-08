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
        for (int i = 0; i < digits; ++i){
            int x = val[i] * counter + quotient;
            quotient = 0;

            if (x >= base) {
                val[i] = x % base;
                quotient = x / base;
            }
            else
                val[i] = x;
        }
    }

    int res = 0;
    for (int i = digits - 1; i >= 0; --i)
        res += val[i];

    cout << res << endl;

    return 0;
}