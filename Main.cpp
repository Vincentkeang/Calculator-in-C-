#include <iostream>
#include "Math.h"

int main()
{
	int choice; 

	std::cout << "Welcome to a Simple Calculator By Vincent Keang" << std::endl; 
	std::cout << "Please enter what type of operation you would like to do: " << std::endl; 
	std::cout << "1. Addition" << std::endl; 
	std::cout << "2. Subtraction" << std::endl; 
	std::cout << "3. Division" << std::endl; 
	std::cout << "4. Multiplication" << std::endl; 
	std::cin >> choice; 
	if (choice == 1)
	{
		int num1;
		int num2;

		std::cout << "You Choose Addition!" << std::endl;
		std::cout << "Please Enter the first number: ";
		std::cin >> num1;

		std::cout << "Please Enter the secound number: ";
		std::cin >> num2;
		std::cout << DoAddition(num1, num2) << std::endl;
	}
	else if (choice == 2)
	{
		int num1;
		int num2; 

		std::cout << "You Choose Subtraction!" << std::endl; 
		std::cout << "Please Enter the first number: " << std::endl; 
		std::cin >> num1;

		std::cout << "Please Enter the second number: "; 
		std::cin >> num2;
		std::cout << DoSubtraction(num1, num2) << std::endl; 
	}
	else if (choice == 3)
	{
		int num1;
		int num2;

		std::cout << "You Choose Division!" << std::endl;
		std::cout << "Please Enter the first number: " << std::endl;
		std::cin >> num1;

		std::cout << "Please Enter the second number: ";
		std::cin >> num2;
		std::cout << DoDivision(num1, num2) << std::endl; 
	}
	else if (choice == 4)
	{
		int num1;
		int num2;

		std::cout << "You Choose Multiplication!" << std::endl;
		std::cout << "Please Enter the first number: " << std::endl;
		std::cin >> num1;

		std::cout << "Please Enter the second number: ";
		std::cin >> num2;
		std::cout << DoMultiplication(num1, num2) << std::endl; 
	}
}