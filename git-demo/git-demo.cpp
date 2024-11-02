#include <iostream>
#include <string>
#include "Calculator.cpp"

using namespace std;

int main()
{
	cout << "Input format: \"<num1><op><num2>\", where <op> is +, -, *, or /" << endl;

	string input_str;
	cin >> input_str;

	double num1, num2;
	int op_pos = 0;

	// parse op
	for (int i = 0; i < input_str.length(); i++)
	{
		if (!isdigit(input_str[i]) && input_str[i] != '.')
		{
			op_pos = i;
			break;
		}
	}
	char op = input_str[op_pos];

	// parse nums
	try {
		num1 = stod(input_str.substr(0, op_pos));
		num2 = stod(input_str.substr(op_pos + 1));
	}
	catch(exception e) {
		cout << "\nError: Invalid input data" << endl;
		exit(1);
	}

	Calculator calc(num1, op, num2);
	calc.printResult();
}