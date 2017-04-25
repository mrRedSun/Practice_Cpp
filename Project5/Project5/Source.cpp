# include <stdlib.h> /** EXIT_FAILURE **/
# include <iostream>
# include <Windows.h>

using namespace std;

int main(int argc, char *argv[])
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	register unsigned int i;
	unsigned int n;
	cout << "Введіть кількість елементів: ";
	cin >> n;

	if (n < 1)
	{
		cerr << "Потрібно хоча б два елементи." << endl;
		return EXIT_FAILURE;
	}

	double *a = new double[n];
	double *b = new double[n];

	cout << "Введіть епсилон: ";
	double eps; cin >> eps;

	cout << "Введіть" << n << " вихідний елемент:" << endl;
	for (i = 0; i < n; i++) cin >> a[i];

	cout << endl;

	/* Малюємо верхню рамку */
	for (i = 0; i < n; i++) cout << "+-------"; cout << "+" << endl;

	/* Виводимо вихідні елементи */
	for (i = 0; i < n; i++) cout << "| " << a[i] << "\t"; cout << "|" << endl;

	/* Знову рамка */
	for (i = 0; i < n; i++) cout << "+-------"; cout << "+" << endl;

	/* За умовою, перший елемент b дорівнює першому елементу a */
	b[0] = a[0];
	cout << "| " << *b << "\t";
	for (i = 1; i < n; i++)
	{
		b[i] = b[i - 1] * eps;
		/* В цьому місці b[i] буде дорівнювати значенню, що записується в другий рядок */
		b[i] += a[i];
		cout << "| " << b[i] << "\t";
	}
	cout << "+" << endl;

	/* І ще одна завершальна рамка */
	for (i = 0; i < n; i++) cout << "+-------"; cout << "+" << endl << endl;
	cout << "Відповідь: " << b[n - 1] << endl;

	delete[]b;
	delete[]a;
	return 0;
}