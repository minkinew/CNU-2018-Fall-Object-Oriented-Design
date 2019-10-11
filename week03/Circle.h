#pragma once
#ifndef CIRCLE_H_
#define CIRCLE_H_

#include "Point.h"

class Circle {
private :
	Point center; //원의 중심
	int radius; //반지름

public :
	//변수 초기화
	void Circle_InitMembers(int xpos, int ypos, int _radius);

	//원의 정보출력
	void Circle_ShowRingInfo(void);
};

#endif //!CIRCLE_H_
