#include <iostream>
using namespace std;
#include <Windows.h>

/* Дано натуральное число. Определите сколько раз в нем встречается его
максимальная цифра. */

unsigned int MaxDigitCount(unsigned int N)
{
	unsigned int count = 0, MaxDigit  = 0 ;
	while (N > 0)
	{
		if ((N % 10) > MaxDigit)
		{
			MaxDigit = N % 10;
			count = 1;
		}
		else if ((N % 10) == MaxDigit)
		{
			count++;
		}
		N /= 10;
	}
	return count;
}

int main()
{
	unsigned int N;
	setlocale(LC_ALL, "Rus");
	
	cout << "Введите натуральное число: " << endl;
	cin >> N;
	cout << "Кол-во максимальных цифр в числе: " << MaxDigitCount(N) << endl;

	return 0;
}