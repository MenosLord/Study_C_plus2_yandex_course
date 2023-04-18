#include <iostream>

using namespace std;

/*Даны два целых числа. Выведите значение наибольшего из них. Если числа равны, выведите любое из них.*/
int that_more() {
    int a = 0, b = 0;
    cin >> a >> b;
    if (a <= b) {
        cout << b;
    }
    else {
        cout << a;
    }
    return 0;
}