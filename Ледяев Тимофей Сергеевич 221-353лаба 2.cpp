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

	cout << "Âûáåðèòå:" << endl;
	cout << "1. ×èñëîâîé òðåóãîëüíèê" << endl;
	cout << "2. Íàõîæäåíèå ôàêòîðèàëà ÷èñëà:" << endl;
	cout << "3. Âû÷èñëåíèå ñðåäíåãî àðèôìåòè÷åñêîãî òî÷åê:" << endl;
	cout << "4. Âûõîä" << endl;
	cout << "Ââåäèòå íîìåð çàäàíèÿ: ";
	
	while (While) {
		cin >> a;
		switch (a)
		{
		case 1:
			cout << "Ââåäèòå öåëîå ïîëîæèòåëüíîå ÷èñëî: ";
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
			cout << "Ââåäèòå íîìåð ñëåäóþùåãî çàäàíèÿ: ";
			break;
		case 2:
			cout << "Ââåäèòå ÷èñëî: ";
			cin >> b;
			cout << "Ôàêòîðèàë ÷èñëà " << b << " ðàâåí " << fact(b) << endl;
			cout << "Ââåäèòå íîìåð ñëåäóþùåãî çàäàíèÿ: ";

			break;
		case 3:
			cout << "Ââåäèòå äâà çíà÷åíèÿ =";

			cin >> a;
			cin >> c;

			d = (a + c) / 2;

			cout << "Ñðåäíåå àðèôìåòè÷åñêîå ìåæäó ýòèìè äâóìÿ ÷èñëàìè ðàâíî: " << d << endl;
			cout << "Ââåäèòå íîìåð ñëåäóþùåãî çàäàíèÿ: ";
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
