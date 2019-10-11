#include "Student.h"
#include "Person.h"
#include <iostream>
using namespace std;

int main(){
	char iName[50];
	int iAge;
	int iGrade;
	int iStudent_id;

	cout << "이름을 입력하세요 : ";
	cin >> iName;
	cout << "나이를 입력하세요 : ";
	cin >> iAge;
	cout << "학년을 입력하세요 : ";
	cin >> iGrade;
	cout << "학번를 입력하세요 : ";
	cin >> iStudent_id;

	Student student(iName, iAge, iGrade, iStudent_id);
	student.ShowPerson();
	student.ShowStudent();
	system("pause");
}