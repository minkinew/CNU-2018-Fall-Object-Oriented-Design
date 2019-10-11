#include "QuadraticEquation.h"

bool QuadraticEquation::QuardraticEquation_calculateDisciminant(EquationCoefficient equation_coefficient){
	double d = ((equation_coefficient.b * equation_coefficient.b) - 4.0 * (equation_coefficient.a * equation_coefficient.c)); //�Ǻ��� 

	if (d == 0) //�߱��� ��
		return false;
	else if (d > 0) //�ذ� 2�� ���� ��
		return false;
	else //�ذ� �������� ���� �� (d < 0)
		return true;
}

EquationResult QuadraticEquation::QuardraticEquation_calculateQuadraticEquation(EquationCoefficient* equation_coefficient){
	double d = ((equation_coefficient->b * equation_coefficient->b) - 4.0 * (equation_coefficient->a * equation_coefficient->c)); //�Ǻ��� 
	EquationResult res;

	if (d > 0){ //�ΰ��� ��
		res.result1 = (equation_coefficient->b * (-1) + sqrt(d)) / (2.0 * equation_coefficient->a);
		res.result2 = (equation_coefficient->b * (-1) - sqrt(d)) / (2.0 * equation_coefficient->a);
		return res;
	}
	else if (d == 0){ //�߱�
		res.result1 = (equation_coefficient->b) * (-1) / (2.0 * equation_coefficient->a);
		res.result2 = res.result1;
		return res;
	}

}