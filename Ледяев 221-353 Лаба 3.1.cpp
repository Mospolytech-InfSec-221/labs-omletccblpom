#include <iostream> 

using namespace std;

const int nmax = 1000;

void Marge_sort_check(int linked_mas[], int b, int e)
{
    int i = b,
        t = 0,
        mid = b + (e - b) / 2,
        j = mid + 1,
        d[nmax];

    while (i <= mid && j <= e) {

        if (linked_mas[i] <= linked_mas[j]) {
            d[t] = linked_mas[i]; i++;
        }
        else {
            d[t] = linked_mas[j]; j++;
        }
        t++;
    }

    while (i <= mid) {
        d[t] = linked_mas[i]; i++; t++;
    }

    while (j <= e) {
        d[t] = linked_mas[j]; j++; t++;
    }

    for (i = 0; i < t; i++)
        linked_mas[b + i] = d[i];
}

void Marge_sort(int* arr, int left, int right)
{
    int  temp = 0;
    if (left < right)
        if (right - left == 1) {
            if (arr[left] > arr[right]) {
                temp = arr[left];
                arr[left] = arr[right];
                arr[right] = temp;
            }
        }
        else {
            Marge_sort(arr, left, left + (right - left) / 2);
            Marge_sort(arr, left + (right - left) / 2 + 1, right);
            Marge_sort_check(arr, left, right);
        }
}

void Bubble_sort(int* linked_mas, int len)
{
    int b;
    for (int i = 0; i < len; i++)
    {
        for (int j = 0; j < len - i - 1; j++)
        {
            if (linked_mas[j] > linked_mas[j + 1])
            {
                b = linked_mas[j];
                linked_mas[j] = linked_mas[j + 1];
                linked_mas[j + 1] = b;
            }
        }
    }
}

void Counting_sort(char* linked_mas, int len)
{
    int count[26] = { 0 };
    int j;
    for (int i = 0; i < len; i++)
    {
        j = int(linked_mas[i] - 97);
        count[j]++;
    }
    int i = 0;
    j = 0;
    while (j < 26)
    {
        if (count[j] > 0)
        {
            linked_mas[i] = char(int(97 + j));
            i++;
            count[j]--;
        }
        else
        {
            j++;
        }
    }
}

void int_input(int* mas, int& mas_len)
{
    cout << "Введите длину массива: ";
    cin >> mas_len;
    cout << "Введите массив: ";
    for (int i = 0; i < mas_len; i++)
    {
        cin >> mas[i];
    }
}

void char_input(char* mas, int& mas_len)
{
    cout << "Введите длину массива: ";
    cin >> mas_len;
    cout << "Введите массив: ";
    for (int i = 0; i < mas_len; i++)
    {
        cin >> mas[i];
    }
}

void task1()
{
    int mas[1000];
    int mas_len = 0;
    int_input(mas, mas_len);
    Bubble_sort(mas, mas_len);
    cout << "Отсортированный массив: \n";
    for (int i = 0; i < mas_len; i++)
    {
        cout << mas[i] << " ";
    }
    cout << endl;
}

void task2()
{
    char mas[1000];
    int mas_len = 0;
    char_input(mas, mas_len);
    Counting_sort(mas, mas_len);
    cout << "Отсортированный массив: \n";
    for (int i = 0; i < mas_len; i++)
    {
        cout << mas[i] << " ";
    }
    cout << endl;
}

void task3()
{
    int mas[1000];
    int mas_len = 0;
    int_input(mas, mas_len);
    Marge_sort(mas, 0, mas_len - 1);
    cout << "Отсортированный массив: \n";
    for (int i = 0; i < mas_len; i++)
        cout << mas[i] << " ";
    cout << "\n";

}

int main()
{
    setlocale(LC_ALL, "rus");
    int choice = 0;
    while (true)
    {
        cout << "Выберите задание:\n"
            << "1. Сортировка пузырьком\n"
            << "2. Сортировка подсчетом\n"
            << "3. Сортировка слиянием\n"
            << "4. Выход\n"
            << "Введите номер задания: ";
        cin >> choice;
        switch (choice)
        {
        case 1:
        {
            task1();
            break;
        }
        case 2:
        {
            task2();
            break;
        }
        case 3:
        {
            task3();
            break;
        }
        default:
        {
            return 0;
        }
        }
    }
}