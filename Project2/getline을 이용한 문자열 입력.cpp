#include<iostream>
using namespace std;

int main() {
	cout << "조수를 입력하세요>>";
	char address[100];
	cin.getline(address, 100,'\n');// grtline함수를 사용하면 공백을 포함해서 100자 이네 까지 입력가능하다 엔터 키누르면 입력 끝
	cout << "주소는 " << address << "입니다." << '\n';
	return 0;
}