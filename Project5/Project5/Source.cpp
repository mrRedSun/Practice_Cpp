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
	cout << "������ ������� ��������: ";
	cin >> n;

	if (n < 1)
	{
		cerr << "������� ���� � ��� ��������." << endl;
		return EXIT_FAILURE;
	}

	double *a = new double[n];
	double *b = new double[n];

	cout << "������ �������: ";
	double eps; cin >> eps;

	cout << "������" << n << " �������� �������:" << endl;
	for (i = 0; i < n; i++) cin >> a[i];

	cout << endl;

	/* ������� ������ ����� */
	for (i = 0; i < n; i++) cout << "+-------"; cout << "+" << endl;

	/* �������� ������ �������� */
	for (i = 0; i < n; i++) cout << "| " << a[i] << "\t"; cout << "|" << endl;

	/* ����� ����� */
	for (i = 0; i < n; i++) cout << "+-------"; cout << "+" << endl;

	/* �� ������, ������ ������� b ������� ������� �������� a */
	b[0] = a[0];
	cout << "| " << *b << "\t";
	for (i = 1; i < n; i++)
	{
		b[i] = b[i - 1] * eps;
		/* � ����� ���� b[i] ���� ���������� ��������, �� ���������� � ������ ����� */
		b[i] += a[i];
		cout << "| " << b[i] << "\t";
	}
	cout << "+" << endl;

	/* � �� ���� ����������� ����� */
	for (i = 0; i < n; i++) cout << "+-------"; cout << "+" << endl << endl;
	cout << "³������: " << b[n - 1] << endl;

	delete[]b;
	delete[]a;
	return 0;
}