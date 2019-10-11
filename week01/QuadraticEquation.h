#ifndef QuadraticEquation_H_
#define QuadraticEquation_H_

#include <cmath>

typedef struct{
	double result1, result2; //������������ ��
}EquationResult;

typedef struct{
	double a, b, c;
}EquationCoefficient;

class QuadraticEquation{
public:
	EquationResult result; //2�� �Լ��� ��
	EquationCoefficient coefficient; //2�� �Լ��� ���

public:
	bool QuardraticEquation_calculateDisciminant(EquationCoefficient equation_coefficient);
	//�Ǻ����� �����Ͽ� �Ǻ����� 0���� ���� ��� false�� ��ȯ�ϴ� �Լ�
	//�Ǻ����� 0���� ������ �Ǽ� ������ 2�� ���������ذ� �������� ��d��
	
	EquationResult QuardraticEquation_calculateQuadraticEquation(EquationCoefficient* equation_coefficient);
};
#endif // !QuadraticEquation