/** \file Shapes.h
* \brief Library to draw drow varois shapes.
* \details By using a menu user can select which shape is going to be printed.
* \author Ivan Kosiakov
* \version 0.1
* \date 2022-2022
* \copyright University of Nicosia.
*/
#ifndef SHAPES_H
#define SHAPES_H

//Function prototype
void drawHorizontalLine(const int length, const char ch);
void drawVerticalLine(const int height, const char ch);
void drawSquare(const int size, const char ch);
void drawRectangle(const int height, const int length, const char ch);
void drawRightTriangle(const int height, const char ch);
void drawIsoscelesTriangle(const int height, const char ch);
void drawParallelogram(const int height, const int base, const char ch);
void shapeTest(const int);

#endif