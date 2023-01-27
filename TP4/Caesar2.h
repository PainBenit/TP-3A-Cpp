#pragma once
#include <iostream>
#include "Encrypt.h"

class Caesar2 : public Encrypt
{
public:
	Caesar2();
	void decalage(int nb);
	void encode();
	void decode();

private:
	int _nombre;
};

