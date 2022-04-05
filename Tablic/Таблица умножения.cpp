#include <iostream>
using namespace std;
int main()
{
	setlocale(0, "");
	int  userBob, numbe1, numbe2;
	int minnum=0, maxnum=0;
	int qusentcount = 10;
	int aus, res, colot=0;
	cout << "Добро пожаловать на тест по таблице умножения в нём представлены 3 уровня сложности{ small = 1, normal = 2, hard = 3 }\n " << endl;
	cout << "Выбирете 0 чтобы выйти" << endl;
	cout << "Выбирете уровень сложности!!!:\n";
	cin >> userBob;
	switch (userBob)
	{
	case 1: {
		cout << "Выбран уровень сложности small!" << endl;
		minnum = 1;
		maxnum = 3;
		qusentcount = 4;
		break;
	}
	case 2: {
		cout << "Выбран уровень сложности normal!" << endl;
		minnum = 1;
		maxnum = 5;
		qusentcount = 4;

		break;
	}
	case 3: {
		cout << "Выбран уровень сложности hard" << endl;
		minnum = 1;
		maxnum = 9;
		qusentcount = 7;
		break;
	}
	default:
		cout << "Неправильно выбрана сложность!!!" << endl;
		break;

	}
	for (int i = 1; i < qusentcount; i++) {
		numbe1 = rand() % maxnum + minnum;
		numbe2 = rand() % maxnum + minnum;
		res = numbe1 * numbe2;
		cout << numbe1 << " * " << numbe2 << " = ";
		cin >> aus;
		if (res != aus)
			cout << "Ошибка !" << numbe1 << " * " << numbe2 << " = " << res << endl;
		else
			colot = colot + 1;
	}
		cout << "Тест закончен!" << endl;
		cout << "Количество праильных ответов:\n" << colot << endl;
		if (colot > 3)
			cout << "Ваша оценка\n" << 4 << endl;
		if (colot < 3)
			cout << "Ваша оценка\n" << 2 << endl;
		if (colot > 4)
			cout << "Ваша оценка\n" << 5 << endl;
		if (colot == 3)
			cout << "Ваша оценка\n" << 3 << endl;
	system("pause");
	return 0;
}

























