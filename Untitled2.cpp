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

	cout << "叫块ㄢ俱计ノ┪传︽だ筳: ";
    cin >> num1 >> num2;

    int greatestCommonDivisor = calculateGCD(num1, num2);

    cout << "程そ计琌: " << greatestCommonDivisor << endl;

    return 0;
}

