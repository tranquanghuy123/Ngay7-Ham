#include <iostream>
using namespace std;
bool songuyento(int x)
{
	if (x < 2)
		return false;
	for(int i = 2; i <= x/2; i++)
		if (x % i == 0)
			return false;
	return true;
}
int main()
{
	int n;
	cout << " Nhap n: " << endl;
	cin >> n;
	if (songuyento(n) == true)
		cout << " TRUE" << endl;
	else
		cout << " FALSE" << endl;
}