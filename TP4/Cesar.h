#pragma once
#include <iostream>
#include "Encrypt.h"

class Cesar :public Encrypt
{
public:
	Cesar();
	void decalage(int nb);
	void encode();
	void decode();


private:

	int _nombre;
	std::string _Alphabet = "abcdefghijklmnopqrstuvwxyz";

};
//mdofi
