#include<iostream>
using namespace std;

inline int odd(int x) {// ���⿡ �ζ��� �Լ��� ���̸� ������尡 �������. ������ ���� �Լ��鿡�� �ζ����� ���̴°� ����
	return (x % 2);

}
int main() {
	int sum = 0;

	for (int i = 1; i < 10000; i++) {
		if (odd(i))// �Լ��� ����ȣ�� �ؾ��ϹǷ� ����� ������� �ð��� �Ҹ�ȴ�.

			sum += i;
	}


	cout << sum;
	return 0;
}