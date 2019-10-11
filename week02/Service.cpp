#include "Service.h"

using namespace std;

void Service::bookCreate() {
	cin.ignore();
	int index = bookAllCheck();

	cout << "책 제목을 입력해 주세요 : ";
	cin.getline(this->books[index].title, 500);

	cout << "저자를 입력해 주세요 : ";
	cin.getline(this->books[index].name, 100);

	cout << "출판 년도를 입력해 주세요 : ";
	cin.getline(this->books[index].year, 100);

}

void Service::bookRead() {
	int i;
	for (i = 0; i < 10; i++) {
		if (bookOneCheck(i))
			cout << i+1 << ") 빈 공간 입니다." << endl;
		else {
			cout << i + 1 << ") ";
			books[i].print_bookInfo();
		}
	}
}

 void Service::bookUpdate(int index) {
	cin.ignore();
	 
	cout << "(수정)책 제목을 입력해 주세요 : ";
	cin.getline(books[index - 1].title, 500);

	cout << "(수정)저자를 입력해 주세요 : ";
	cin.getline(books[index - 1].name, 100);

	cout << "(수정)출판년도를 입력해 주세요 : ";
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