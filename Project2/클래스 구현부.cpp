#include<iostream>// �����δ� cpp���Ϸ� �ۼ��ϴ°� ��Ģ�̴�.
using namespace std;
#include"circle.h"// ����θ� ��Ŭ��� �ؾ� ����θ� �̿��� �� �ִ�

circle::circle() {
	radius = 1;
	cout << "������ " << radius << " �� ����" << endl;
}

circle::circle(int r) {

	radius = r;
	cout << "������ " << radius << " �� ����" << endl;
}

double circle::getarea() {
	return 3.14 * radius * radius;
}