#include<iostream>
using namespace std;

class circle {//클래스 선언부
public:// 이 클래스에 상태로 퍼블릭은 공개 상태다 
	int radius;
	double getarea();

};

double circle:: getarea() {// 클래스 구현부 로 원의 넓이를 구하는 공식을 넣음 
	return 3.14 * radius * radius;

}

int main() {
	circle donut;//객체 donut 생성함
	donut.radius = 1;//객체 donut의 멤버 변수의 접근으로 객체의 반지름을 1이라고 한다.
	double area = donut.getarea();// 객체의  면적 알아내기
	cout << "donut 면적은" << area << endl;

	circle pizza;// 객체 피자 생성
	pizza.radius = 30;//피자의 반지름을 30이라고 한다.
	area = pizza.getarea();//피자의 면적 구하기
	cout << "피자의 면적은" << area << endl;

	return 0;
}