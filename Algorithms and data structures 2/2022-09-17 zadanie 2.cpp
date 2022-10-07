#include <iostream>
using namespace std;

/*¬ычислить значение выражени€ y = anЈx^(n) + an - 1Јx^(n - 1) + ... + aiЈx^(i) + ... + a1Јx^(1) + a0, 
где все данные Ц целые числа.  оэффициенты an, an-1, ... , ai,Е, a1, a0 €вл€ютс€
первыми членами арифметической прогрессии, определ€емой q Ц первым
элементом и d Ц разностью между соседними элементами. «начени€ q, d, n, x ввод€тс€ с клавиатуры.*/

/*for () {
		for (int i = 1; i < n; i++)
		{

		}
		x *=
		y=q*x
	}*/

int ZnachenieVirajeniya(int q, int d, int n, int x)
{
	int y = 0;
	int temp = x;

	for (int i = 1; i < n; i++)
	{
		x *= temp;
	}

	for (int i = 0; i <= n; i++)
	{
		y += q * x;
		x /= temp;
		q = q + d;
	}

	return y;
}

int main()
{    
	setlocale(LC_ALL, "Rus");

	int q, d, n, x;

	cout << "¬ведите первый элемент арифметической прогрессии: " << endl;
	cin >> q;
	cout << "¬ведите значение разности между соседними элеменами: " << endl;
	cin >> d;
	cout << "¬ведите значение показател€ старшей степени: " << endl;
	cin >> n;
	cout << "¬ведите значение X: " << endl;
	cin >> x;

	cout << "«начение выражен€ равно: " << ZnachenieVirajeniya(q, d, n, x) << endl;

	return 0;
}
