#include <stdio.h>
#include <iostream>

using namespace std;

class LongNum {
public:
	long valueNum;

	LongNum() {}

	long input() {
		cout << "Enter value" << endl;
		cin >> valueNum;
		return valueNum;
	}

	long output() {
		cout << "Your value is " << valueNum << endl;
		return valueNum;
	}

	LongNum operator+(LongNum secondTerm) {
		LongNum result;
		result.valueNum = valueNum + secondTerm.valueNum;
		return result;
	}

	LongNum operator-(LongNum subtrahend) {
		LongNum result;
		result.valueNum = valueNum - subtrahend.valueNum;
		return result;
	}

	LongNum operator/(LongNum divider) {
		LongNum result;
		result.valueNum = valueNum / divider.valueNum;
		return result;
	}

	long Sq() {
		valueNum = sqrt(valueNum);
		return valueNum;
	}
};

int main() {
	LongNum A;
	LongNum B;
	B.valueNum = 5;
	A.input();
	cout << "**********************************************************" << endl;
	cout << "**********************************************************" << endl;
	cout << "**********************************************************" << endl;
	A.output();
	cout << "**********************************************************" << endl;
	cout << "**********************************************************" << endl;
	cout << "**********************************************************" << endl;
	A = A + B;
	A.output();
	cout << "**********************************************************" << endl;
	cout << "**********************************************************" << endl;
	cout << "**********************************************************" << endl;
	A = A - B;
	A.output();
	cout << "**********************************************************" << endl;
	cout << "**********************************************************" << endl;
	cout << "**********************************************************" << endl;
	A = A / B;
	A.output();
	cout << "**********************************************************" << endl;
	cout << "**********************************************************" << endl;
	cout << "**********************************************************" << endl;
	A.Sq();						//решить проблему с округлением всегда в меньшую сторону: 
	A.output();					//сделать либо отдельный вывод с истинным корнем либо сделать правильное округление
}