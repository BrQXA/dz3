/*���� ����������� ����� N. �������� ��� ��� ����� �� �����, � ������� �������, �������� �� ��������� ��� ������ ��������. (��������!)*/
#include <iostream>
using namespace std;
int num;
int N(int c) {
    if (num / c)
        N(c * 10);
    c /= 10;
    cout << num / c << " ";
    num %= c;
    return 0;
}
void main() {
    cin >> num;
    N(10);
    cout << endl;
}