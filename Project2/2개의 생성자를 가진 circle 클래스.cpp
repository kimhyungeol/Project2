#include<iostream>
using namespace std;

class circle {
public:
	int radius;
	circle();
	circle(int r);
	double getarea();

};
circle::circle() {//�Ű� �Լ� ���� ���� �̸� ������
	radius = 1;// ������ ���� 1�� �ʱ�ȭ
	cout << "������" << radius << " �� ����" << endl;
}

circle::circle(int r) {//�Ű� ���� �ִ� ���� �̸� ������

	radius = r;// ������ ���� r �� �ʱ�ȭ ��
	cout << "������ " << radius << " �� ����" << endl;
}

double circle::getarea() {

	return 3.14 * radius * radius;

}

int main() {
	circle donut;//�Ű� ������ �־����� �ʾұ� ������ �Ű� ������ ����  �����ڷ� ȣ��
	double area = donut.getarea();// 

	cout << "donut ������" << area << endl;

	circle pizza(30);// 30 �̶�� �Ű� ������ �ֱ⶧���� �Ű� ������ �ִ� �����ڸ� ȣ���ؼ� ���� ���� �Ѵ�.
	 area = pizza.getarea();

	cout << "pizza�� ������" << area << endl;





}