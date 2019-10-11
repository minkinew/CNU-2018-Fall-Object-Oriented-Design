#ifndef STUDENT_H_
#define STUDENT_H_
#include <iostream>
#include "Person.h"

using namespace std;

class Student : public Person { // Person클래스를 public 접근지정자로 상속
private :
	int grade;
	int student_id;
public :
	Student() { //grade, student_id 변수값을 초기화
		grade = 0;
		student_id = 0;
	}

	Student(int g, int s) { //매개변수를 갖는 생성자
		this->grade= g;
		this->student_id = s;
	}

	Student(char* a, int b, int c, int d) : Person(a, b) { //Person 클래스와 매개변수를 초기화하는 생성자
		this->grade = c;
		this->student_id = d;
	}
	void ShowStudent();
};

#endif