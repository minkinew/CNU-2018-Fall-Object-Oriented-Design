#include "Circle.h"
#include<iostream>
using namespace std;

void Circle::Circle_InitMembers(int xpos, int ypos, int _radius) {
	center.Point_initMembers(xpos, ypos);
	this->radius = radius;
}

void Circle::Circle_ShowRingInfo() {
	cout << "���� �߽� ��ǥ�� ";
	center.Point_ShowPoint();
	cout << "�������� " << radius << " �Դϴ�. " << endl;
}

