#include<iostream>
using namespace std;
int main() {
	int a = -45;
	int b = 0;
	for (int i = 1; i < 10000; i += 7) {
		b = a * i;
		a = b - a/9;
		cout << b << endl;
	}
	return 0;
}