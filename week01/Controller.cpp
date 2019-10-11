#include "QuadraticEquation.h"
#include "AppIO.h"

int main(void){
	bool solvingIsRequested;

	QuadraticEquation quadraticEquation;
	EquationResult equationResult;
	EquationCoefficient equationCodrricient;
	AppIO appIO;

	appIO.AppIO_print_startMessage();
	//시작메시지 출력

	solvingIsRequested = true;

	while (solvingIsRequested){
		solvingIsRequested = appIO.AppIO_input_solvingRequest(); //프로그램 수행 여부 입력받음

		if (solvingIsRequested == true){ 
			appIO.AppIO_input_equationCoefficient(&equationCodrricient); //2차방정식의 계수입력 

			if (appIO.AppIO_input_quadraticTermlsZero(equationCodrricient)) //2차항의 계수가 0일때 
				appIO.AppIO_print_isNotQuadraticEquationMessage(); //메세지출력(이차계수가 0이므로 이차방정식이 아닙니다.)

			if ((appIO.AppIO_input_quadraticTermlsZero(equationCodrricient) == false) && (quadraticEquation.QuardraticEquation_calculateDisciminant(equationCodrricient) == false)) {
				//2차항의 계수가 0이아니고 해가 존재할 때 
				equationResult = quadraticEquation.QuardraticEquation_calculateQuadraticEquation(&equationCodrricient);

				appIO.AppIO_print_equation(equationCodrricient.a, equationCodrricient.b, equationCodrricient.c);//2차방정식을 출력
				appIO.AppIO_print_equationResult(equationResult); //2차방정식의 해를 출력
			}

			else if ((appIO.AppIO_input_quadraticTermlsZero(equationCodrricient) == false) && (quadraticEquation.QuardraticEquation_calculateDisciminant(equationCodrricient) == true)) {
				//2차항의 계수가 0이 아니고 해가 존재하지 않을 때
				appIO.AppIO_print_equation(equationCodrricient.a, equationCodrricient.b, equationCodrricient.c);  //2차방정식을 출력
				appIO.AppIO_print_noResultMessage(); //메세지출력(해가 존재하지 않습니다.)
			}
		}
	}

	appIO.AppIO_print_endMessage();
	//종료메세지 출력



	return 0;
}