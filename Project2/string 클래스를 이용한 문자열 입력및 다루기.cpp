#include<iostream>
#include<cstring>// string �� �������� ��� �����̴�.
using namespace std;

int main() {

	string song("falling in live with you");//���ڿ� string ���� ũ�⿡ ������ ��� ����
	string elvis("elvis presley");
	string singer;

	cout << song + "�� �θ� ������??";
	cin >> singer;

	if (singer == elvis)
		cout << "�¾ҽ��ϴ�." << '\n';
	else
		cout << "Ʋ�Ƚ��ϴ� " + elvis + " �Դϴ�." + '\n';//+�� ���ڿ� ����

	return 0;
}