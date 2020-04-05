/*
내용 : 사용자로부터 5개의 정수를 입력받아서, 그 합을 출력하는 프로그램
날짜 : 2019.02.19
*/
#include <iostream>
using namespace std;

int main()
{
	int num = 0;
	int result = 0;

	//새로운 코드 추가
	int b = 1;

	//new code2
	int d = 3;


	for (int i = 1; i < 6; i++) {
		cout << i << "번째 정수입력 : ";
		cin >> num;
		result += num;
	}


	//new code3
	int result = 0;
	result = b * d;
	cout << result;

	cout << "\n합계" << result << endl;



	//new code4
	cout << "스태시로 넘어가기";

	//new code5
	cout << "스태시 기능 활용하기";

	//new code6
	cout << "코드 수정 commit 테스트";

	//new code - B
	cout << "A";
	cout << "BBBBBBBBBBBBBBBB";
	cout << "A에서 추가"

	return 0;
	
}

