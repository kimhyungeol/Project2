#include<iostream>
using namespace std;

struct circle {//����ü�� Ŭ������ ���� �Ȱ��� �ٸ� �⺻ ���� �����ڰ� ������ Ŭ������ private
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
	cout << "������ " << waffle.getarea() << " �Դϴ�" << endl;

	
}
