#ifndef APPIO_H_
#define APPIO_H_

#include <iostream>
#include "QuadraticEquation.h"

using namespace std;

class AppIO{
public:
	void AppIO_print_startMessage(void);
	//���۹��� ��� �Լ�

	void AppIO_print_endMessage(void);
	//���Ṯ�� ��� �Լ�

	bool AppIO_input_solvingRequest(void);
	//�������� �Է¹޴� �Լ�

	void AppIO_input_equationCoefficient(EquationCoefficient* equation_coefficient);
	//2���������� ����� �Է¹޴� �Լ�

	bool AppIO_input_quadraticTermlsZero(EquationCoefficient equation_coefficient);
	//2������ ����� 0�� ��츦 �Ǻ��ϴ� �Լ�

	void AppIO_print_equation(double a, double b, double c);
	//�Է¹��� ����� ���Ե� 2�� �������� ����ϴ� �Լ�

	void AppIO_print_equationResult(EquationResult equation_result);
	//���� �����ϴ� ��� ���� ����ϴ� �Լ�

	void AppIO_print_isNotQuadraticEquationMessage(void);
	//������������ �ƴ��� �˸��� �Լ�

	void AppIO_print_noResultMessage(void);
	//���� �������� ������ �˸��� �Լ�

};
#endif // !APPIO_H_