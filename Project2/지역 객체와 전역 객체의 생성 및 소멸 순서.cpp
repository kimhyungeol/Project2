#include<iostream>
using namespace std;

class circle {
public:
	int radius;
	circle();
	circle(int r);
	~circle();
	double getarea();

};

circle::circle(){
	radius = 1;
	cout << "������ " << radius << " �� ����" << endl;


}

circle::circle(int r) {
	radius = r;
	cout << "������" << radius << " �� ����" << endl;

}

circle::~circle() {
	cout << "������" << radius << " �� �Ҹ�" << endl;

}

double circle::getarea() {

	return 3.14 * radius * radius;
}
circle globaldount(1000);// �Լ� �ۿ� ����� ��ü�� ������ü��� �Ѵ�
circle globalpizza(2000);// ������ü

void f() {// ���̵� f��� �Լ�
	circle fdount(100);// f�Լ��� ����� ������ü
	circle fpizza(200);//������ü
}

int main() {
	circle maindount;//���� �Լ� �ȿ� ����� ������ü
	circle mainpizza(30);//������ü
	f();

	return 0;
}