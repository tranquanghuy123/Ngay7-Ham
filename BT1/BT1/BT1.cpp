#include <iostream>
using namespace std;

int main()
{
	int a, b;
	Nhapso(a);
	Nhapso(b);
	int S = tong(a, b);
	int H = hieu(a, b);
	int N = nhan(a, b);
	int C = thuong(a, b);

}
void Nhapso(int z) {

	cout << " Vui long nhap so: " << endl;
	cin >> z;
}

int tong(int a, int b) {
	int tong;
	tong = a + b;
	return tong;
}
int hieu(int a, int b) {
		int hieu;
		hieu = a - b;
		return hieu;
}
int nhan(int a, int b) {
	int nhan;
	nhan = a * b;
	return nhan;
}
int thuong(int a, int b) {
	int thuong;
	thuong = a / b;
	return thuong;
}