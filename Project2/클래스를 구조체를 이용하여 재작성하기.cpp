#include<iostream>
using namespace std;

struct circle {//구조체는 클래스랑 거의 똑같다 다만 기본 접근 지정자가 공개다 클래스는 private
private:
	int radius;
public:
	circle(int r) {
		radius = r;
	}
	double getarea();
};

double circle::getarea() {

	return 3.14 * radius * radius;
}

int main() {
	circle waffle(3);
	cout << "면적은 " << waffle.getarea() << " 입니다" << endl;

	
}
