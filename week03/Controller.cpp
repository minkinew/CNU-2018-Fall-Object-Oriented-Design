#include "Ring.h"
#include <iostream>
using namespace std;

int main() {
	Ring ring;
	bool result;

	result = ring.Ring_InitMember(1, 1, 4, 1, 1, 9);

	if (result)
		cout << "완벽한 링이 완성되었습니다." << endl;
	else
		cout << "링이 완성되지 못했습니다." << endl;

	system("pause");

	return 0;
}