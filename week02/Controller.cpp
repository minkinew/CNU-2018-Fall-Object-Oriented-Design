#include "Dao.h"
#include "Service.h"

using namespace std;

int main() {
	char cmd[100] = { 0, };
	//��ɾ �Է¹޴� ����, ��ɾ �ش����� �ʴ� ������ ��

	Service service;
	//���� ���� ���� ��ü

	while (true) {
		cout << "�߰�[0]  �˻�[1]  ����[2]  ����[3]  ����[-1] : "; 
		cin >> cmd; 
	
		int index = 0;

		if (strcmp("0", cmd) == 0)
			service.bookCreate();
		else if (strcmp("1", cmd) == 0)
			service.bookRead();
		else if (strcmp("2", cmd) == 0) {
			service.bookRead();
			cout << "���� ���� �� �����Ϸ��� ���� ��ġ�� �����ּ���. : ";
			cin >> index;
			service.bookUpdate(index);
		}
		else if (strcmp("3", cmd) == 0) {
			service.bookRead();
			cout << "���� ���� �� �����Ϸ��� ���� ��ġ�� �����ּ���. : ";
			cin >> index;
			service.bookDelete(index);
		}
		else if (strcmp("-1", cmd) == 0)
			break;
	}
}