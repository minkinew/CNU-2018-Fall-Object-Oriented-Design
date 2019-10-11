#ifndef APPIO_H_
#define APPIO_H_

#include <iostream>
#include "QuadraticEquation.h"

using namespace std;

class AppIO{
public:
	void AppIO_print_startMessage(void);
	//시작문구 출력 함수

	void AppIO_print_endMessage(void);
	//종료문구 출력 함수

	bool AppIO_input_solvingRequest(void);
	//진행명령을 입력받는 함수

	void AppIO_input_equationCoefficient(EquationCoefficient* equation_coefficient);
	//2차방정식의 계수를 입력받는 함수

	bool AppIO_input_quadraticTermlsZero(EquationCoefficient equation_coefficient);
	//2차항의 계수가 0인 경우를 판별하는 함수

	void AppIO_print_equation(double a, double b, double c);
	//입력받은 계수가 포함된 2차 방정식을 출력하는 함수

	void AppIO_print_equationResult(EquationResult equation_result);
	//근이 존재하는 경우 근을 출력하는 함수

	void AppIO_print_isNotQuadraticEquationMessage(void);
	//이차방정식이 아님을 알리는 함수

	void AppIO_print_noResultMessage(void);
	//근이 존재하지 않음을 알리는 함수

};
#endif // !APPIO_H_