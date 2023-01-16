#include <iostream>
#include <limits> 
#include <bitset>

int main() {
	
	setlocale(LC_ALL, "rus");

	//1
	std::cout << "1. Ëåäÿåâ Òèìîôåé Ñåðãååâè÷, 221-353 " << std::endl;

	//2
	std::cout << "2." << std::endl;
	std::cout << "min int = " << (int)0b10000000000000000000000000000000 << ", max int = " << (int)0b01111111111111111111111111111111 << ", size of int = " << sizeof(int) << std::endl;
	std::cout << "min unsigned int = " << (unsigned int)0 << ", max unsigned int = " << (unsigned int)0b11111111111111111111111111111111 << ", size of unsigned int = " << sizeof(unsigned int) << std::endl;
	std::cout << "min short = " << (short)0b1000000000000000 << ", max short = " << (short)0b0111111111111111 << ", size of short = " << sizeof(short) << std::endl;
	std::cout << "min unsigned short = " << (unsigned short)0 << ", max unsigned short = " << (unsigned short)0b1111111111111111 << ", size of unsigned short = " << sizeof(unsigned short) << std::endl;
	std::cout << "min long = " << (long)0b10000000000000000000000000000000 << ", max long = " << (long)0b01111111111111111111111111111111 << ", size of long = " << sizeof(long) << std::endl;
	std::cout << "min long long = " << (long long)0b1000000000000000000000000000000000000000000000000000000000000000 << ", max long long = " << (long long)0b0111111111111111111111111111111111111111111111111111111111111111 << ", size of long long = " << sizeof(long long) << std::endl;
	std::cout << "min double = -" << (double)0b1000000000000000000000000000000000000000000000000000000000000000 << ", max double = " << (double)0b0111111111111111111111111111111111111111111111111111111111111111 << ", size of double = " << sizeof(double) << std::endl;
	std::cout << "min char = " << (char)0b10000000 << ", max char = " << (char)0b01111111 << ", size of char = " << sizeof(char) << std::endl;
	std::cout << "min bool = " << (bool)0 << ", max bool = " << (bool)0b01111111 << ", size of bool = " << sizeof(bool) << std::endl;

	//3
	std::cout << "3. Ââåäèòå ÷èñëî: " << std::endl;
	
	long long g;
	
	std::cin >> g;
	std::cout << "Â äâîè÷íîì âèäå: " << std::bitset<std::numeric_limits<int>::digits>(g) << std::endl;
	std::cout << "Â øåñòíàäöàòèðå÷íîì âèäå: " << std::hex << g << std::endl;
	std::cout << "bool " << (bool)g << std::endl;
	std::cout << "double " << (double)g << std::endl;
	std::cout << "char " << (char)g << std::endl;

	//4
	std::cout << "4. a*x=b. Ââåäèòå çíà÷åíèÿ a è b: ";
	
	int a, b;
	double x;

	std::cin >> a;
	std::cin >> b;
	
	std::cout << "a" << "*" << "x" << "=" << "b" << std::endl;
	std::cout << a << "*" << "x" << "=" << b << std::endl;
	std::cout << "x" << "=" << b << "/" << a << std::endl;
	
	x = b / a;
	
	std::cout << "x" << "=" << x << std::endl;
	std::cout << "Îòâåò: " << x << std::endl;
	
	//5
	std::cout << "5.Ââåäèòå êîîðäèíàòû îòðåçêà íà ïðÿìîé: ";
	
	int d, c;
	float e;
	
	std::cin >> d >> c;
	e = (d + c) / 2.;
	std::cout << "Öåíòð êîîðäèíàò íàõîäèòñÿ â òî÷êå: " << e << "." << std::endl;

	return 0;
}
