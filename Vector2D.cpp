/*
* Copyright (c) 2024 - Code By MERS4D
* All rights reserved.
*
* [MY SOCIAL MEDIA LINKS]:
* |-> Github:	 github.com/MohammadMersad/
* |-> Telegram:	 @CS_Mersad
* |-> Instragram: mersaad_h
* --------------------------------------------
*
* Project: Vector 2D | File: Vector2D.cpp
* File Description: Nothing Else... :)
*
* You may modify and distribute this source code, provided that the author's name
* and copyright notice remain intact. Any changes to the original code must be
* clearly documented.
*/

#include "Vector2D.h"

//----------------------------[ Functions ]----------------------------\\

//Constractor
Vector2D::Vector2D(double n_x = 0, double n_y = 0) : x(n_x), y(n_y)
{
	#ifdef   VEC2D_DEBUG_MODE
		printf("Vector (%f, %f) Created!", x, y);
	#endif //VEC2D_DEBUG_MODE
}

//Get Values
double Vector2D::getX() {
	return this->x;
}

double Vector2D::getY() {
	return this->y;
}

//Set Values
void Vector2D::setX(const double& n_v) {
	this->x = n_v;
}

void Vector2D::setY(const double& n_v) {
	this->y = n_v;
}

//Other Functions
Vector2D Vector2D::getNormalized() {
	double length = this->getLength();
	return Vector2D(x / length, y / length);
}

double Vector2D::getLength() {
	return std::sqrt( (x * x) + (y * y) );
}


//----------------------------[ Operators ]----------------------------\\

//Sum Function
Vector2D Vector2D::operator+(const Vector2D& other) {
	return Vector2D(x + other.x, y + other.y);
}

//Subtract Function
Vector2D Vector2D::operator-(const Vector2D& other) {
	return Vector2D(x - other.x, y - other.y);
}

// ( += ) & ( -= ) Operators
Vector2D& Vector2D::operator+=(const Vector2D& other) {
	this->x += other.x;
	this->y += other.y;
	return *this;
}

Vector2D& Vector2D::operator-=(const Vector2D& other) {
	this->x -= other.x;
	this->y -= other.y;
	return *this;
}

//Input/Output Stream Operators <Using IOSTREAM>
std::ostream& operator<<(std::ostream& os, const Vector2D& obj) {
	os << obj.x << ", " << obj.y;
	return os;
}

std::istream& operator>>(std::istream& stream, Vector2D& obj) {
	stream >> obj.x >> obj.y;
	return stream;
}
