#include<iostream>
using namespace std;

int main() {

	int r = 1;
	int n = 1;
	for (r = 1; r < 10; r++) {
		for (n = 1; n < 10; n++) {
			cout << n << "x" << r << "=" << n * r << "\t";
		}
		cout << '\n';
	}
	return 0;
}