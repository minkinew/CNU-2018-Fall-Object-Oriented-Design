#ifndef QuadraticEquation_H_
#define QuadraticEquation_H_

#include <cmath>

typedef struct{
	double result1, result2; //이차방정식의 해
}EquationResult;

typedef struct{
	double a, b, c;
}EquationCoefficient;

class QuadraticEquation{
public:
	EquationResult result; //2차 함수의 근
	EquationCoefficient coefficient; //2차 함수의 계수

public:
	bool QuardraticEquation_calculateDisciminant(EquationCoefficient equation_coefficient);
	//판별식을 수행하여 판별식이 0보다 작은 경우 false를 반환하는 함수
	//판별식이 0보다 작으면 실수 범위의 2차 방정식의해가 존재하지 않d음
	
	EquationResult QuardraticEquation_calculateQuadraticEquation(EquationCoefficient* equation_coefficient);
};
#endif // !QuadraticEquation