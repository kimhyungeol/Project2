#include<iostream>
using namespace std;

class rectangle {// 2���� �ɹ��Լ��� 3���� ������ 1���� bool�Լ��� ������.
public:
	int width, height;
	rectangle();
	rectangle(int a, int b);
	rectangle(int r);
	bool isquare();//�� �Ǵ� ���� �ϳ��� ���� ������ bool�Լ�
};

rectangle::rectangle(){// ù��° �簢�� ������
	width = height = 1;
}

rectangle::rectangle(int a, int b) {//�ι�° �簢�� ������
	width = a;
	height = b;

}

rectangle::rectangle(int r) {// ����° ����� ������
	
	width = height = r;
}

bool rectangle::isquare() {//�� ���� ���� �Լ��� ���̿� �ʺ� ������ 1 Ʋ���� 0�� �����Ѵ�.
	if (width == height)
		return true;
	else
		return false;
}


int main() {// 
	rectangle rect1;
	rectangle rect2(3, 5);
	rectangle rect3(3);// 3���� ������ ����

	if (rect1.isquare())
		cout << "rect1�� ���簢�� �Դϴ�" << endl;
	if (rect2.isquare())
		cout << "rect2�� ���簢�� �Դϴ�" << endl;//rect2�� ���� 3.5�� �������̶�� �ȳ��´�.
	if (rect3.isquare())
		cout << "rect3�� ���簢�� �Դϴ�" << endl;


}