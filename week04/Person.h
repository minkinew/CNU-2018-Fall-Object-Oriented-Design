#ifndef	PERSON_H_
#define PERSON_H_
#include <iostream>

using namespace std;

class Person { //Person 클래스
private :
	char name[50];
	int age;
public :
	Person(){ //name와 age 변수 값 초기화
		*name = { 0, };
		age = 0;
	}
	
	Person(char *n, int a)  { //매개변수를 갖는 생성자
		strcpy_s(name, n);
		this->age = a;
	}
	void ShowPerson();
};
#endif
