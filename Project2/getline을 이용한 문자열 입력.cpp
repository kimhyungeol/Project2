#include<iostream>
using namespace std;

int main() {
	cout << "������ �Է��ϼ���>>";
	char address[100];
	cin.getline(address, 100,'\n');// grtline�Լ��� ����ϸ� ������ �����ؼ� 100�� �̳� ���� �Է°����ϴ� ���� Ű������ �Է� ��
	cout << "�ּҴ� " << address << "�Դϴ�." << '\n';
	return 0;
}