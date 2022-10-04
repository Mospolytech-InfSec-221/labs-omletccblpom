#include <iostream>;

using std::cout;
using std::cin;
using std::endl;

double fact(int b) {
	if (b < 0)
		return 0;
	if (b == 0)
		return 1;
	else
		return b * fact(b - 1);
}

int main() {
	
	setlocale(LC_ALL, "rus");
	
	bool While = true;
	
	int amogus, a, b, c, n, j;
	double d = 0;

	cout << "Выберите:" << endl;
	cout << "1. Числовой треугольник" << endl;
	cout << "2. Нахождение факториала числа:" << endl;
	cout << "3. Вычисление среднего арифметического точек:" << endl;
	cout << "4. Выход" << endl;
	cout << "Введите номер задания: ";
	
	while (While) {
		cin >> a;
		switch (a)
		{
		case 1:
			cout << "Введите целое положительное число: ";
			cin >> n;
			for (int i = n; i >= 0; i--) {

				for (int j = 0; j <= i; j++) {

					if (j < i) {
						cout << j << " ";
					}
					else {
						cout << j << " ";
					}

				}
				cout << endl;
				
			}
			cout << "Введите номер следующего задания: ";
			break;
		case 2:
			cout << "Введите число: ";
			cin >> b;
			cout << "Факториал числа " << b << " равен " << fact(b) << endl;
			cout << "Введите номер следующего задания: ";

			break;
		case 3:
			cout << "Введите два значения =";

			cin >> a;
			cin >> c;

			d = (a + c) / 2;

			cout << "Среднее арифметическое между этими двумя числами равно: " << d << endl;
			cout << "Введите номер следующего задания: ";
			break;
		case 4:
			While = false;

			break;
		default:
			cout << "error\n";
			While = false;
			break;
		}
	}
	return 0;
}
