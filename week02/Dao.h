#pragma once
#ifndef DAO_H_
#define DAO_H_

#include <iostream>

class Dao {
public:
	char title[500] = { 0, };
	//���� �̸� (������ 100)

	char name[100] = { 0, };
	//���� ���� (������ 10)

	char year[100] = { 0, };
	//���� �⵵

	void print_bookInfo();
	//���� ���� ��� �Լ�
};
#endif