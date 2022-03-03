#include <iostream>
using namespace std;

//‘ункци€ мен€ет значение переданных двух адресов переменных местами
void pSwap(int* pn, int* pm) {
	int tmp = *pn;
	*pn = *pm;
	*pm = tmp;
}
//‘ункци€ мен€ет значение переданных двух переменных местами
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
	cout << "‘ункци€ сработала\n";
	pSwap(&n, &m);
	cout << n << " " << m << endl;
	cout << "---------------\n";
	int a = 50, b = 60;
	cout << a << " " << b << endl;
	cout << "‘ункци€ сработала\n";
	refSwap(a, b);
	cout << a << " " << b << endl;


	multiply(a, b);
	cout << a << " " << b << endl;

	/*int* pn = &n;
	int& nref = n;// nref - ссылка на переменную n
	//—сылки иницифлизируютс€ сразу же при объ€влении
	//—сылки нельз€ перенаправить на другие переменные
	//при обращении к ссылке мы получаем значение переменной, на которую ссылка ведЄт

	cout << nref << endl; // на экране 10
	cout << pn << endl; // на экране адрес 00FC..
	nref = 15;
	cout << n << endl;*/




	//”казатели
	/*int* const pn = &n;// указатель-константа | константный указатель
	cout << pn << endl;
	*pn = 10;
	cout << n << endl;
	m = 100 / *pn;
	const int* pm = &m;// указатель на константу
	const int* const superN = &n;// константный указатель на константу
	//superN = &m; - ошибка
	//superN = 11; - ошибка
	cout << superN << endl;
	cout << *superN << endl;*/

	/*int* pn = nullptr;
	if (pn != nullptr)
		cout << "pn = " << pn << endl;*/

	return 0;
}