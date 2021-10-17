#include <iostream>
using namespace std;

int main()
{
	int menu;
	while (true)
	{
		cout << "==========Menu=========" << endl;
		cout << "1. addition  2. subtraction   3. multiplication   4. division  5.finish" << endl;
		cout << "Choose one of calculations (input number) : ";
		cin >> menu;

		if (menu == 5) {
			cout << "Finished.";
			exit(0);
		}

		int num1, num2;
		cout << "Input two numbers : ";
		cin >> num1 >> num2;

		switch (menu)
		{
		case 1:
			cout << "Result of Additions is : " << num1 + num2 << endl;
			break;
		case 2:
			cout << "Result of subtraction is : " << num1 - num2 << endl;
			break;
		case 3:
			cout << "Result of multiplication is : " << num1 * num2 << endl;
			break;
		case 4:
			cout << "Result of division is : " << num1 / num2 << endl;
			break;
		}
		cout << endl;
	}
	return 0;
}