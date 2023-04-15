// N белочек нашли K орешков и решили разделить их поровну. Определите, сколько орешков останется после того, как все белочки возьмут себе равное количество орешков.

#include <iostream>

using namespace std;

int main() {
    // put your code here
    int a = 0, b = 0;
    cin >> a >> b;
    cout << b % a;
    return 0;
}