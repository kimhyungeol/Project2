#include<iostream>
using namespace std;

int main() {
	cout << "이름을 입력하시오>>";
	char name[10];// 문자열 name 10으로 선언

	cin >> name;
	cout << "당신의 이름은 " << name << "입니다." << '\n';

	return 0;
}