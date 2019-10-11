#include "AppIO.h"

void AppIO::AppIO_print_startMessage(void){
	cout << "::���������� ��� ����::" << endl;
}

void AppIO::AppIO_print_endMessage(void){
	cout << "::���������� ��� ����::" << endl;
}

bool AppIO::AppIO_input_solvingRequest(void){
	char input[100];
	bool result = false;

	cout << endl;
	cout << "������������ ����ϽðԽ��ϱ�? �����Ϸ��� 'Y'/'y'/'��' �Է� : " << endl;
	cout << ">> ";
	cin >> input;

	if (strcmp(input, "Y") == 0)
		result = true;
	else if (strcmp(input, "y") == 0)
		result = true;
	else if (strcmp(input, "��") == 0)
		result = true;

	return result;
}

void AppIO::AppIO_input_equationCoefficient(EquationCoefficient* equation_coefficient){
	cout << "�������� ����� �Է��Ͻÿ� : ";
	cin >> equation_coefficient->a;
	cout << endl;

	cout << "�������� ����� �Է��Ͻÿ� : ";
	cin >> equation_coefficient->b;
	cout << endl;

	cout << "������� �Է��Ͻÿ� : ";
	cin >> equation_coefficient->c;
	cout << endl;
}

bool AppIO::AppIO_input_quadraticTermlsZero(EquationCoefficient equation_coefficient){
	bool result = false;

	if (equation_coefficient.a == 0)
		result = true;

	return result;
}

void AppIO::AppIO_print_equation(double a, double b, double c){ //���������� ���
	if (a > 0){ //a�� ����϶� 9���� (b, c�� ++, +-, -+, --, 0+, 0-, +0, -0, 00)
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

	else if (a < 0){ //a�� �����϶� 9���� (b, c�� ++, +-, -+, --, 0+, 0-, +0, -0, 00)
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

void AppIO::AppIO_print_equationResult(EquationResult equation_result){ //������������ �ظ� ���
	if (((equation_result.result1 < 0 || equation_result.result1 > 0 || equation_result.result1 == 0) && (equation_result.result2 < 0 || equation_result.result2 > 0 || equation_result.result2 == 0)) && (equation_result.result1 != equation_result.result2)) //�ذ� �ΰ��̻�
		//���� �Ǳ��� �����ϰ� �߱��� �ƴ� ��
		cout << equation_result.result1 << ", " << equation_result.result2 << " ��/�� �ط� ���´�." << endl;

	else if (equation_result.result1 == equation_result.result2) //�߱��� ��
		cout << "�߱� " << equation_result.result1 << " ��/�� �ط� ���´�." << endl;
}

void AppIO::AppIO_print_isNotQuadraticEquationMessage(void){ //������������ �������� ���� ��(a = 0)
	cout << "��������� 0�̹Ƿ� ������������ �ƴմϴ�." << endl;
}

void AppIO::AppIO_print_noResultMessage(void){ //������������ ���������� �ذ� �������� ���� ��
	cout << "�ذ� �������� �ʽ��ϴ�." << endl;
}