#pragma once
#ifndef CIRCLE_H_
#define CIRCLE_H_

#include "Point.h"

class Circle {
private :
	Point center; //���� �߽�
	int radius; //������

public :
	//���� �ʱ�ȭ
	void Circle_InitMembers(int xpos, int ypos, int _radius);

	//���� �������
	void Circle_ShowRingInfo(void);
};

#endif //!CIRCLE_H_
