#pragma once
#ifndef POINT_H_
#define POINT_H_

class Point {
private :
	int x; //2���� ����� x�� ��ǥ
	int y; //2���� ����� y�� ��ǥ

public :
	//�Ӽ� �ʱ�ȭ�ϴ� �Լ�
	void Point_initMembers(int xpos, int ypos);

	//x��ǥ�� y��ǥ�� ���
	void Point_ShowPoint(void);

	//setter
	void Point_setX(int xpos);
	void Point_setY(int xpos);

	//getter
	int Point_getX(void);
	int Point_getY(void);
};
#endif // !POINT_H_
