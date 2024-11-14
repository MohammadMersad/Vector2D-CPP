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
* Project: Vector 2D | File: Vector2D.h
* File Description: Nothing Else... :)
*
* You may modify and distribute this source code, provided that the author's name
* and copyright notice remain intact. Any changes to the original code must be
* clearly documented.
*/

#pragma once

#include <cmath>

//#define VEC2D_DEBUG_MODE

#include <iostream>

class Vector2D
{
private:
	double x, y;
public:
	//----------------------------[ Functions ]----------------------------\\

	/*Const*/	Vector2D(double n_x, double n_y);

	double		getX();
	double		getY();

	void		setX(const double& n_v);
	void		setY(const double& n_v);

	Vector2D	getNormalized();

	double		getLength();

	//----------------------------[ Operators ]----------------------------\\

	Vector2D	operator+(const Vector2D& other);
	Vector2D	operator-(const Vector2D& other);

	Vector2D&	operator+=(const Vector2D& other);
	Vector2D&	operator-=(const Vector2D& other);

	//Output/Input Stream
	friend std::ostream& operator<<(std::ostream& os, const Vector2D& obj);
	friend std::istream& operator>> (std::istream& stream, Vector2D& obj);

};