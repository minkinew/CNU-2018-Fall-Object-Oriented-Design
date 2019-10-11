#include "QuadraticEquation.h"

bool QuadraticEquation::QuardraticEquation_calculateDisciminant(EquationCoefficient equation_coefficient){
	double d = ((equation_coefficient.b * equation_coefficient.b) - 4.0 * (equation_coefficient.a * equation_coefficient.c)); //판별식 

	if (d == 0) //중근일 때
		return false;
	else if (d > 0) //해가 2개 있을 때
		return false;
	else //해가 존재하지 않을 때 (d < 0)
		return true;
}

EquationResult QuadraticEquation::QuardraticEquation_calculateQuadraticEquation(EquationCoefficient* equation_coefficient){
	double d = ((equation_coefficient->b * equation_coefficient->b) - 4.0 * (equation_coefficient->a * equation_coefficient->c)); //판별식 
	EquationResult res;

	if (d > 0){ //두개의 근
		res.result1 = (equation_coefficient->b * (-1) + sqrt(d)) / (2.0 * equation_coefficient->a);
		res.result2 = (equation_coefficient->b * (-1) - sqrt(d)) / (2.0 * equation_coefficient->a);
		return res;
	}
	else if (d == 0){ //중근
		res.result1 = (equation_coefficient->b) * (-1) / (2.0 * equation_coefficient->a);
		res.result2 = res.result1;
		return res;
	}

}