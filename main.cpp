#include <iostream>
#include <string>

using namespace std;

int main() {

	float num1, num2;
	char operator_;
	float result = 0.0f;

	cout << "Enter your first number: ";
	cin >> num1;

	cout << "Enter your operator (+, -, /, *): ";
	cin >> operator_;

	cout << "Enter your second number: ";
	cin >> num2;

	switch (operator_)
	{
	case '+': result = num1 + num2;
		break;

	case '-': result = num1 - num2;
		break;

	case '*': result = num1 * num2;
		break;

	case '/': if (num2 == 0) {
		cout << "Division by zero error";
		return 1;
	}
			result = num1 / num2;
			break;

	default:
		cout << "Invalid operator!";
		return 1;
	}

	cout << "The result is: " << result << endl;

	return 0;

}