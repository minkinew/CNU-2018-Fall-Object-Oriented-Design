#include "Circle.h"
#include<iostream>
using namespace std;

void Circle::Circle_InitMembers(int xpos, int ypos, int _radius) {
	center.Point_initMembers(xpos, ypos);
	this->radius = radius;
}

void Circle::Circle_ShowRingInfo() {
	cout << "원의 중심 좌표는 ";
	center.Point_ShowPoint();
	cout << "반지름은 " << radius << " 입니다. " << endl;
}

