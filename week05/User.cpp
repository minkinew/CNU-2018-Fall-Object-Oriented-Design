#include "User.h"

void C::printDay()
{
	//cout << "����" << endl;
	cout << this->month << ". " << this->day << ". " << this->memo << endl;
}

void A::printDay()
{
	cout << schedule.month << ". " << schedule.day << ". " << schedule.memo << endl;
	//cout << "ũ��������!" << endl;
}

B::B()
{
	month = 12;
	day = 25;
	memo = "ũ��������";
}

void B::printDay()
{
	C::printDay();
}

void DD::printDay()
{
	cout << "DD day" << endl;
}

void BB::printDay()
{
	cout << "BB day" << endl;
}

int main(void)
{
	C* _c = new C(5, 12, "��ó�Կ��ų�");
	C* _b = new B();

	A _a(*_c);

	_a.printDay();
	_b->printDay();


	DD* _bb = new BB();
	_bb->printDay();

	return 0;
}

