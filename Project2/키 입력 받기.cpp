#include<iostream>
using namespace std;

int main() {
	cout << "너비를 입력하시오>>";

	int width;
	cin >> width;// 키보드로 함수 width의 값을 입력 받는다 단 먼저 함수가 선언 되어야만 오류 안남 

	cout << "높이를 입력하시오>>";
	
	int height;
	cin >> height;

	int area = width * height;

	cout << "면적은" << area << "입니다." << '\n';

	return 0;




}