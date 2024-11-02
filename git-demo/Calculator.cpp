#include <iostream>

using namespace std;

class Calculator
{
	private:
		double result;
	public:
		Calculator(double num1, char op, double num2);
		double getResult();
		void printResult();
};

Calculator::Calculator(double num1, char op, double num2)
{
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
		cout << "\nError: Invalid operator" << endl;
		exit(1);
	}
}

double Calculator::getResult()
{
	return result;
}
void Calculator::printResult()
{
	cout << "\nResult: " << result << endl;
}