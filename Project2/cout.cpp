#include<iostream>
using namespace std;// std를 생략하고 사용할 수 있음 
double area(int r);// 함수의 원형을 선언

double area(int r) {// 함수를 구현함
	return 3.14 * r * r;// 반지름 r의 원의 면적
}

int main() {
	int n = 3;
	char c = '#';
	cout << c << 5.5 << '-' << n << "hello" << true << endl;
	cout << "n+5=" << n + 5 << '\n';
	cout << "면적은" << area(n) << "입니다" << '\n';// area 함수 값에 n함수를 넣어서 값을 출력
}