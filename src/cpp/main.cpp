#include <iostream>
using namespace std;

int main()
{
	int menu;
	while (true)
	{
		cout << "========메뉴========" << endl;
		cout << "1. 덧셈  2. 뺄샘  3. 곱셈  4. 나눗셈 5.종료" << endl;
		cout << "연산을 선택해주세요 (숫자입력) : ";
		cin >> menu;

		if (menu == 5) {
			cout << "종료합니다.";
			exit(0);
		}

		int num1, num2;
		cout << "두 숫자를 입력해주세요 : ";
		cin >> num1 >> num2;

		switch (menu)
		{
		case 1:
			cout <<"더하기 연산결과는 : "<< num1 + num2 <<" 입니다."<< endl;
			break;
		case 2:
			cout <<"뺄샘 연산결과는 : "<< num1 - num2 <<" 입니다."<< endl;
			break;
		case 3:
			cout << "미구현입니다" << endl;
			break;
		case 4:
			cout << "미구현입니다" << endl;
			break;
		}
		cout << endl;
	}
	return 0;
}
