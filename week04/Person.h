#ifndef	PERSON_H_
#define PERSON_H_
#include <iostream>

using namespace std;

class Person { //Person Ŭ����
private :
	char name[50];
	int age;
public :
	Person(){ //name�� age ���� �� �ʱ�ȭ
		*name = { 0, };
		age = 0;
	}
	
	Person(char *n, int a)  { //�Ű������� ���� ������
		strcpy_s(name, n);
		this->age = a;
	}
	void ShowPerson();
};
#endif
