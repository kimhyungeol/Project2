#include<iostream>
using namespace std;
#include"circle.h"

int main() {// ���� �Լ��� �ٸ� �Լ����� �Ѱ� �̻��� cpp���Ϸ� ����� �ۼ��ϴ°� ��Ģ�̴�.

	circle dount;
	circle pizza(30);

	cout << "������ ������ " << dount.getarea() << "�Դϴ�." << endl;

	cout << "������ ������ " << pizza.getarea() << " �Դϴ�." << endl;
}