#include<iostream>
#include<cstring>// string 을 쓰기위한 헤더 폴더이다.
using namespace std;

int main() {

	string song("falling in live with you");//문자열 string 으로 크기에 제약이 없어서 편함
	string elvis("elvis presley");
	string singer;

	cout << song + "를 부른 가수는??";
	cin >> singer;

	if (singer == elvis)
		cout << "맞았습니다." << '\n';
	else
		cout << "틀렸습니다 " + elvis + " 입니다." + '\n';//+로 문자열 연결

	return 0;
}