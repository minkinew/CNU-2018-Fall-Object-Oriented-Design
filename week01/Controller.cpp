#include "QuadraticEquation.h"
#include "AppIO.h"

int main(void){
	bool solvingIsRequested;

	QuadraticEquation quadraticEquation;
	EquationResult equationResult;
	EquationCoefficient equationCodrricient;
	AppIO appIO;

	appIO.AppIO_print_startMessage();
	//���۸޽��� ���

	solvingIsRequested = true;

	while (solvingIsRequested){
		solvingIsRequested = appIO.AppIO_input_solvingRequest(); //���α׷� ���� ���� �Է¹���

		if (solvingIsRequested == true){ 
			appIO.AppIO_input_equationCoefficient(&equationCodrricient); //2���������� ����Է� 

			if (appIO.AppIO_input_quadraticTermlsZero(equationCodrricient)) //2������ ����� 0�϶� 
				appIO.AppIO_print_isNotQuadraticEquationMessage(); //�޼������(��������� 0�̹Ƿ� ������������ �ƴմϴ�.)

			if ((appIO.AppIO_input_quadraticTermlsZero(equationCodrricient) == false) && (quadraticEquation.QuardraticEquation_calculateDisciminant(equationCodrricient) == false)) {
				//2������ ����� 0�̾ƴϰ� �ذ� ������ �� 
				equationResult = quadraticEquation.QuardraticEquation_calculateQuadraticEquation(&equationCodrricient);

				appIO.AppIO_print_equation(equationCodrricient.a, equationCodrricient.b, equationCodrricient.c);//2���������� ���
				appIO.AppIO_print_equationResult(equationResult); //2���������� �ظ� ���
			}

			else if ((appIO.AppIO_input_quadraticTermlsZero(equationCodrricient) == false) && (quadraticEquation.QuardraticEquation_calculateDisciminant(equationCodrricient) == true)) {
				//2������ ����� 0�� �ƴϰ� �ذ� �������� ���� ��
				appIO.AppIO_print_equation(equationCodrricient.a, equationCodrricient.b, equationCodrricient.c);  //2���������� ���
				appIO.AppIO_print_noResultMessage(); //�޼������(�ذ� �������� �ʽ��ϴ�.)
			}
		}
	}

	appIO.AppIO_print_endMessage();
	//����޼��� ���



	return 0;
}