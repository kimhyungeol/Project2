#include<iostream>
using namespace std;

class circle {
public:
	int radius;
	circle();
	circle(int r);
	double getarea();

};
circle::circle() {//매개 함수 없는 같은 이름 생성자
	radius = 1;// 반지름 값을 1로 초기화
	cout << "반지름" << radius << " 원 생성" << endl;
}

circle::circle(int r) {//매개 변수 있는 같은 이름 생성자

	radius = r;// 반지름 값을 r 로 초기화 함
	cout << "반지름 " << radius << " 원 생성" << endl;
}

double circle::getarea() {

	return 3.14 * radius * radius;

}

int main() {
	circle donut;//매개 변수가 주어지지 않았기 때문에 매개 변수가 없는  생성자로 호출
	double area = donut.getarea();// 

	cout << "donut 면적은" << area << endl;

	circle pizza(30);// 30 이라는 매개 변수가 있기때문에 매개 변수가 있는 생성자를 호출해서 값을 도출 한다.
	 area = pizza.getarea();

	cout << "pizza의 면적은" << area << endl;





}