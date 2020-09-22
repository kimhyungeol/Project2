#include<iostream>
using namespace std;
#include"circle.h"

int main() {// 메인 함수나 다른 함수들은 한개 이상의 cpp파일로 나누어서 작성하는게 원칙이다.

	circle dount;
	circle pizza(30);

	cout << "도넛의 면적은 " << dount.getarea() << "입니다." << endl;

	cout << "피자의 면적은 " << pizza.getarea() << " 입니다." << endl;
}