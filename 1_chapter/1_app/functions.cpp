#include <iostream>

using namespace std;

/* Hello, World */
int hello_world() {
    cout << "Hello world!" << "\n";
    return 0;
}

/* N ������� ����� K ������� � ������ ��������� �� �������.����������, ������� ������� ���������� ������ �������.*/
int nuts_for_everyone() {
    int a = 0, b = 0;
    cin >> a >> b;
    cout << b / a;
    return 0;
}

/* N ������� ����� K ������� � ������ ��������� �� �������. ����������, ������� ������� ��������� ����� ����, ��� ��� ������� ������� ���� ������ ���������� �������.*/
int nuts_left() {
    // put your code here
    int a = 0, b = 0;
    cin >> a >> b;
    cout << b % a;
    return 0;
}

/* ���� ����������� �����, �������� ��� ��������� �����.*/
int last_digit() {
    int a = 0;
    cin >> a;
    cout << a % 10;
    return 0;
}

/* ���� ���������� �����. �������� ��� ������ ����� (����� ��������) */
int first_digit_of_two() {
    int a = 0;
    cin >> a;
    cout << a / 10;
    return 0;
}

/* ���� ����� ��������������� ����� N, ���������� ����� �������� � ��� (������������� ����� �����). 
 *���� ������������� ����� ���, �� ����� �������, ��� ����� �������� ����� ����.
 */
int second_from_end_digit() {
    int a = 0;
    cin >> a;
    cout << (a / 10) % 10;
    return 0;
}

/* ���� ����� ����������� �����. ������� ����� ��� ����. */
int sum_ciphr() {
    int a = 0;
    cin >> a;
    cout << (a % 10) + (a / 100) + ((a / 10) % 10);
    return 0;
}

/* �� ���� ������ ����������� ����� N. �������� ��������� �� ��� ������ ����� */
int next_chet() {
    int a = 0;
    cin >> a;
    cout << a + 2 - (a % 2);
    return 0;
}

/* � ��������� ����� ������ ������� ��� ����� �������������� ������ � ����������� �������� ��� ��� ������ �������. 
�� ������ ������ ����� ������ ��� ��������. �������� ���������� �������� � ������ �� ���� �������. 
�������� ���������� ����� ����, ������� ����� ���������� ��� ���. ������ ����� ����� � ����� ��������.*/

int school_parts() {
    int a = 0, b = 0, c = 0;
    cin >> a >> b >> c;
    cout << (a / 2 + a % 2) + (b / 2 + b % 2) + (c / 2 + c % 2);
    return 0;
}

int rub_copeek() {
    int a = 0, b = 0, N = 0;
    cin >> a >> b >> N;
    int rub = a * N + (b * N) / 100;

    cout << rub << " " << (b * N) % 100;
    return 0;
}