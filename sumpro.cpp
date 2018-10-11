
#include <iostream>
#include <math.h>
#include <cmath>
#define MODM 1000000007
using namespace std;

int main() {
    long long int total, mod_val, test, num, i, j, sqrt_num, left_end, right_end,last_num_excluded;
    cin>>test;
    while (test--) {
        cin>>num;
        total = 0;
        sqrt_num = sqrt(num);
        for (i = 1; i <= sqrt_num; i++) {
            right_end = num / i;
             left_end = num / (i + 1);
            total = (total + i * (((right_end*(right_end+1))/2) - ((left_end*(left_end+1))/2))) % MODM;
        }
        last_num_excluded = num / i;
        for (i = 1; i <= last_num_excluded; i++) {
            total = (total + i*(num / i))%MODM;
        }
        cout << total << endl;
    }
    return 0;
}
