#include<iostream>
using namespace std;
class circle {
public:
	int radius;
	circle();
	circle(int r);
	~circle();//�Ҹ��� ����
	double getarea();
};

circle::circle() {
	radius = 1;
	cout << "������" << radius << " �� ����" << endl;

}

circle::circle(int r) {

	radius = r;
	cout << "������ " << r << " �� ����" << endl;

}
circle::~circle() {
	cout << "������" << radius << " �� �Ҹ�" << endl;// �Ҹ��ڰ� ����Ǹ� ������ ����
}
double circle::getarea() {
	return 3.14 * radius * radius;//�� ���� ���� 

}


int main() {
	circle dount;
	circle pizza(30);// �Ҹ��� �������� ����ȴ� �� ������ ���Ӻ��� �Ҹ��� ���ں��� ����

	return 0;

}