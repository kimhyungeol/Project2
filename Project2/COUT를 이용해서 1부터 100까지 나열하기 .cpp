#include<iostream>
using namespace std;

int main() {

	int n = 0;
	int r = 0;

	for (n = 0; n < 90; n += 10) {// 10의 단위로 증가한다.
		for (r = 1; r < 11; r++)
			cout << n + r << "\t";// 포문 두개로 1부타 100까지 구현 가능 
		cout << '\n';// 10의 단위로 끊어야 하기 때문에 배치
	}
	return 0;
}