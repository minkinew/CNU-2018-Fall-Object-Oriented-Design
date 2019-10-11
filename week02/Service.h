#pragma once
#ifndef SERVICE_H_
#define SERVICE_H_

#include "Dao.h"

class Service {
public:
	Dao books[10];
	//10���� ���� ������ ������ �� ����

	void bookCreate();
	//���� ���� ���� �Լ�

	void bookRead();
	//���� ���� �˻� �Լ�

	void bookUpdate(int index);
	//���� ���� ���� �Լ�

	void bookDelete(int index);
	//���� ���� ���� �Լ�

	int bookAllCheck();
	//(��ü) �� ���� ���� üũ �Լ�

	bool bookOneCheck(int index);
	//(Ư�� ��ġ) �� ���� ���� üũ �Լ�
};
#endif