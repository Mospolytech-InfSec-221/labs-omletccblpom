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

	cout << "��������:" << endl;
	cout << "1. �������� �����������" << endl;
	cout << "2. ���������� ���������� �����:" << endl;
	cout << "3. ���������� �������� ��������������� �����:" << endl;
	cout << "4. �����" << endl;
	cout << "������� ����� �������: ";
	
	while (While) {
		cin >> a;
		switch (a)
		{
		case 1:
			cout << "������� ����� ������������� �����: ";
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
			cout << "������� ����� ���������� �������: ";
			break;
		case 2:
			cout << "������� �����: ";
			cin >> b;
			cout << "��������� ����� " << b << " ����� " << fact(b) << endl;
			cout << "������� ����� ���������� �������: ";

			break;
		case 3:
			cout << "������� ��� �������� =";

			cin >> a;
			cin >> c;

			d = (a + c) / 2;

			cout << "������� �������������� ����� ����� ����� ������� �����: " << d << endl;
			cout << "������� ����� ���������� �������: ";
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
