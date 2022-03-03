#include <iostream>
using namespace std;

//������� ������ �������� ���������� ���� ������� ���������� �������
void pSwap(int* pn, int* pm) {
	int tmp = *pn;
	*pn = *pm;
	*pm = tmp;
}
//������� ������ �������� ���������� ���� ���������� �������
void refSwap(int &refn, int &refm) {
	int tmp = refn;
	refn = refm;
	refm = tmp;
}

void multiply(int &refn1, int &refn2, int num = 2) {
	refn1 *= num;
	refn2 *= num;
}

int main() {
	setlocale(LC_ALL, "Russian");
	int n = 10, m = 15;


	cout << n << " " << m << endl;
	cout << "������� ���������\n";
	pSwap(&n, &m);
	cout << n << " " << m << endl;
	cout << "---------------\n";
	int a = 50, b = 60;
	cout << a << " " << b << endl;
	cout << "������� ���������\n";
	refSwap(a, b);
	cout << a << " " << b << endl;


	multiply(a, b);
	cout << a << " " << b << endl;

	/*int* pn = &n;
	int& nref = n;// nref - ������ �� ���������� n
	//������ ���������������� ����� �� ��� ����������
	//������ ������ ������������� �� ������ ����������
	//��� ��������� � ������ �� �������� �������� ����������, �� ������� ������ ����

	cout << nref << endl; // �� ������ 10
	cout << pn << endl; // �� ������ ����� 00FC..
	nref = 15;
	cout << n << endl;*/




	//���������
	/*int* const pn = &n;// ���������-��������� | ����������� ���������
	cout << pn << endl;
	*pn = 10;
	cout << n << endl;
	m = 100 / *pn;
	const int* pm = &m;// ��������� �� ���������
	const int* const superN = &n;// ����������� ��������� �� ���������
	//superN = &m; - ������
	//superN = 11; - ������
	cout << superN << endl;
	cout << *superN << endl;*/

	/*int* pn = nullptr;
	if (pn != nullptr)
		cout << "pn = " << pn << endl;*/

	return 0;
}