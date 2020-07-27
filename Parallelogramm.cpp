#include <iostream>
using namespace std;

int main()
{
	unsigned int breite;
	unsigned int hoehe;
	do
	{
		cout << "Bitte geben Sie die Breite des Parallelogramms ein: ? ";
		cin >> breite;
	} while (breite < 2);

	do{
	cout << "Bitte geben Sie die Hoehe des Parallelogramms ein: ? ";
	cin >> hoehe;
	} while (hoehe < 2);

	for (unsigned int i = 1, verschiebung = 0; i <= hoehe; i++)
	{
		for (unsigned int j = 1; j <= breite + verschiebung; j++)
		{
			if (i == 1 || i == hoehe && j > verschiebung || j == 1 + verschiebung || j == breite + verschiebung)
			{
				cout << '*';
			}
			else if (j <= verschiebung)
			{
				cout << '.';
			}
			else
			{
				cout << '+';
			}
		}
		cout << endl;
		verschiebung++;

	}
	cout << endl;

	system("PAUSE");
	return 0;
}