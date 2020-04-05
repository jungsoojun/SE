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




	for (int i = 1; i < 6; i++) {
		cout << i << "번째 정수입력 : ";
		cin >> num;
		result += num;
	}

	cout << "\n합계" << result << endl;
	return 0;
	
}

