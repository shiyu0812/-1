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

	cout << "請輸入兩個整數，用空格或換行分隔: ";
    cin >> num1 >> num2;

    int greatestCommonDivisor = calculateGCD(num1, num2);

    cout << "最大公因數是: " << greatestCommonDivisor << endl;

    return 0;
}

