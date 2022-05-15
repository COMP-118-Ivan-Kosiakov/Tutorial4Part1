/** \file Hello-World.cpp
* \brief Drawing program.
* \details By using a menu user can select which shape is going to be printed.
* \author Ivan Kosiakov
* \version 0.1
* \date 2022-2022
* \copyright University of Nicosia.
*/

#include <iostream>
#include <cstdlib>
#include <ctime>
#include <iomanip>
#include "Shapes.h"

using namespace std;

/**
*The driver of the program.
* @return Returns 0.
*/
int main()
{
	const int MAX_AMOUNT_SHAPES = 50;
	int option, length, size, height, base;
	char symbol;
	bool stop = false;

	srand(time(NULL));

	cout << setw(14) << "Menu" << endl
		<< "1) Draw a horizontal line" << endl
		<< "2) Draw a vertical line" << endl
		<< "3) Draw a square" << endl
		<< "4) Draw a rectangle" << endl
		<< "5) Draw a right triangle" << endl
		<< "6) Draw an isosceles triangle" << endl
		<< "7) Draw a parallelogram" << endl
		<< "8) Random " << MAX_AMOUNT_SHAPES << " shapes " << endl
		<< "9) Quit" << endl << endl;

	do {
		cout << endl << endl << "Enter your Option: ";
		cin >> option;

		//In this point user can select number to open exact function
		switch (option)
		{
		case 1: {
			cout << "Enter length of the line: ";
			cin >> length;
			cout << "Enter symbol that you would like to use: ";
			cin >> symbol;

			//Using function to build a Horizontal Line
			drawHorizontalLine(length, symbol);
			break;
		}

		case 2: {
			cout << "Enter height of the line: ";
			cin >> height;
			cout << "Enter symbol that you would like to use: ";
			cin >> symbol;

			//Using function to build a Vertical Line
			drawVerticalLine(height, symbol);
			break;
		}

		case 3: {
			cout << "Enter size of the square: ";
			cin >> size;
			cout << "Enter symbol that you would like to use: ";
			cin >> symbol;

			//Using function to build a Square
			drawSquare(size, symbol);
			break;
		}

		case 4: {
			cout << "Enter height of the rectangle: ";
			cin >> height;
			cout << "Enter length of the rectangle: ";
			cin >> length;
			cout << "Enter symbol that you would like to use: ";
			cin >> symbol;

			//Using function to build a Rectangle
			drawRectangle(height, length, symbol);
			break;
		}

		case 5: {
			cout << "Enter height of the triangle: ";
			cin >> height;
			cout << "Enter symbol that you would like to use: ";
			cin >> symbol;

			//Using function to build a Right Triangle
			drawRightTriangle(height, symbol);
			break;
		}

		case 6: {
			cout << "Enter height of the triangle: ";
			cin >> height;
			cout << "Enter symbol that you would like to use: ";
			cin >> symbol;

			//Using function to build a Isoscles Triangle
			drawIsoscelesTriangle(height, symbol);
			break;
		}

		case 7: {
			cout << "Enter height of the parallelogram: ";
			cin >> height;
			cout << "Enter base of the parallelogram: ";
			cin >> base;
			cout << "Enter symbol that you would like to use: ";
			cin >> symbol;

			//Using function to build aP Parallelogram
			drawParallelogram(height, base, symbol);
			break;
		}

		case 8: {
			shapeTest(MAX_AMOUNT_SHAPES);
			break;
		}

		case 9: {
			cout << "Thank you. Bye!" << endl;

			//Loop is going to stop by reaching this case
			stop = true;
			break;
		}
			  //Check for invalid symbol
		default: cout << "You've entered an invalid number!";
			break;
		}
	} while (stop == false);

	return 0;
}