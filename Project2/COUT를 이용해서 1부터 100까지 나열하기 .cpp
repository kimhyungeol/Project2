#include<iostream>
using namespace std;

int main() {

	int n = 0;
	int r = 0;

	for (n = 0; n < 90; n += 10) {// 10�� ������ �����Ѵ�.
		for (r = 1; r < 11; r++)
			cout << n + r << "\t";// ���� �ΰ��� 1��Ÿ 100���� ���� ���� 
		cout << '\n';// 10�� ������ ����� �ϱ� ������ ��ġ
	}
	return 0;
}