#include<iostream>// 구현부는 cpp파일로 작성하는게 원칙이다.
using namespace std;
#include"circle.h"// 선언부를 인클루드 해야 선언부를 이용할 수 있다

circle::circle() {
	radius = 1;
	cout << "반지름 " << radius << " 원 생성" << endl;
}

circle::circle(int r) {

	radius = r;
	cout << "반지름 " << radius << " 원 생성" << endl;
}

double circle::getarea() {
	return 3.14 * radius * radius;
}