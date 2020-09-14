#include<iostream>
#include<cstring>// strcmp 함수를 이용하기 위한 헤더폴더
using namespace std;

int main() {
	char password[11];
	cout << "프로그램을 종료하려면 암호를 입력하세요"<<endl;
	while (true) {
		cout << "암호>>";
		cin >> password;
		if (strcmp(password, "c++") == 0) {// strcmp(a,b)함수는 a와b를 비교하여 같으면 0을 출력한다 
			cout << "프로그램을 종료합니다." << endl;
			break;
		}
		else {
			cout << "암호가 아닙니다." << endl;
		}
		
	}
	return 0;
}