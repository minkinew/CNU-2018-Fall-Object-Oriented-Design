#include "Ring.h"
#include <iostream>
using namespace std;

bool Ring::Ring_InitMember(int xpos1, int ypos1, int radius1, int xpos2, int ypos2, int radius2) {
	this->bigCircle.Circle_InitMembers(xpos1, ypos1, radius1);
	this->smallCircle.Circle_InitMembers(xpos2, ypos2, radius2);
	
	if (xpos1 == ypos1 && ypos1 == ypos2 && radius1 < radius2)
		return true;
	else
		return false;
		
}
