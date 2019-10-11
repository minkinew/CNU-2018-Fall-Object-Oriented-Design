#pragma once
#ifndef POINT_H_
#define POINT_H_

class Point {
private :
	int x; //2차원 평면의 x축 좌표
	int y; //2차원 평면의 y축 좌표

public :
	//속성 초기화하는 함수
	void Point_initMembers(int xpos, int ypos);

	//x좌표와 y좌표를 출력
	void Point_ShowPoint(void);

	//setter
	void Point_setX(int xpos);
	void Point_setY(int xpos);

	//getter
	int Point_getX(void);
	int Point_getY(void);
};
#endif // !POINT_H_
