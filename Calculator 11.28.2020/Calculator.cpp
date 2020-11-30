#include "Calculator.h"
#include <iostream>

double Calculator::Calculate(double firstNum, char mathOper, double secondNum, char mathOper2, double thirdNum)
{
	double sum = firstNum + secondNum;
	double minusSum = firstNum - secondNum;
	double divideSum = firstNum / secondNum;
	double multipleSum = firstNum * secondNum;

	if (secondNum == 0 || thirdNum == 0) {
		std::cout << "Деление на 0 запрещено";
	}
	else {

	switch (mathOper2) {
	case '+':
		if (mathOper == '+') {
			return sum + thirdNum;
		}
		else if (mathOper == '-') {
			return minusSum + thirdNum;
		}
		else if (mathOper == '/') {
			return divideSum + thirdNum;
		}
		else if (mathOper == '*') {
			return multipleSum + thirdNum;
		}
		break;
	case '-':
		if (mathOper == '+') {
			return sum - thirdNum;
		}
		else if (mathOper == '-') {
			return minusSum - thirdNum;
		}
		else if (mathOper == '/') {
			return divideSum - thirdNum;
		}
		else if (mathOper == '*') {
			return multipleSum - thirdNum;
		}
		break;
	case '/':
	case ':':
		if (mathOper == '+') {
			return firstNum + (secondNum / thirdNum);
		}
		else if (mathOper == '-') {
			return firstNum - (secondNum / thirdNum);
		}
		else if (mathOper == '*') {
			return (firstNum * secondNum) / thirdNum;
		}
		else if (mathOper == '/') {
			return (firstNum / secondNum) / thirdNum;
		}
		break;
	case '*':
		if (mathOper == '+') {
			return firstNum + (secondNum * thirdNum);
		}
		else if (mathOper == '-') {
			return firstNum - (secondNum * thirdNum);
		}
		else if (mathOper == '*') {
			return (firstNum * secondNum) * thirdNum;
		}
		else if (mathOper == '/') {
			return (firstNum / secondNum) * thirdNum;
		}
		break;
	default:
		return 0;
		break;
	}
	}
}
