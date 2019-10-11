#pragma once
#ifndef Ring_H_
#define Ring_H_

#include "Circle.h"

class Ring {
private :
	Circle bigCircle;
	Circle smallCircle;

public :
	bool Ring_InitMember(int xpos1, int ypos1, int radius1, int xpos2, int ypos2, int radius2);
};

#endif Ring_H_
