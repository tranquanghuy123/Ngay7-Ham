#include<iostream>
using namespace std;

int main() {
	int a, b;
	cout << " Nhap a: " << endl;
	cin >> a;
	cout << " Nhap b: " << endl;
	cin >> b;
	int c = a;
	a = b;
	b = c;
	cout << " a = " << a << ", b = " << b << endl;
	return 0;
}