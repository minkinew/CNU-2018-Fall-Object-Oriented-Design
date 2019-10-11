#include "AppIO.h"

void AppIO::AppIO_print_startMessage(void){
	cout << "::이차방정식 계산 시작::" << endl;
}

void AppIO::AppIO_print_endMessage(void){
	cout << "::이차방정식 계산 종료::" << endl;
}

bool AppIO::AppIO_input_solvingRequest(void){
	char input[100];
	bool result = false;

	cout << endl;
	cout << "이차방정식을 계산하시게습니까? 수행하려면 'Y'/'y'/'예' 입력 : " << endl;
	cout << ">> ";
	cin >> input;

	if (strcmp(input, "Y") == 0)
		result = true;
	else if (strcmp(input, "y") == 0)
		result = true;
	else if (strcmp(input, "예") == 0)
		result = true;

	return result;
}

void AppIO::AppIO_input_equationCoefficient(EquationCoefficient* equation_coefficient){
	cout << "이차항의 계수를 입력하시오 : ";
	cin >> equation_coefficient->a;
	cout << endl;

	cout << "일차항의 계수를 입력하시오 : ";
	cin >> equation_coefficient->b;
	cout << endl;

	cout << "상수항을 입력하시오 : ";
	cin >> equation_coefficient->c;
	cout << endl;
}

bool AppIO::AppIO_input_quadraticTermlsZero(EquationCoefficient equation_coefficient){
	bool result = false;

	if (equation_coefficient.a == 0)
		result = true;

	return result;
}

void AppIO::AppIO_print_equation(double a, double b, double c){ //이차방정식 출력
	if (a > 0){ //a가 양수일때 9가지 (b, c가 ++, +-, -+, --, 0+, 0-, +0, -0, 00)
		if (b > 0 && c > 0)
			cout << ">> " << a << "x*x +" << b << "x +" << c << " = 0" << endl;
		else if (b > 0 && c < 0)
			cout << ">> " << a << "x*x +" << b << "x " << c << " = 0" << endl;
		else if (b < 0 && c > 0)
			cout << ">> " << a << "x*x " << b << "x +" << c << " = 0" << endl;
		else if (b < 0 && c < 0)
			cout << ">> " << a << "x*x " << b << "x " << c << " = 0" << endl;
		else if (b == 0 && c > 0)
			cout << ">> " << a << "x*x +" << c << " = 0" << endl;
		else if (b == 0 && c < 0)
			cout << ">> " << a << "x*x " << c << " = 0" << endl;
		else if (b > 0 && c == 0)
			cout << ">> " << a << "x*x +" << b << " = 0" << endl;
		else if (b < 0 && c == 0)
			cout << ">> " << a << "x*x " << b << " = 0" << endl;
		else if (b == 0 && c == 0)
			cout << ">> " << a << "x*x" << " = 0" << endl;
	}

	else if (a < 0){ //a가 음수일때 9가지 (b, c가 ++, +-, -+, --, 0+, 0-, +0, -0, 00)
		if (b > 0 && c > 0)
			cout << ">> " << a << "x*x +" << b << "x +" << c << " = 0" << endl;
		else if (b > 0 && c < 0)
			cout << ">> " << a << "x*x +" << b << "x " << c << " = 0" << endl;
		else if (b < 0 && c > 0)
			cout << ">> " << a << "x*x " << b << "x +" << c << " = 0" << endl;
		else if (b < 0 && c < 0)
			cout << ">> " << a << "x*x " << b << "x " << c << " = 0" << endl;
		else if (b == 0 && c > 0)
			cout << ">> " << a << "x*x +" << c << " = 0" << endl;
		else if (b == 0 && c < 0)
			cout << ">> " << a << "x*x " << c << " = 0" << endl;
		else if (b > 0 && c == 0)
			cout << ">> " << a << "x*x +" << b << " = 0" << endl;
		else if (b < 0 && c == 0)
			cout << ">> " << a << "x*x " << b << " = 0" << endl;
		else if (b == 0 && c == 0)
			cout << ">> " << a << "x*x" << " = 0" << endl;
	}
}

void AppIO::AppIO_print_equationResult(EquationResult equation_result){ //이차방정식의 해를 출력
	if (((equation_result.result1 < 0 || equation_result.result1 > 0 || equation_result.result1 == 0) && (equation_result.result2 < 0 || equation_result.result2 > 0 || equation_result.result2 == 0)) && (equation_result.result1 != equation_result.result2)) //해가 두개이상
		//양의 실근이 존재하고 중근이 아닐 때
		cout << equation_result.result1 << ", " << equation_result.result2 << " 을/를 해로 갖는다." << endl;

	else if (equation_result.result1 == equation_result.result2) //중근일 때
		cout << "중근 " << equation_result.result1 << " 을/를 해로 갖는다." << endl;
}

void AppIO::AppIO_print_isNotQuadraticEquationMessage(void){ //이차방정식이 성립하지 않을 때(a = 0)
	cout << "이차계수가 0이므로 이차방정식이 아닙니다." << endl;
}

void AppIO::AppIO_print_noResultMessage(void){ //이차방정식이 성립하지만 해가 존재하지 않을 때
	cout << "해가 존재하지 않습니다." << endl;
}