/*
 * Cat.cpp
 *
 *  Created on: 12 Jun 2019
 *      Author: Dave
 */
#include<iostream>
#include "Cat.h"

using namespace std;

void Cat::eat()
{
	if(happy)
	{
		cout << "Eating..." << "\n";
	}
	else
	{
		cout << "Not hungry." << "\n";
	}
}

void Cat::makeHappy()
{
	happy = true;
}

void Cat::makeSad()
{
	happy = false;
}
