#include <iostream>

using namespace std;

/*���� ��� ����� �����. �������� �������� ����������� �� ���. ���� ����� �����, �������� ����� �� ���.*/
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