#include<iostream>
#include<cstring>// strcmp �Լ��� �̿��ϱ� ���� �������
using namespace std;

int main() {
	char password[11];
	cout << "���α׷��� �����Ϸ��� ��ȣ�� �Է��ϼ���"<<endl;
	while (true) {
		cout << "��ȣ>>";
		cin >> password;
		if (strcmp(password, "c++") == 0) {// strcmp(a,b)�Լ��� a��b�� ���Ͽ� ������ 0�� ����Ѵ� 
			cout << "���α׷��� �����մϴ�." << endl;
			break;
		}
		else {
			cout << "��ȣ�� �ƴմϴ�." << endl;
		}
		
	}
	return 0;
}