#include "Ring.h"
#include <iostream>
using namespace std;

int main() {
	Ring ring;
	bool result;

	result = ring.Ring_InitMember(1, 1, 4, 1, 1, 9);

	if (result)
		cout << "�Ϻ��� ���� �ϼ��Ǿ����ϴ�." << endl;
	else
		cout << "���� �ϼ����� ���߽��ϴ�." << endl;

	system("pause");

	return 0;
}