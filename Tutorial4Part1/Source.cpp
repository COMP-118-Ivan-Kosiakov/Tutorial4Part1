/** \file Hello-World.cpp
* \brief Drawing program.
* \details By using a menu user can select which shape is going to be printed.
* \author Ivan Kosiakov
* \version 0.1
* \date 2022-2022
* \copyright University of Nicosia.
*/

#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <ctime>
#include <cassert>
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

/**
* Function <code>drawHorizontalLine</code>, draws a horizontal line.
* <BR>
* @param length The length of the line
* @param ch The symbol used to draw the line
*/
void drawHorizontalLine(const int length, const char ch) {
	assert(length >= 0);

	cout << "Horizontal Line (" << length << ", \'" << ch << "\')" << endl;
	for (int i = 1; i <= length; i++)
		cout << ch;
	cout << endl << endl;
}

/**
* Function <code>drawVericalLine</code>, draws a vertical line.
* <BR>
* @param height The height of the line
* @param ch The symbol used to draw the line
*/
void drawVerticalLine(const int height, const char ch) {
	assert(height >= 0);

	cout << "Vertical Line (" << height << ", \'" << ch << "\')" << endl;
	for (int i = 1; i <= height; i++)
		cout << ch << endl;
	cout << endl;
}

/**
* Function <code>drawSquare</code>, draws a square.
* <BR>
* @param size The size of the square
* @param ch The symbol used to draw the square
*/
void drawSquare(const int size, const char ch) {
	assert(size >= 0);

	int space = size - 1;
	cout << "Square (" << size << ", \'" << ch << "\')" << endl;
	for (int j = 1; j <= size; j++) {
		if (j == 1 || j == size) {
			for (int i = 1; i <= size; i++)
				cout << ch;
			cout << endl;
		}
		else
			cout << ch << setw(space) << ch << endl;
	}
	cout << endl;
}

/**
* Function <code>drawRectangle</code>, draws a rectangle.
* <BR>
* @param height The height of the rectangle.
* @param length The length of the rectangle.
* @param ch The symbol used to draw the rectangle.
*/
void drawRectangle(const int height, const int length, const char ch) {
	assert(height >= 0 && length >= 0);

	int space = length - 1;
	cout << "Rectangle (" << height << ", " << length << ", \'" << ch << "\')" << endl;
	for (int j = 1; j <= height; j++) {
		if (j == 1 || j == height) {
			for (int i = 1; i <= length; i++)
				cout << ch;
			cout << endl;
		}
		else if (length > 1)
			cout << ch << setw(space) << ch << endl;
		else cout << ch << endl;
	}
	cout << endl;
}

/**
* Function <code>drawRightTriangle</code>, draws a right triangle.
* <BR>
* @param height The height of the right triangle.
* @param ch The symbol used to draw the right triangle.
*/
void drawRightTriangle(const int height, const char ch) {
	assert(height >= 0);

	int spaceCounter = 0, j = 1;
	cout << "Right Triangle (" << height << ", \'" << ch << "\')" << endl;
	for (int i = 1; i <= height; i++) {
		if (j == 1)
			cout << ch;
		else if (j != 1 && j != height)
			cout << ch << setw(spaceCounter) << ch;
		else for (int h = 1; h <= height; h++)
			cout << ch;
		j++;
		spaceCounter++;

		cout << endl;
	}
	cout << endl;
}

/**
* Function <code>drawIsoscelesTriangle</code>, draws a isosceles triangle.
* <BR>
* @param height The height of the isosceles triangle.
* @param ch The symbol used to draw the isosceles triangle.
*/
void drawIsoscelesTriangle(const int height, const char ch) {
	assert(height >= 0);

	int counter = 1;
	cout << "Isosceles Triangle (" << height << ", \'" << ch << "\')" << endl;
	for (int j = height; j >= 0; j--) {
		for (int i = 1; i <= j; i++)
			cout << " ";
		for (int i = 1; i < counter; i++)
			if (i == 1)
				cout << ch;
			else
				cout << ch << ch;
		cout << endl;
		counter++;
	}
	cout << endl;
}

/**
* Function <code>drawParallelogram</code>, draws a parallelogram.
* <BR>
* @param height The height of the parallelogram.
* @param base The base of the parallelogram.
* @param ch The symbol used to draw the parallelogram.
*/
void drawParallelogram(const int height, const int base, const char ch) {
	assert(height >= 0 && base >= 0);

	int space = base - 1;
	cout << "Parallelogram (" << height << ", " << base << ", \'" << ch << "\')" << endl;
	for (int j = 1; j <= height; j++) {
		cout << setw(height - j + 1);
		if (j == 1 || j == height) {
			for (int i = 1; i <= base; i++)
				cout << ch;
			cout << endl;
		}
		else if (base > 1)
			cout << ch << setw(space) << ch << endl;
		else cout << ch << endl;
	}
	cout << endl;
}

/**
* Function <code>shapeTest</code>, draws some amount of the random figures.
* <BR>
* @param MAX_SHAPES Amount of the figures thats going to be drawn.
*/
void shapeTest(const int MAX_SHAPES) {
	int length, height, size, base;
	char symbol;

	for (int i = 0; i < MAX_SHAPES; i++) {
		int randomMenu = rand() % 7 + 1;

		switch (randomMenu)
		{
		case 1: {
			length = rand() % 21 + 1;
			symbol = rand() % 127 + 33;

			//Using function to build a Horizontal Line
			drawHorizontalLine(length, symbol);
			break;
		}
		case 2: {
			height = rand() % 21 + 1;
			symbol = rand() % 127 + 33;

			//Using function to build a Vertical Line
			drawVerticalLine(height, symbol);
			break;
		}
		case 3: {
			size = rand() % 21 + 1;
			symbol = rand() % 127 + 33;

			//Using function to build a Square
			drawSquare(size, symbol);
			break;	}
		case 4: {
			height = rand() % 21 + 1;
			length = rand() % 21 + 1;
			symbol = rand() % 127 + 33;

			//Using function to build a Rectangle
			drawRectangle(height, length, symbol);
			break;
		}
		case 5: {
			height = rand() % 21 + 1;
			symbol = rand() % 127 + 33;

			//Using function to build a Right Triangle
			drawRightTriangle(height, symbol);
		}
		case 6: {
			height = rand() % 21 + 1;
			symbol = rand() % 127 + 33;

			//Using function to build a Isoscles Triangle
			drawIsoscelesTriangle(height, symbol);
			break;
		}
		case 7: {
			height = rand() % 21 + 1;
			base = rand() % 21 + 1;
			symbol = rand() % 127 + 33;;

			//Using function to build aP Parallelogram
			drawParallelogram(height, base, symbol);
			break;
		}
		}
	}
}