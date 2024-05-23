#include <iostream>

int main() {
	int num1, num2, result;
	char op;

	std::cout << "Enter first number: ";
	std::cin >> num1;

	std::cout << "Enter operator (+, -, *, /): ";
	std::cin >> op;

	std::cout << "Enter second number: ";
	std::cin >> num2;

	switch (op)
	{
	case '+':
		result = num1 + num2;
		break;
	case '-':
		result = num1 - num2;
		break;
	case '*':
		result = num1 * num2;
		break;
	case '/':
		result = num1 / num2;
		break;
	default:
		return 0;
	
	}
	std::cout << num1 << " " << op << " " << num2 << " = " << result << std::endl;
}