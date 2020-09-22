#include<iostream>
using namespace std;

inline int odd(int x) {// 여기에 인라인 함수를 붙이면 오버헤드가 사라진다. 가능한 작음 함수들에는 인라인을 붙이는게 편함
	return (x % 2);

}
int main() {
	int sum = 0;

	for (int i = 1; i < 10000; i++) {
		if (odd(i))// 함수를 만번호출 해야하므로 상당한 오버헤드 시간이 소모된다.

			sum += i;
	}


	cout << sum;
	return 0;
}