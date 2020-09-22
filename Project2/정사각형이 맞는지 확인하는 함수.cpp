#include<iostream>
using namespace std;

class rectangle {// 2개의 맴버함수와 3개의 생성자 1개의 bool함수를 가진다.
public:
	int width, height;
	rectangle();
	rectangle(int a, int b);
	rectangle(int r);
	bool isquare();//참 또는 거짓 하나의 값을 가지는 bool함수
};

rectangle::rectangle(){// 첫번째 사각형 생성자
	width = height = 1;
}

rectangle::rectangle(int a, int b) {//두번째 사각형 생성자
	width = a;
	height = b;

}

rectangle::rectangle(int r) {// 세번째 사격형 생성자
	
	width = height = r;
}

bool rectangle::isquare() {//참 거짓 구별 함수로 높이와 너비가 같으면 1 틀리면 0을 리턴한다.
	if (width == height)
		return true;
	else
		return false;
}


int main() {// 
	rectangle rect1;
	rectangle rect2(3, 5);
	rectangle rect3(3);// 3개의 생성자 만듬

	if (rect1.isquare())
		cout << "rect1은 정사각형 입니다" << endl;
	if (rect2.isquare())
		cout << "rect2는 정사각형 입니다" << endl;//rect2를 보면 3.5라서 정상각형이라고 안나온다.
	if (rect3.isquare())
		cout << "rect3눈 정사각형 입니다" << endl;


}