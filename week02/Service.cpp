#include "Service.h"

using namespace std;

void Service::bookCreate() {
	cin.ignore();
	int index = bookAllCheck();

	cout << "å ������ �Է��� �ּ��� : ";
	cin.getline(this->books[index].title, 500);

	cout << "���ڸ� �Է��� �ּ��� : ";
	cin.getline(this->books[index].name, 100);

	cout << "���� �⵵�� �Է��� �ּ��� : ";
	cin.getline(this->books[index].year, 100);

}

void Service::bookRead() {
	int i;
	for (i = 0; i < 10; i++) {
		if (bookOneCheck(i))
			cout << i+1 << ") �� ���� �Դϴ�." << endl;
		else {
			cout << i + 1 << ") ";
			books[i].print_bookInfo();
		}
	}
}

 void Service::bookUpdate(int index) {
	cin.ignore();
	 
	cout << "(����)å ������ �Է��� �ּ��� : ";
	cin.getline(books[index - 1].title, 500);

	cout << "(����)���ڸ� �Է��� �ּ��� : ";
	cin.getline(books[index - 1].name, 100);

	cout << "(����)���ǳ⵵�� �Է��� �ּ��� : ";
	cin.getline(books[index - 1].year, 100);
}

void Service::bookDelete(int index) {
	char temp1[500] = { 0, };
	char temp2[100] = { 0, };
	char temp3[100] = { 0, };

	strcpy_s(this->books[index - 1].title, temp1);
	strcpy_s(this->books[index - 1].name, temp2);
	strcpy_s(this->books[index -1 ].year, temp3);
}

int Service::bookAllCheck() {
	int i;
	for (i = 0; i < 10; i++) {
		if (this->books[i].title[0] == '\0' &&
			this->books[i].name[0] == '\0' &&
			this->books[i].year[0] == '\0')
			return i;
	}
	return -1;
}

bool Service::bookOneCheck(int index) {
	if (this->books[index].title[0] == '\0'&&
		this->books[index].name[0] == '\0' &&
		this->books[index].year[0] == '\0')
		return true;

	return false;
}