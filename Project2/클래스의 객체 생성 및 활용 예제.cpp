#include<iostream>
using namespace std;

class circle {//Ŭ���� �����
public:// �� Ŭ������ ���·� �ۺ��� ���� ���´� 
	int radius;
	double getarea();

};

double circle:: getarea() {// Ŭ���� ������ �� ���� ���̸� ���ϴ� ������ ���� 
	return 3.14 * radius * radius;

}

int main() {
	circle donut;//��ü donut ������
	donut.radius = 1;//��ü donut�� ��� ������ �������� ��ü�� �������� 1�̶�� �Ѵ�.
	double area = donut.getarea();// ��ü��  ���� �˾Ƴ���
	cout << "donut ������" << area << endl;

	circle pizza;// ��ü ���� ����
	pizza.radius = 30;//������ �������� 30�̶�� �Ѵ�.
	area = pizza.getarea();//������ ���� ���ϱ�
	cout << "������ ������" << area << endl;

	return 0;
}