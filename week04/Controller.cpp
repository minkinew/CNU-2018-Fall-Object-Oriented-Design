#include "Student.h"
#include "Person.h"
#include <iostream>
using namespace std;

int main(){
	char iName[50];
	int iAge;
	int iGrade;
	int iStudent_id;

	cout << "�̸��� �Է��ϼ��� : ";
	cin >> iName;
	cout << "���̸� �Է��ϼ��� : ";
	cin >> iAge;
	cout << "�г��� �Է��ϼ��� : ";
	cin >> iGrade;
	cout << "�й��� �Է��ϼ��� : ";
	cin >> iStudent_id;

	Student student(iName, iAge, iGrade, iStudent_id);
	student.ShowPerson();
	student.ShowStudent();
	system("pause");
}