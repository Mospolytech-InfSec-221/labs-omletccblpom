#include <iostream>

using std::cout;
using std::cin;
using std::endl;

void task1(int*& mas, int* size) {
	do {
		cout << "������� ������ �������: ";
		cin >> *size;
		if (*size < 0) {
			cout << "������ ������ ���� ������������� ������";
		}
	} while (*size < 0);

	mas = new int[*size];

	for (int i = 0; i < *size; i++) {
		cout << "������� �����: " << endl;
		cin >> mas[i];
	}
}

void task2(int*& mas, int* size) {
	if (*size != 0) {
		for (int i = 0; i < *size; i++) {
			cout << mas[i] << "\t";
		}
		cout << endl;
	}
	else {
		cout << "������ �� ��������" << endl;
	}
}

int sumOfDigitInEvenPlaces(int num) {
	int sum = 0;

	while (num > 0) {
		sum += num % 100 / 10;
		num /= 100;
	}

	return sum;
}

void sortingForTask3(int* mas, int* size) {
	bool checkSort = true;

	while (checkSort) {
		checkSort = false;

		for (int i = 0; i < *size - 1; i++) {
			if (sumOfDigitInEvenPlaces(mas[i]) > sumOfDigitInEvenPlaces(mas[i + 1]) || ((sumOfDigitInEvenPlaces(mas[i]) == sumOfDigitInEvenPlaces(mas[i + 1])) && (mas[i] > mas[i + 1]))) {
				int temp = mas[i];
				mas[i] = mas[i + 1];
				mas[i + 1] = temp;

				checkSort = true;
			}
		}
	}
}

void task3(int*& mas, int* size) {
	if (*size != 0) {
		sortingForTask3(mas, size);
		task2(mas, size);
	}
	else {
		cout << "������ �� ��������" << endl;
	}
}

void sortingForTask4(int* mas, int* size) {
	for (int i = 0; i < *size; i++) {
		for (int j = 0; j < *size - i - 1; j++) {
			if (((mas[j] % 10) > (mas[j + 1] % 10)) || (((mas[j] % 10) == (mas[j + 1] % 10)) && (mas[j] < mas[j + 1]))) {
				int t = mas[j];
				mas[j] = mas[j + 1];
				mas[j + 1] = t;
			}
		}
	}
}

void task4(int*& mas, int* size) {
	if (*size != 0) {
		sortingForTask4(mas, size);
		task2(mas, size);
	}
	else {
		cout << "������ �� ��������" << endl;
	}
}

int main() {
	setlocale(LC_ALL, "rus");
	int* mas;
	int size = 0;
	int choice = 0; 
	while (true) { 
		cout << "��� �� ������ ���������? \n"
			<< "1. ���� �������\n"
			<< "2. ����� ������� � �������\n"
			<< "3. ���������� �� ����� ����, ������� �� ������ ������\n"
			<< "4. ������������� ������ ������� �� ����������� ��������� �����, � ��� ���������� ��������� ���� - �� ��������\n"
			<< "5. �����\n";
		cin >> choice;
		switch (choice) {
		case 1: {
			task1(mas, &size);
			break; 
		}
		case 2: {
			task2(mas, &size);
			break;
		}
		case 3: {
			task3(mas, &size);
			break;
		}
		case 4: {
			task4(mas, &size);
			break;
		}
		case 5: {
			return 0;
			break;
		}
		default: {
			cout << "������������ ����, ����� ������� ���!" << endl;
		}
		}
	}
}