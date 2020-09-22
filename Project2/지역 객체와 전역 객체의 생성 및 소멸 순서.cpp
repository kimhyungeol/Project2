#include<iostream>
using namespace std;

class circle {
public:
	int radius;
	circle();
	circle(int r);
	~circle();
	double getarea();

};

circle::circle(){
	radius = 1;
	cout << "반지름 " << radius << " 원 생성" << endl;


}

circle::circle(int r) {
	radius = r;
	cout << "반지름" << radius << " 원 생성" << endl;

}

circle::~circle() {
	cout << "반지름" << radius << " 원 소멸" << endl;

}

double circle::getarea() {

	return 3.14 * radius * radius;
}
circle globaldount(1000);// 함수 밖에 선언된 객체로 전역객체라고 한다
circle globalpizza(2000);// 전역객체

void f() {// 보이드 f라는 함수
	circle fdount(100);// f함수에 선언된 지역객체
	circle fpizza(200);//지역객체
}

int main() {
	circle maindount;//메인 함수 안에 선언된 지역객체
	circle mainpizza(30);//지역객체
	f();

	return 0;
}