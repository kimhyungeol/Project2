#include<iostream>
using namespace std;
class circle {
public:
	int radius;
	circle();
	circle(int r);
	~circle();//소멸자 선언
	double getarea();
};

circle::circle() {
	radius = 1;
	cout << "반지름" << radius << " 원 생성" << endl;

}

circle::circle(int r) {

	radius = r;
	cout << "반지름 " << r << " 원 생성" << endl;

}
circle::~circle() {
	cout << "반지름" << radius << " 원 소멸" << endl;// 소멸자가 실행되면 나오는 문구
}
double circle::getarea() {
	return 3.14 * radius * radius;//원 부피 생성 

}


int main() {
	circle dount;
	circle pizza(30);// 소멸은 역순으로 진행된다 즉 생성은 도넛부터 소멸은 피자부터 진행

	return 0;

}