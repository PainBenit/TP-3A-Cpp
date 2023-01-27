#pragma once
#include <iostream>
#include "Encrypt.h"
#include <vector>


class Vigenere : public Encrypt
{
public:
	Vigenere();
	void encode();
	void decode();
	void setCle(std::vector <int> cle);


private:
	std::vector <int> _cle;
	/*std::string _cle;*/
	std::string _Alphabet = "abcdefghijklmnopqrstuvwxyz";
};
//modif
