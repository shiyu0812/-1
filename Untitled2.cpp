#include <iostream>
using namespace std;

int calculateGCD(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int main() {
    int num1, num2;

	cout << "�п�J��Ӿ�ơA�ΪŮ�δ�����j: ";
    cin >> num1 >> num2;

    int greatestCommonDivisor = calculateGCD(num1, num2);

    cout << "�̤j���]�ƬO: " << greatestCommonDivisor << endl;

    return 0;
}

