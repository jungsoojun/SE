/*
���� : ����ڷκ��� 5���� ������ �Է¹޾Ƽ�, �� ���� ����ϴ� ���α׷�
��¥ : 2019.02.19
*/
#include <iostream>
using namespace std;

int main()
{
	int num = 0;
	int result = 0;

	//���ο� �ڵ� �߰�
	int b = 1;




	for (int i = 1; i < 6; i++) {
		cout << i << "��° �����Է� : ";
		cin >> num;
		result += num;
	}

	cout << "\n�հ�" << result << endl;
	return 0;
	
}

