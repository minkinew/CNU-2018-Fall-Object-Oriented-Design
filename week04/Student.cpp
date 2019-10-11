#include "Student.h"
#include <iostream>
using namespace std;

void Student::ShowStudent() {
	cout << "학년은 " << grade << ", 학번은 " << student_id << " 입니다. " << endl;
}