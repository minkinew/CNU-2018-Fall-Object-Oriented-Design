#ifndef STUDENT_H_
#define STUDENT_H_
#include <iostream>
#include "Person.h"

using namespace std;

class Student : public Person { // PersonŬ������ public ���������ڷ� ���
private :
	int grade;
	int student_id;
public :
	Student() { //grade, student_id �������� �ʱ�ȭ
		grade = 0;
		student_id = 0;
	}

	Student(int g, int s) { //�Ű������� ���� ������
		this->grade= g;
		this->student_id = s;
	}

	Student(char* a, int b, int c, int d) : Person(a, b) { //Person Ŭ������ �Ű������� �ʱ�ȭ�ϴ� ������
		this->grade = c;
		this->student_id = d;
	}
	void ShowStudent();
};

#endif